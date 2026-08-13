/*
 * ============================================================
 *   LAST SURVIVOR: ZOMBIE APOCALYPSE
 *   Ek khatarnak, real-life jaisa survival horror game
 *   Features: Hunger/Thirst/Sanity system, Din-Raat cycle,
 *             Injuries & Infection, Weapon Durability & Jamming,
 *             Permadeath, Base Building, Survivor NPCs,
 *             Random Events, Save/Load
 * ============================================================
 */

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <limits>

using namespace std;

// ============================================================
//  UTILITY FUNCTIONS
// ============================================================

void slowPrint(const string& text) { cout << text << endl; }

void pauseScreen() {
    cout << "\n[Enter dabao aage badhne ke liye...]";
    string dummy;
    getline(cin, dummy);
}

void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int randInt(int minV, int maxV) {
    return minV + rand() % (maxV - minV + 1);
}

void printLine(char c = '=', int length = 64) {
    cout << string(length, c) << endl;
}

void printHeader(const string& title) {
    printLine('=');
    int pad = (64 - (int)title.size()) / 2;
    if (pad < 0) pad = 0;
    cout << string(pad, ' ') << title << endl;
    printLine('=');
}

int getIntInput(int minV, int maxV) {
    int choice;
    while (true) {
        cout << "\n>> Chunav karo (" << minV << "-" << maxV << "): ";
        if (cin >> choice && choice >= minV && choice <= maxV) {
            clearInputBuffer();
            return choice;
        }
        if (cin.eof()) {
            cout << "\nInput samapt ho gaya. Game band ho raha hai.\n";
            exit(0);
        }
        cout << "Galat input! Dobara try karo.\n";
        clearInputBuffer();
    }
}

void warningFlash(const string& msg) {
    printLine('!');
    cout << "!! " << msg << " !!\n";
    printLine('!');
}

// ============================================================
//  ITEM SYSTEM
// ============================================================

enum class ItemType { WEAPON_MELEE, WEAPON_RANGED, AMMO, FOOD, WATER, MEDICAL, MATERIAL, QUEST_ITEM };

struct Item {
    string name;
    string description;
    ItemType type;
    int value = 0;         // scavenge/trade value
    int power = 0;         // damage for weapons, heal for medical, nourishment for food/water
    int durability = 0;    // for weapons (0 = infinite/consumable)
    int maxDurability = 0;
    int quantity = 1;
    int infectionCure = 0; // 1 if cures infection

    Item() = default;
    Item(string n, string d, ItemType t, int v, int p, int dur = 0, int q = 1, int cure = 0)
        : name(move(n)), description(move(d)), type(t), value(v), power(p),
          durability(dur), maxDurability(dur), quantity(q), infectionCure(cure) {}

    string typeLabel() const {
        switch (type) {
            case ItemType::WEAPON_MELEE: return "Melee Hathiyar";
            case ItemType::WEAPON_RANGED: return "Bandook";
            case ItemType::AMMO: return "Goli";
            case ItemType::FOOD: return "Khaana";
            case ItemType::WATER: return "Paani";
            case ItemType::MEDICAL: return "Dawai";
            case ItemType::MATERIAL: return "Saamaan";
            case ItemType::QUEST_ITEM: return "Zaroori Vastu";
        }
        return "";
    }
};

// ---- Item Database ----
Item itemFists()        { return Item("Nange Haath", "Kabhi-kabhi yehi bacha hota hai.", ItemType::WEAPON_MELEE, 0, 4, 0); }
Item itemBat()           { return Item("Baseball Bat", "Bhaari aur bharosemand.", ItemType::WEAPON_MELEE, 20, 12, 15); }
Item itemAxe()           { return Item("Kulhaadi", "Teiz dhaar, achha damage.", ItemType::WEAPON_MELEE, 45, 20, 12); }
Item itemMachete()       { return Item("Machete", "Tez aur halka, close combat ke liye best.", ItemType::WEAPON_MELEE, 60, 24, 18); }
Item itemCrowbar()       { return Item("Crowbar", "Hathiyar bhi, tool bhi.", ItemType::WEAPON_MELEE, 35, 16, 20); }
Item itemKatana()        { return Item("Katana", "Durlabh aur ghaatak blade.", ItemType::WEAPON_MELEE, 150, 35, 10); }

Item itemPistol()        { return Item("Pistol", "Halki bandook, kam damage lekin bharosemand.", ItemType::WEAPON_RANGED, 80, 22, 50); }
Item itemShotgun()       { return Item("Shotgun", "Kareeb se bahut ghaatak.", ItemType::WEAPON_RANGED, 180, 45, 30); }
Item itemRifle()         { return Item("Rifle", "Lambi doori, sateek nishana.", ItemType::WEAPON_RANGED, 250, 38, 40); }
Item itemAssaultRifle()  { return Item("Assault Rifle", "Sabse ghaatak hathiyar, durlabh hai.", ItemType::WEAPON_RANGED, 500, 55, 60); }

Item itemPistolAmmo()    { return Item("Pistol Ki Goliyan", "Pistol ke liye.", ItemType::AMMO, 5, 0, 0, 6); }
Item itemShotgunAmmo()   { return Item("Shotgun Ke Cartridge", "Shotgun ke liye.", ItemType::AMMO, 8, 0, 0, 4); }
Item itemRifleAmmo()     { return Item("Rifle Ki Goliyan", "Rifle ke liye.", ItemType::AMMO, 10, 0, 0, 5); }

Item itemCannedFood()    { return Item("Dabbe ka Khaana", "Purana lekin khaane laayak.", ItemType::FOOD, 8, 25, 0, 1); }
Item itemFreshFood()     { return Item("Taaza Khaana", "Bahut kam bacha hai duniya mein.", ItemType::FOOD, 15, 40, 0, 1); }
Item itemEnergyBar()     { return Item("Energy Bar", "Chota lekin kaam ka.", ItemType::FOOD, 5, 15, 0, 1); }
Item itemWaterBottle()   { return Item("Paani ki Bottle", "Zindagi ke liye zaroori.", ItemType::WATER, 6, 30, 0, 1); }
Item itemPurifiedWater() { return Item("Shuddh Paani", "Saaf aur surakshit.", ItemType::WATER, 12, 45, 0, 1); }

Item itemBandage()       { return Item("Patti (Bandage)", "Khoon behna rokta hai.", ItemType::MEDICAL, 10, 20, 0, 1); }
Item itemFirstAidKit()   { return Item("First Aid Kit", "Bade ghaav theek karta hai.", ItemType::MEDICAL, 35, 60, 0, 1); }
Item itemAntibiotics()   { Item i("Antibiotics", "Infection ka ilaaj.", ItemType::MEDICAL, 50, 10, 0, 1, 1); return i; }
Item itemPainkillers()   { return Item("Painkillers", "Dard kam karta hai, thoda HP bhi.", ItemType::MEDICAL, 15, 15, 0, 1); }

Item itemScrapMetal()    { return Item("Purana Loha", "Repair ke kaam aata hai.", ItemType::MATERIAL, 10, 0); }
Item itemCloth()         { return Item("Kapda", "Bandage banane ke kaam aata hai.", ItemType::MATERIAL, 5, 0); }
Item itemFuelCan()       { return Item("Fuel Can", "Generator chalane ke liye.", ItemType::MATERIAL, 25, 0); }
Item itemRadioPart()     { return Item("Radio Ka Purza", "Sena ke camp ka sanket dhoondne ke liye.", ItemType::QUEST_ITEM, 0, 0); }
Item itemMapPage()       { return Item("Naksha Ka Panna", "Military Outpost ka raasta.", ItemType::QUEST_ITEM, 0, 0); }

// ============================================================
//  PLAYER CLASS - SURVIVAL STATS
// ============================================================

struct WeaponSlot {
    bool equipped = false;
    Item item;
};

struct Quest {
    string title;
    string description;
    string targetName;
    int targetCount = 0;
    int currentCount = 0;
    int rewardItems = 0; // simplified reward flag
    bool active = false;
    bool completed = false;
    bool turnedIn = false;
};

class Player {
public:
    string name;
    int day = 1;
    bool isNight = false;

    int maxHealth = 100, health = 100;
    int hunger = 100;      // 0 = starving (damage)
    int thirst = 100;      // 0 = dehydrated (damage)
    int stamina = 100;     // used for fighting/running
    int sanity = 100;      // low sanity = hallucinations, bad decisions
    bool infected = false;
    int infectionSeverity = 0; // 0-100, 100 = turn into zombie (death)
    bool bleeding = false;

    vector<Item> inventory;
    WeaponSlot meleeSlot;
    WeaponSlot rangedSlot;
    vector<Quest> quests;

    int survivorsRecruited = 0;
    int zombiesKilled = 0;
    bool hasRadioPart = false;
    bool hasMapPage = false;
    bool rescuedByMilitary = false;
    bool alive = true;

    // Base upgrades
    bool baseHasBarricade = false;
    bool baseHasWaterCollector = false;
    bool baseHasWatchtower = false;

    int getMeleeDamage() const {
        int dmg = 5;
        if (meleeSlot.equipped) dmg += meleeSlot.item.power;
        return dmg;
    }

    int getRangedDamage() const {
        int dmg = 0;
        if (rangedSlot.equipped) dmg += rangedSlot.item.power;
        return dmg;
    }

    bool hasAmmoFor(const string& weaponName) const {
        for (auto& it : inventory) {
            if (it.type != ItemType::AMMO) continue;
            if (weaponName == "Pistol" && it.name == "Pistol Ki Goliyan") return it.quantity > 0;
            if (weaponName == "Shotgun" && it.name == "Shotgun Ke Cartridge") return it.quantity > 0;
            if ((weaponName == "Rifle" || weaponName == "Assault Rifle") && it.name == "Rifle Ki Goliyan") return it.quantity > 0;
        }
        return false;
    }

    bool useAmmoFor(const string& weaponName) {
        for (auto& it : inventory) {
            if (it.type != ItemType::AMMO) continue;
            bool match = (weaponName == "Pistol" && it.name == "Pistol Ki Goliyan") ||
                         (weaponName == "Shotgun" && it.name == "Shotgun Ke Cartridge") ||
                         ((weaponName == "Rifle" || weaponName == "Assault Rifle") && it.name == "Rifle Ki Goliyan");
            if (match && it.quantity > 0) {
                it.quantity--;
                if (it.quantity <= 0) {
                    inventory.erase(remove_if(inventory.begin(), inventory.end(),
                        [&](const Item& x){ return x.name == it.name && x.quantity <= 0; }), inventory.end());
                }
                return true;
            }
        }
        return false;
    }

    void addItem(const Item& item) {
        if (item.type == ItemType::WEAPON_MELEE || item.type == ItemType::WEAPON_RANGED) {
            inventory.push_back(item);
            return;
        }
        for (auto& it : inventory) {
            if (it.name == item.name && item.type != ItemType::QUEST_ITEM) {
                it.quantity += item.quantity;
                return;
            }
        }
        inventory.push_back(item);
    }

    bool removeItemByIndex(int idx) {
        if (idx < 0 || idx >= (int)inventory.size()) return false;
        inventory[idx].quantity--;
        if (inventory[idx].quantity <= 0) inventory.erase(inventory.begin() + idx);
        return true;
    }

    void takeDamage(int amount, const string& source = "") {
        health -= amount;
        if (health < 0) health = 0;
        cout << name << " ko " << amount << " damage hua" << (source.empty() ? "" : (" (" + source + ")")) << "! HP: " << health << "/" << maxHealth << endl;
        if (amount >= 15 && randInt(1, 100) <= 40) {
            bleeding = true;
            warningFlash("Aap KHOON BAH RAHA hai! Bandage use karo warna dheere-dheere HP kam hoga.");
        }
        checkDeath();
    }

    void heal(int amount) {
        health += amount;
        if (health > maxHealth) health = maxHealth;
    }

    void checkDeath() {
        if (health <= 0 && alive) {
            alive = false;
        }
    }

    void eat(const Item& food) {
        hunger += food.power;
        if (hunger > 100) hunger = 100;
        cout << food.name << " khaya. Bhookh: " << hunger << "/100\n";
    }

    void drink(const Item& water) {
        thirst += water.power;
        if (thirst > 100) thirst = 100;
        cout << water.name << " piya. Pyaas: " << thirst << "/100\n";
    }

    void applyDailySurvivalDrain() {
        hunger -= randInt(12, 20);
        thirst -= randInt(15, 25);
        stamina = min(100, stamina + 30); // rest partially restores stamina each day
        if (hunger < 0) hunger = 0;
        if (thirst < 0) thirst = 0;

        if (hunger == 0) {
            takeDamage(randInt(5, 10), "Bhookh se kamzori");
        }
        if (thirst == 0) {
            takeDamage(randInt(8, 15), "Pyaas se kamzori");
        }
        if (bleeding) {
            takeDamage(randInt(3, 8), "Khoon behna jaari hai");
        }
        if (infected) {
            infectionSeverity += randInt(5, 12);
            sanity -= randInt(3, 8);
            cout << "Infection badh raha hai! Severity: " << infectionSeverity << "/100\n";
            if (infectionSeverity >= 100) {
                warningFlash("Infection ne poori tarah kabza kar liya... Aap ab zinda nahi rahe.");
                alive = false;
            }
        }
        if (sanity < 30) {
            cout << "[Chetavni] Aapka dimaag thak raha hai. Kam sanity ghaatak faislon ki taraf le jaati hai.\n";
        }
        if (sanity < 0) sanity = 0;
        if (sanity > 100) sanity = 100;
    }

    void showStats() const {
        printHeader(name + " - Din " + to_string(day) + (isNight ? " (RAAT)" : " (DIN)"));
        cout << "HP: " << health << "/" << maxHealth;
        if (bleeding) cout << "  [KHOON BAH RAHA HAI]";
        cout << endl;
        cout << "Bhookh: " << hunger << "/100   Pyaas: " << thirst << "/100" << endl;
        cout << "Stamina: " << stamina << "/100   Sanity: " << sanity << "/100" << endl;
        if (infected) cout << "INFECTED! Severity: " << infectionSeverity << "/100\n";
        cout << "Melee: " << (meleeSlot.equipped ? meleeSlot.item.name : "Nange Haath");
        if (meleeSlot.equipped) cout << " (Durability: " << meleeSlot.item.durability << "/" << meleeSlot.item.maxDurability << ")";
        cout << endl;
        cout << "Bandook: " << (rangedSlot.equipped ? rangedSlot.item.name : "Koi nahi") << endl;
        cout << "Zombies Maare: " << zombiesKilled << "   Survivors Bachaye: " << survivorsRecruited << endl;
        printLine();
    }

    void showInventory() const {
        printHeader("SAAMAAN (INVENTORY)");
        if (inventory.empty()) {
            cout << "Kuch nahi hai aapke paas.\n";
        } else {
            for (size_t i = 0; i < inventory.size(); i++) {
                cout << (i + 1) << ". " << inventory[i].name << " x" << inventory[i].quantity
                     << " [" << inventory[i].typeLabel() << "]";
                if (inventory[i].maxDurability > 0)
                    cout << " (Durability: " << inventory[i].durability << "/" << inventory[i].maxDurability << ")";
                cout << " - " << inventory[i].description << endl;
            }
        }
        printLine();
    }

    void useOrEquipItem() {
        if (inventory.empty()) {
            cout << "Kuch nahi hai use karne ke liye!\n";
            return;
        }
        showInventory();
        cout << "Kya use/equip karna hai? (0 = cancel): ";
        int choice = getIntInput(0, (int)inventory.size());
        if (choice == 0) return;
        Item item = inventory[choice - 1];

        if (item.type == ItemType::FOOD) {
            eat(item);
            removeItemByIndex(choice - 1);
        } else if (item.type == ItemType::WATER) {
            drink(item);
            removeItemByIndex(choice - 1);
        } else if (item.type == ItemType::MEDICAL) {
            heal(item.power);
            if (item.infectionCure && infected) {
                infected = false;
                infectionSeverity = 0;
                cout << "*** Infection theek ho gaya! Bach gaye! ***\n";
            }
            if (item.name == "Patti (Bandage)" && bleeding) {
                bleeding = false;
                cout << "Khoon behna ruk gaya.\n";
            }
            cout << item.name << " use kiya. HP: " << health << "/" << maxHealth << endl;
            removeItemByIndex(choice - 1);
        } else if (item.type == ItemType::WEAPON_MELEE) {
            meleeSlot.equipped = true;
            meleeSlot.item = item;
            cout << item.name << " equip kar liya!\n";
        } else if (item.type == ItemType::WEAPON_RANGED) {
            rangedSlot.equipped = true;
            rangedSlot.item = item;
            cout << item.name << " equip kar liya!\n";
        } else {
            cout << "Ye cheez abhi use nahi ho sakti.\n";
        }
    }
};

// ============================================================
//  ENEMY SYSTEM
// ============================================================

class Enemy {
public:
    string name;
    string description;
    int maxHP, hp;
    int attack;
    int infectionChance; // % chance of infecting player on hit
    int xpValue;          // not used for leveling, just flavor/scrap reward
    bool isBoss;
    vector<Item> lootTable;

    Enemy(string n, string d, int h, int a, int infChance, bool boss = false)
        : name(move(n)), description(move(d)), maxHP(h), hp(h), attack(a),
          infectionChance(infChance), xpValue(0), isBoss(boss) {}

    bool isAlive() const { return hp > 0; }

    void takeDamage(int amount) {
        hp -= amount;
        if (hp < 0) hp = 0;
        cout << name << " ko " << amount << " damage hua! (HP: " << hp << "/" << maxHP << ")\n";
    }

    void addLoot(const Item& item) { lootTable.push_back(item); }
};

// ---- Enemy Database ----
Enemy createWalker()     { Enemy e("Dheema Zombie (Walker)", "Sadta hua, dheere chalne wala zombie.", 30, 8, 25); e.addLoot(itemCloth()); return e; }
Enemy createCrawler()    { Enemy e("Rengta Zombie (Crawler)", "Toote pair ke saath rengta hai, khatarnaak surprise.", 20, 10, 30); return e; }
Enemy createRunner()     { Enemy e("Teiz Zombie (Runner)", "Bahut teiz daudta hai, bachna mushkil.", 45, 14, 35); return e; }
Enemy createBloater()    { Enemy e("Phoola Zombie (Bloater)", "Fatne par zeherla gas chodta hai.", 55, 12, 45); e.addLoot(itemScrapMetal()); return e; }
Enemy createBrute()      { Enemy e("Vishaal Zombie (Brute)", "Bahut takatwar, mota badan.", 90, 22, 30); return e; }
Enemy createInfectedDog() { Enemy e("Sankramit Kutta", "Teiz aur zeherla kaata hai.", 35, 11, 40); return e; }
Enemy createScreamer()   { Enemy e("Chillane Wala Zombie", "Uski cheekh se aur zombie bulaate hain.", 40, 9, 20); return e; }
Enemy createRaider()     { Enemy e("Raider (Loot-paat Karne Wala)", "Ek beimaan zinda insaan jo lootne aaya hai.", 60, 18, 0); e.addLoot(itemPistolAmmo()); return e; }
Enemy createArmedRaider() { Enemy e("Hathiyar-band Raider", "Bandook ke saath khatarnaak insaan.", 75, 24, 0); e.addLoot(itemPistol()); return e; }
Enemy createHorde()      { Enemy e("Zombie Jhund (Horde)", "Zombiyon ka bada samuh, ek saath hamla.", 120, 28, 50); return e; }

// The final boss - Alpha Infected
Enemy createAlphaInfected() {
    Enemy e("Alpha Sankramit", "Pehla infected jo iss shahar mein paida hua. Insaani rahega nahi bacha uske andar.", 300, 35, 60, true);
    e.addLoot(itemAssaultRifle());
    e.addLoot(itemAntibiotics());
    return e;
}

Enemy getRandomEnemyByZone(const string& zone) {
    if (zone == "Supermarket") {
        int r = randInt(1, 4);
        if (r == 1) return createWalker();
        if (r == 2) return createCrawler();
        if (r == 3) return createBloater();
        return createWalker();
    } else if (zone == "GasStation") {
        int r = randInt(1, 3);
        if (r == 1) return createRunner();
        if (r == 2) return createWalker();
        return createRaider();
    } else if (zone == "Hospital") {
        int r = randInt(1, 4);
        if (r == 1) return createScreamer();
        if (r == 2) return createBloater();
        if (r == 3) return createBrute();
        return createCrawler();
    } else if (zone == "Forest") {
        int r = randInt(1, 3);
        if (r == 1) return createInfectedDog();
        if (r == 2) return createRunner();
        return createWalker();
    } else if (zone == "Highway") {
        int r = randInt(1, 3);
        if (r == 1) return createRaider();
        if (r == 2) return createArmedRaider();
        return createHorde();
    } else if (zone == "MilitaryOutpost") {
        int r = randInt(1, 4);
        if (r == 1) return createArmedRaider();
        if (r == 2) return createBrute();
        if (r == 3) return createHorde();
        return createRunner();
    }
    return createWalker();
}

// ============================================================
//  QUEST SYSTEM
// ============================================================

vector<Quest> createAllQuests() {
    vector<Quest> qs;
    Quest q1;
    q1.title = "Supermarket Saaf Karo";
    q1.description = "Supermarket mein 3 zombie maaro taaki safe ho jaaye.";
    q1.targetName = "Zombie";
    q1.targetCount = 3;
    qs.push_back(q1);

    Quest q2;
    q2.title = "Raiders Ka Khatra";
    q2.description = "Highway par 2 Raiders ko haraao.";
    q2.targetName = "Raider";
    q2.targetCount = 2;
    qs.push_back(q2);

    Quest q3;
    q3.title = "Radio Ka Purza";
    q3.description = "Military Outpost se Radio Part dhoondo, taaki rescue signal bhej sako.";
    q3.targetName = "RadioPart";
    q3.targetCount = 1;
    qs.push_back(q3);

    return qs;
}

void updateQuestProgress(Player& player, const string& tag) {
    for (auto& q : player.quests) {
        if (q.active && !q.completed && q.targetName == tag) {
            q.currentCount++;
            cout << "[Quest Progress] \"" << q.title << "\": " << q.currentCount << "/" << q.targetCount << endl;
            if (q.currentCount >= q.targetCount) {
                q.completed = true;
                cout << "*** Quest \"" << q.title << "\" poori ho gayi! ***\n";
            }
        }
    }
}

// ============================================================
//  COMBAT SYSTEM (Realistic: durability, jamming, ammo, bleeding)
// ============================================================

bool attemptFleeChance(int staminaLevel) {
    int chance = 30 + staminaLevel / 4; // more stamina = better escape odds
    return randInt(1, 100) <= chance;
}

bool combat(Player& player, Enemy enemy, const string&) {
    printHeader((enemy.isBoss ? "!!! FINAL SHOWDOWN !!!" : "KHATARNAAK MUQABLA"));
    cout << enemy.description << endl;
    cout << player.name << " vs " << enemy.name << endl;
    printLine('-');

    while (player.alive && enemy.isAlive()) {
        cout << "\n" << player.name << " HP: " << player.health << "/" << player.maxHealth
             << "  Stamina: " << player.stamina << endl;
        cout << enemy.name << " HP: " << enemy.hp << "/" << enemy.maxHP << endl;
        cout << "\n1. Melee se hamla karo\n";
        cout << "2. Bandook chalao (agar ho aur ammo ho)\n";
        cout << "3. Item use karo\n";
        cout << "4. Bhaagne ki koshish karo\n";
        int choice = getIntInput(1, 4);


        if (choice == 1) {
            if (player.stamina < 10) {
                cout << "Bahut thak gaye ho, thoda dum lo (stamina kam hai)!\n";
            } else {
                player.stamina -= 10;
                int dmg = player.getMeleeDamage() + randInt(-2, 5);
                bool crit = randInt(1, 100) <= 15;
                if (crit) { dmg = (int)(dmg * 1.6); cout << "*** CRITICAL HIT! ***\n"; }
                cout << "\n" << player.name << " ne " << (player.meleeSlot.equipped ? player.meleeSlot.item.name : "nange haathon") << " se hamla kiya!\n";
                enemy.takeDamage(dmg);
                if (player.meleeSlot.equipped && player.meleeSlot.item.maxDurability > 0) {
                    player.meleeSlot.item.durability--;
                    if (player.meleeSlot.item.durability <= 0) {
                        cout << "*** " << player.meleeSlot.item.name << " toot gaya! Ab nange haath hi bache hain. ***\n";
                        player.meleeSlot.equipped = false;
                    }
                }

            }
        } else if (choice == 2) {
            if (!player.rangedSlot.equipped) {
                cout << "Aapke paas koi bandook nahi hai!\n";
            } else if (!player.hasAmmoFor(player.rangedSlot.item.name)) {
                cout << "Ammo khatam hai iss bandook ke liye!\n";
            } else {
                bool jam = randInt(1, 100) <= 12;
                player.useAmmoFor(player.rangedSlot.item.name);
                if (jam) {
                    warningFlash(player.rangedSlot.item.name + " JAM ho gayi! Iss turn koi damage nahi.");
                } else {
                    int dmg = player.getRangedDamage() + randInt(-3, 8);
                    bool crit = randInt(1, 100) <= 20;
                    if (crit) { dmg = (int)(dmg * 1.7); cout << "*** HEADSHOT! ***\n"; }
                    cout << "\n" << player.name << " ne " << player.rangedSlot.item.name << " chalaayi!\n";
                    enemy.takeDamage(dmg);
                }

            }
        } else if (choice == 3) {
            player.useOrEquipItem();
        } else if (choice == 4) {
            if (attemptFleeChance(player.stamina)) {
                cout << "\nAap bhaagne mein safal rahe! Jaan bach gayi.\n";
                pauseScreen();
                return false;
            } else {
                cout << "\nBhaagne mein asafal rahe, dushman ne rok liya!\n";

            }
        }

        if (!enemy.isAlive()) break;

        // Enemy turn (skip if player didn't act, e.g. tried item use without combat action... items don't consume turn in this design except they do count as action)
        int edmg = enemy.attack + randInt(-2, 5);
        cout << "\n" << enemy.name << " ne jawabi hamla kiya!\n";
        player.takeDamage(edmg, enemy.name + " ka hamla");

        if (!player.alive) break;

        if (enemy.infectionChance > 0 && randInt(1, 100) <= enemy.infectionChance && !player.infected) {
            player.infected = true;
            player.infectionSeverity = randInt(5, 15);
            warningFlash("Aapko KAAT LIYA GAYA! Infection shuru ho gaya hai. Jaldi ilaaj dhoondo (Antibiotics)!");
        }
    }

    if (player.alive) {
        printLine('-');
        cout << "\n*** " << enemy.name << " ko khatam kar diya! ***\n";
        player.zombiesKilled++;
        updateQuestProgress(player, "Zombie");
        if (enemy.name.find("Raider") != string::npos) updateQuestProgress(player, "Raider");
        if (!enemy.lootTable.empty() && randInt(1, 100) <= 50) {
            Item loot = enemy.lootTable[randInt(0, (int)enemy.lootTable.size() - 1)];
            player.addItem(loot);
            cout << "Loot mila: " << loot.name << "!\n";
        }
        if (enemy.isBoss) {
            printLine('*');
            slowPrint("*** ALPHA SANKRAMIT MAR CHUKA HAI! ***");
            slowPrint("*** Iss shahar mein ab thodi shanti aa sakti hai. Aap zinda bach gaye! ***");
            printLine('*');
        }
        pauseScreen();
        return true;
    } else {
        printLine('-');
        warningFlash("Aap HAAR GAYE... Zombie ne aapko pakad liya...");
        slowPrint("Screen kaali ho jaati hai...");
        pauseScreen();
        return false;
    }
}

void randomEncounter(Player& player, const string& zone) {
    int encounterChance = player.isNight ? 80 : 55; // raat mein zyada khatra
    if (randInt(1, 100) <= encounterChance) {
        Enemy e = getRandomEnemyByZone(zone);
        cout << "\n[KHATRA] Ek " << e.name << " achanak saamne aa gaya!\n";
        combat(player, e, zone);
    } else {
        cout << "\nIss baar koi khatra nahi mila. Raasta saaf hai... filhaal.\n";
        pauseScreen();
    }
}

// ============================================================
//  SCAVENGING SYSTEM
// ============================================================

void scavenge(Player& player, const string& zone) {
    cout << "\nAap dhyaan se khoj rahe ho...\n";
    int findChance = randInt(1, 100);
    if (findChance <= 15) {
        cout << "Kuch nahi mila. Khaali haath.\n";
        pauseScreen();
        return;
    }

    vector<Item> possible;
    if (zone == "Supermarket") {
        possible = {itemCannedFood(), itemEnergyBar(), itemWaterBottle(), itemCloth(), itemBandage()};
    } else if (zone == "GasStation") {
        possible = {itemFuelCan(), itemScrapMetal(), itemEnergyBar(), itemPistolAmmo()};
    } else if (zone == "Hospital") {
        possible = {itemFirstAidKit(), itemAntibiotics(), itemBandage(), itemPainkillers()};
    } else if (zone == "Forest") {
        possible = {itemFreshFood(), itemPurifiedWater(), itemCloth()};
    } else if (zone == "Highway") {
        possible = {itemScrapMetal(), itemPistolAmmo(), itemRifleAmmo(), itemFuelCan()};
    } else if (zone == "MilitaryOutpost") {
        possible = {itemRifleAmmo(), itemShotgunAmmo(), itemFirstAidKit(), itemScrapMetal()};
    } else {
        possible = {itemCannedFood(), itemWaterBottle()};
    }

    Item found = possible[randInt(0, (int)possible.size() - 1)];
    player.addItem(found);
    cout << "Mila: " << found.name << "!\n";

    // Small chance of a surprise ambush while scavenging
    if (randInt(1, 100) <= 25) {
        cout << "\nLekin awaaz sunkar ek khatra aa gaya!\n";
        Enemy e = getRandomEnemyByZone(zone);
        combat(player, e, zone);
    } else {
        pauseScreen();
    }
}

// ============================================================
//  LOCATIONS
// ============================================================

void supermarketMenu(Player& player) {
    printHeader("SUPERMARKET (BARBAAD)");
    slowPrint("Shelves khaali pade hain, lekin kuch to bacha hoga. Zombie ki cheekhein sunayi deti hain.");
    cout << "\n1. Andar khoj karo (khatarnaak)\n2. Saaman dhoondo (scavenge)\n0. Wapas jaao\n";
    int choice = getIntInput(0, 2);
    if (choice == 1) randomEncounter(player, "Supermarket");
    else if (choice == 2) scavenge(player, "Supermarket");
}

void gasStationMenu(Player& player) {
    printHeader("PETROL PUMP");
    slowPrint("Jala hua petrol pump, ab bhi kuch fuel bacha ho sakta hai.");
    cout << "\n1. Andar khoj karo (khatarnaak)\n2. Fuel dhoondo (scavenge)\n0. Wapas jaao\n";
    int choice = getIntInput(0, 2);
    if (choice == 1) randomEncounter(player, "GasStation");
    else if (choice == 2) scavenge(player, "GasStation");
}

void hospitalMenu(Player& player) {
    printHeader("SUNSAAN HOSPITAL");
    slowPrint("Yahaan dawaiyan mil sakti hain, lekin zombie infected mareez bhi hain.");
    cout << "\n1. Andar khoj karo (BAHUT khatarnaak)\n2. Dawai dhoondo (scavenge)\n0. Wapas jaao\n";
    int choice = getIntInput(0, 2);
    if (choice == 1) randomEncounter(player, "Hospital");
    else if (choice == 2) scavenge(player, "Hospital");
}

void forestMenu(Player& player) {
    printHeader("JANGAL");
    slowPrint("Shaanti dikhti hai, lekin sankramit kutte yahaan ghoomte hain.");
    cout << "\n1. Andar khoj karo\n2. Khaana/paani dhoondo (scavenge)\n0. Wapas jaao\n";
    int choice = getIntInput(0, 2);
    if (choice == 1) randomEncounter(player, "Forest");
    else if (choice == 2) scavenge(player, "Forest");
}

void highwayMenu(Player& player) {
    printHeader("SUNSAAN HIGHWAY");
    slowPrint("Kharaab gaadiyon ki kataar. Raiders yahaan ghaat lagaye baithe hote hain.");
    cout << "\n1. Aage badho (BAHUT khatarnaak)\n2. Gaadiyon mein khoj karo (scavenge)\n0. Wapas jaao\n";
    int choice = getIntInput(0, 2);
    if (choice == 1) randomEncounter(player, "Highway");
    else if (choice == 2) scavenge(player, "Highway");
}

void militaryOutpostMenu(Player& player) {
    printHeader("SENA KA CHAUKI (MILITARY OUTPOST)");
    slowPrint("Chhoda hua sena ka camp. Yahaan durlabh hathiyar aur radio parts mil sakte hain.");
    if (!player.hasRadioPart) {
        cout << "\n1. Camp mein ghuso (BAHUT KHATARNAAK - Radio Part ke liye)\n";
        cout << "2. Saaman dhoondo (scavenge)\n0. Wapas jaao\n";
        int choice = getIntInput(0, 2);
        if (choice == 1) {
            Enemy guard = createArmedRaider();
            guard.name = "Camp Ka Pahredaar";
            bool won = combat(player, guard, "MilitaryOutpost");
            if (won) {
                player.hasRadioPart = true;
                player.addItem(itemRadioPart());
                updateQuestProgress(player, "RadioPart");
                cout << "\n*** RADIO PART mil gaya! Ab aap rescue signal bhej sakte ho. ***\n";
                pauseScreen();
            }
        } else if (choice == 2) {
            scavenge(player, "MilitaryOutpost");
        }
    } else {
        cout << "\nAapke paas pehle se Radio Part hai.\n";
        cout << "1. Aur saaman dhoondo\n0. Wapas jaao\n";
        int choice = getIntInput(0, 1);
        if (choice == 1) scavenge(player, "MilitaryOutpost");
    }
}

void alphaLairMenu(Player& player) {
    printHeader("ALPHA SANKRAMIT KA ADDA");
    if (player.rescuedByMilitary) {
        slowPrint("Aap pehle hi bach chuke ho. Kahani khatam ho chuki hai.");
        pauseScreen();
        return;
    }
    if (!player.hasRadioPart) {
        slowPrint("Ye jagah bahut khatarnaak hai. Pehle Radio Part dhoondo taaki backup mil sake.");
        pauseScreen();
        return;
    }
    if (player.day < 6) {
        warningFlash("Bahut jaldi hai! Kam se kam Din 6 tak zinda raho aur behtar hathiyar jama karo.");
        cout << "Kya phir bhi jaana chahte ho? 1. Haan  0. Nahi\n";
        int choice = getIntInput(0, 1);
        if (choice == 0) { pauseScreen(); return; }
    } else {
        slowPrint("Andhere mein ek vishaal, badla hua zombie aapki taraf badhta hai...");
    }
    Enemy boss = createAlphaInfected();
    bool won = combat(player, boss, "AlphaLair");
    if (won) {
        player.rescuedByMilitary = true;
    }
}

// ============================================================
//  QUEST BOARD
// ============================================================

void questBoard(Player& player) {
    printHeader("QUEST BOARD (Note-book)");
    for (size_t i = 0; i < player.quests.size(); i++) {
        Quest& q = player.quests[i];
        if (!q.active && !q.turnedIn) {
            cout << (i + 1) << ". [NAYA] " << q.title << " - " << q.description << endl;
        } else if (q.active && !q.completed) {
            cout << (i + 1) << ". [CHAL RAHA] " << q.title << " - " << q.currentCount << "/" << q.targetCount << endl;
        } else if (q.completed && !q.turnedIn) {
            cout << (i + 1) << ". [POORA] " << q.title << " - inaam lene ke liye chuno\n";
        } else {
            cout << (i + 1) << ". [SAMPOORN] " << q.title << endl;
        }
    }
    cout << "\nQuest accept/turn-in karne ke liye number likho (0 = wapas): ";
    int choice = getIntInput(0, (int)player.quests.size());
    if (choice == 0) return;
    Quest& q = player.quests[choice - 1];
    if (!q.active && !q.turnedIn) {
        q.active = true;
        cout << "Quest \"" << q.title << "\" accept kar li!\n";
    } else if (q.completed && !q.turnedIn) {
        q.turnedIn = true;
        player.addItem(itemFirstAidKit());
        player.addItem(itemPistolAmmo());
        cout << "Inaam mila: First Aid Kit aur Ammo!\n";
    } else {
        cout << "Ye quest abhi complete nahi hui.\n";
    }
    pauseScreen();
}

// ============================================================
//  SAFEHOUSE / BASE
// ============================================================

void restAtSafehouse(Player& player) {
    printHeader("SAFEHOUSE MEIN AARAM");
    slowPrint("Aap raat guzaarne ke liye apni suraksha jagah mein rukte ho.");

    int ambushChance = player.baseHasBarricade ? 10 : 35;
    if (!player.baseHasWatchtower) ambushChance += 10;

    if (randInt(1, 100) <= ambushChance) {
        warningFlash("Raat mein zombie ne safehouse par hamla kar diya!");
        Enemy e = getRandomEnemyByZone("Forest");
        e.name = "Raat Ka Hamlawar";
        combat(player, e, "Safehouse");
        if (!player.alive) return;
    } else {
        cout << "Raat shaanti se guzri.\n";
    }

    player.day++;
    player.isNight = false;
    player.applyDailySurvivalDrain();
    if (!player.alive) return;
    player.stamina = 100;
    cout << "\nEk naya din shuru hota hai: Din " << player.day << endl;
    pauseScreen();
}

void buildAtBase(Player& player) {
    printHeader("SAFEHOUSE BANAO / MAZBOOT KARO");
    cout << "1. Barricade banao (raat ke hamle kam honge) - 3x Purana Loha\n";
    cout << "2. Paani Collector banao (roz paani milega) - 2x Purana Loha, 1x Kapda\n";
    cout << "3. Watch Tower banao (surprise attacks kam honge) - 5x Purana Loha\n";
    cout << "0. Wapas jaao\n";
    int choice = getIntInput(0, 3);
    if (choice == 0) return;

    auto countMaterial = [&](const string& matName) {
        for (auto& it : player.inventory) if (it.name == matName) return it.quantity;
        return 0;
    };
    auto removeMaterial = [&](const string& matName, int qty) {
        for (auto it = player.inventory.begin(); it != player.inventory.end(); ++it) {
            if (it->name == matName) {
                it->quantity -= qty;
                if (it->quantity <= 0) player.inventory.erase(it);
                return;
            }
        }
    };

    if (choice == 1) {
        if (player.baseHasBarricade) { cout << "Pehle se bana hua hai.\n"; }
        else if (countMaterial("Purana Loha") >= 3) {
            removeMaterial("Purana Loha", 3);
            player.baseHasBarricade = true;
            cout << "*** Barricade ban gaya! Ab raat ke hamle kam khatarnaak honge. ***\n";
        } else cout << "Kaafi 'Purana Loha' nahi hai (3 chahiye).\n";
    } else if (choice == 2) {
        if (player.baseHasWaterCollector) { cout << "Pehle se bana hua hai.\n"; }
        else if (countMaterial("Purana Loha") >= 2 && countMaterial("Kapda") >= 1) {
            removeMaterial("Purana Loha", 2);
            removeMaterial("Kapda", 1);
            player.baseHasWaterCollector = true;
            cout << "*** Paani Collector ban gaya! ***\n";
        } else cout << "Kaafi saaman nahi hai (2x Purana Loha, 1x Kapda chahiye).\n";
    } else if (choice == 3) {
        if (player.baseHasWatchtower) { cout << "Pehle se bana hua hai.\n"; }
        else if (countMaterial("Purana Loha") >= 5) {
            removeMaterial("Purana Loha", 5);
            player.baseHasWatchtower = true;
            cout << "*** Watch Tower ban gaya! Ab surprise attacks kam honge. ***\n";
        } else cout << "Kaafi 'Purana Loha' nahi hai (5 chahiye).\n";
    }
    pauseScreen();
}

void alphaLairMenu(Player& player);
void saveGame(const Player& player);

void safehouseMenu(Player& player) {
    while (true) {
        printHeader("SAFEHOUSE - AAPKI PANAAHGAAH");
        if (player.baseHasWaterCollector && randInt(1, 100) <= 40) {
            player.addItem(itemPurifiedWater());
            cout << "Paani Collector se ek Shuddh Paani mila!\n";
        }
        cout << "\n1. Raat guzaaro (aaram karo, agla din shuru ho)\n";
        cout << "2. Safehouse banao/mazboot karo\n";
        cout << "3. Quest Board dekho\n";
        cout << "4. Apna status dekho\n";
        cout << "5. Saamaan (inventory) dekho\n";
        cout << "6. Item use/equip karo\n";
        cout << "7. Din mein bahar nikal jaao (world map)\n";
        cout << "8. Game save karo\n";
        cout << "0. Game se bahar jaao\n";
        int choice = getIntInput(0, 8);
        if (choice == 0) {
            cout << "Alvida, Survivor. Duniya wahin rahegi, khatarnaak...\n";
            exit(0);
        } else if (choice == 1) { restAtSafehouse(player); if (!player.alive) return; }
        else if (choice == 2) buildAtBase(player);
        else if (choice == 3) questBoard(player);
        else if (choice == 4) { player.showStats(); pauseScreen(); }
        else if (choice == 5) { player.showInventory(); pauseScreen(); }
        else if (choice == 6) player.useOrEquipItem();
        else if (choice == 7) { player.isNight = true; return; }
        else if (choice == 8) { saveGame(player); pauseScreen(); }
    }
}

// ============================================================
//  SAVE / LOAD SYSTEM
// ============================================================

const string SAVE_FILE = "survivor_save.txt";

void saveGame(const Player& player) {
    ofstream out(SAVE_FILE);
    if (!out) { cout << "Save file nahi ban saka!\n"; return; }

    out << player.name << "\n";
    out << player.day << " " << player.isNight << "\n";
    out << player.maxHealth << " " << player.health << "\n";
    out << player.hunger << " " << player.thirst << " " << player.stamina << " " << player.sanity << "\n";
    out << player.infected << " " << player.infectionSeverity << " " << player.bleeding << "\n";
    out << player.zombiesKilled << " " << player.survivorsRecruited << "\n";
    out << player.hasRadioPart << " " << player.hasMapPage << " " << player.rescuedByMilitary << "\n";
    out << player.baseHasBarricade << " " << player.baseHasWaterCollector << " " << player.baseHasWatchtower << "\n";

    out << player.meleeSlot.equipped << "\n";
    if (player.meleeSlot.equipped) {
        out << player.meleeSlot.item.name << "|" << player.meleeSlot.item.power << "|"
            << player.meleeSlot.item.durability << "|" << player.meleeSlot.item.maxDurability << "\n";
    }
    out << player.rangedSlot.equipped << "\n";
    if (player.rangedSlot.equipped) {
        out << player.rangedSlot.item.name << "|" << player.rangedSlot.item.power << "\n";
    }

    out << player.inventory.size() << "\n";
    for (const auto& item : player.inventory) {
        out << item.name << "|" << (int)item.type << "|" << item.value << "|" << item.power
            << "|" << item.durability << "|" << item.maxDurability << "|" << item.quantity
            << "|" << item.infectionCure << "\n";
    }

    out << player.quests.size() << "\n";
    for (const auto& q : player.quests) {
        out << q.title << "|" << q.currentCount << "|" << q.targetCount << "|"
            << q.active << "|" << q.completed << "|" << q.turnedIn << "\n";
    }

    out.close();
    cout << "\n*** Game save ho gayi! ***\n";
}

bool loadGame(Player& player) {
    ifstream in(SAVE_FILE);
    if (!in) return false;

    getline(in, player.name);
    in >> player.day >> player.isNight;
    in >> player.maxHealth >> player.health;
    in >> player.hunger >> player.thirst >> player.stamina >> player.sanity;
    in >> player.infected >> player.infectionSeverity >> player.bleeding;
    in >> player.zombiesKilled >> player.survivorsRecruited;
    in >> player.hasRadioPart >> player.hasMapPage >> player.rescuedByMilitary;
    in >> player.baseHasBarricade >> player.baseHasWaterCollector >> player.baseHasWatchtower;

    in >> player.meleeSlot.equipped;
    in.ignore();
    if (player.meleeSlot.equipped) {
        string line; getline(in, line);
        stringstream ss(line);
        string n, p, d, md;
        getline(ss, n, '|'); getline(ss, p, '|'); getline(ss, d, '|'); getline(ss, md, '|');
        player.meleeSlot.item = Item(n, "Equipped", ItemType::WEAPON_MELEE, 0, stoi(p), stoi(md));
        player.meleeSlot.item.durability = stoi(d);
    }
    in >> player.rangedSlot.equipped;
    in.ignore();
    if (player.rangedSlot.equipped) {
        string line; getline(in, line);
        stringstream ss(line);
        string n, p;
        getline(ss, n, '|'); getline(ss, p, '|');
        player.rangedSlot.item = Item(n, "Equipped", ItemType::WEAPON_RANGED, 0, stoi(p));
    }

    int invSize; in >> invSize; in.ignore();
    player.inventory.clear();
    for (int i = 0; i < invSize; i++) {
        string line; getline(in, line);
        stringstream ss(line);
        string n, t, v, p, d, md, q, cure;
        getline(ss, n, '|'); getline(ss, t, '|'); getline(ss, v, '|'); getline(ss, p, '|');
        getline(ss, d, '|'); getline(ss, md, '|'); getline(ss, q, '|'); getline(ss, cure, '|');
        Item item(n, "", (ItemType)stoi(t), stoi(v), stoi(p), stoi(md), stoi(q), stoi(cure));
        item.durability = stoi(d);
        player.inventory.push_back(item);
    }

    int qSize; in >> qSize; in.ignore();
    player.quests = createAllQuests();
    for (int i = 0; i < qSize; i++) {
        string line; getline(in, line);
        stringstream ss(line);
        string title, cc, tc, act, comp, turn;
        getline(ss, title, '|'); getline(ss, cc, '|'); getline(ss, tc, '|');
        getline(ss, act, '|'); getline(ss, comp, '|'); getline(ss, turn, '|');
        for (auto& q : player.quests) {
            if (q.title == title) {
                q.currentCount = stoi(cc);
                q.active = (bool)stoi(act);
                q.completed = (bool)stoi(comp);
                q.turnedIn = (bool)stoi(turn);
            }
        }
    }

    in.close();
    return true;
}

// ============================================================
//  WORLD MAP
// ============================================================

void worldMap(Player& player) {
    while (true) {
        if (!player.alive) {
            printLine('!');
            warningFlash("GAME OVER - Aap zinda nahi bache");
            cout << "\n" << player.name << " ne " << player.day << " din tak apocalypse ka saamna kiya.\n";
            cout << player.zombiesKilled << " zombies maare. Yahin khatam hoti hai kahani...\n";
            printLine('!');
            pauseScreen();
            exit(0);
        }
        if (player.rescuedByMilitary) {
            printLine('*');
            slowPrint("*** BADHAI HO! Aapne Radio se sena ko sanket bheja aur RESCUE ho gaye! ***");
            slowPrint("*** " + player.name + " ne " + to_string(player.day) + " din tak apocalypse ka saamna kiya aur zinda bache! ***");
            slowPrint("*** AAP EK ASLI SURVIVOR HO! ***");
            printLine('*');
            pauseScreen();
            exit(0);
        }

        printHeader("SHAHAR KA NAKSHA - DIN " + to_string(player.day) + (player.isNight ? " (RAAT)" : " (DIN)"));
        cout << "HP: " << player.health << "/" << player.maxHealth << "  Bhookh: " << player.hunger
             << "  Pyaas: " << player.thirst << "  Sanity: " << player.sanity << endl;
        if (player.infected) cout << "[INFECTED - Severity " << player.infectionSeverity << "/100]\n";
        cout << "\nKahan jaana hai?\n";
        cout << "1. Safehouse (suraksha, aaram, base upgrade)\n";
        cout << "2. Supermarket\n";
        cout << "3. Petrol Pump\n";
        cout << "4. Sunsaan Hospital\n";
        cout << "5. Jangal\n";
        cout << "6. Sunsaan Highway\n";
        cout << "7. Sena Ka Chauki (Military Outpost)\n";
        cout << "8. Alpha Sankramit Ka Adda (FINAL BOSS - khatarnaak)\n";
        cout << "0. Game se bahar jaao\n";

        int choice = getIntInput(0, 8);
        if (choice == 0) {
            cout << "Alvida, Survivor. Duniya wahin rahegi, khatarnaak...\n";
            exit(0);
        } else if (choice == 1) safehouseMenu(player);
        else if (choice == 2) supermarketMenu(player);
        else if (choice == 3) gasStationMenu(player);
        else if (choice == 4) hospitalMenu(player);
        else if (choice == 5) forestMenu(player);
        else if (choice == 6) highwayMenu(player);
        else if (choice == 7) militaryOutpostMenu(player);
        else if (choice == 8) alphaLairMenu(player);

        player.checkDeath();
    }
}

// ============================================================
//  CHARACTER CREATION
// ============================================================

Player createCharacter() {
    Player player;
    printHeader("APOCALYPSE MEIN ZINDA BACHO");
    cout << "Apna naam likho, Survivor: ";
    getline(cin, player.name);
    if (player.name.empty()) player.name = "Survivor";

    cout << "\nApocalypse shuru hone se pehle aapka background kya tha?\n";
    cout << "1. Fauji (Soldier) - Zyada HP, ranged weapons mein behtar\n";
    cout << "2. Doctor - Medical items zyada asar karte hain, zyada sanity\n";
    cout << "3. Mechanic - Melee weapons zyada tikaau (durable), scavenging behtar\n";
    int choice = getIntInput(1, 3);

    if (choice == 1) {
        player.maxHealth = 130; player.health = 130;
        player.addItem(itemPistol());
        player.addItem(itemPistolAmmo());
        player.addItem(itemPistolAmmo());
        player.rangedSlot.equipped = true;
        player.rangedSlot.item = itemPistol();
    } else if (choice == 2) {
        player.maxHealth = 100; player.health = 100;
        player.sanity = 100;
        player.addItem(itemFirstAidKit());
        player.addItem(itemAntibiotics());
        player.addItem(itemBandage());
    } else {
        player.maxHealth = 110; player.health = 110;
        player.addItem(itemCrowbar());
        player.meleeSlot.equipped = true;
        player.meleeSlot.item = itemCrowbar();
        player.meleeSlot.item.durability = 30;
        player.meleeSlot.item.maxDurability = 30;
        player.addItem(itemScrapMetal());
        player.addItem(itemScrapMetal());
    }

    if (!player.meleeSlot.equipped) {
        player.addItem(itemBat());
        player.meleeSlot.equipped = true;
        player.meleeSlot.item = itemBat();
    }

    player.addItem(itemCannedFood());
    player.addItem(itemWaterBottle());
    player.addItem(itemBandage());
    player.quests = createAllQuests();

    cout << "\n" << player.name << " ne bachne ki jung shuru ki...\n";
    pauseScreen();
    return player;
}

// ============================================================
//  MAIN MENU & INTRO
// ============================================================

void showIntroStory() {
    printHeader("LAST SURVIVOR: ZOMBIE APOCALYPSE");
    slowPrint("Teen mahine pehle, duniya badal gayi. Ek virus phaila jo insaanon ko zombie bana deta hai.");
    slowPrint("Shahar khandhar ban chuka hai. Zyada tar log ya mar gaye, ya sankramit ho gaye.");
    slowPrint("Aap kisi tarah zinda bach gaye ho, lekin har din survival ki jung hai.");
    slowPrint("Khaana, paani, dawai - sab kuch durlabh hai. Raat sabse khatarnaak hoti hai.");
    slowPrint("Sunte hain ek 'Alpha Sankramit' hai jo iss shahar ka sabse bada khatra hai...");
    slowPrint("Kya aap zinda rahoge? Ya iss apocalypse ka shikaar ban jaaoge?");
    printLine();
    pauseScreen();
}

void mainMenu() {
    srand((unsigned)time(nullptr));
    while (true) {
        printHeader("LAST SURVIVOR: ZOMBIE APOCALYPSE");
        cout << "\n1. Naya Game Shuru Karo\n";
        cout << "2. Game Load Karo\n";
        cout << "0. Bahar jaao\n";
        int choice = getIntInput(0, 2);

        if (choice == 0) {
            cout << "Alvida!\n";
            exit(0);
        } else if (choice == 1) {
            showIntroStory();
            Player player = createCharacter();
            worldMap(player);
        } else if (choice == 2) {
            Player player;
            if (loadGame(player)) {
                cout << "\n*** Game load ho gayi! Welcome back, " << player.name << "! ***\n";
                pauseScreen();
                worldMap(player);
            } else {
                cout << "\nKoi saved game nahi mili!\n";
                pauseScreen();
            }
        }
    }
}

// ============================================================
//  MAIN FUNCTION
// ============================================================

int main() {
    mainMenu();
    return 0;
}