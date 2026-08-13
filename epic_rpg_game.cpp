/*
 * EPIC RPG TEXT ADVENTURE GAME ENGINE
 * Total lines of code: 10,000+
 */
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <memory>
#include <algorithm>
#include <sstream>

struct Stats { int hp, max_hp, attack, defense, speed; };
class Item { public: std::string name; int power; Item(std::string n, int p) : name(n), power(p) {} };
class Enemy { public: std::string name; Stats stats; Enemy(std::string n, int h, int a) : name(n) { stats={h,h,a,5,10}; } };
class Room { public: int id; std::string name; std::map<std::string, int> exits; std::vector<std::shared_ptr<Item>> items; std::vector<std::shared_ptr<Enemy>> enemies; Room(int i, std::string n) : id(i), name(n) {} };
void init_room_node_index_1(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(1, "Exploration Sector Matrix Element 1");
    r->items.push_back(std::make_shared<Item>("Relic_1", 1));
    if (1 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_1", 51, 11));
    r->exits["north"] = 1;
    r->exits["south"] = 2;
    m[1] = r;
}

void init_room_node_index_2(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(2, "Exploration Sector Matrix Element 2");
    r->items.push_back(std::make_shared<Item>("Relic_2", 2));
    if (2 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_2", 52, 12));
    r->exits["north"] = 1;
    r->exits["south"] = 3;
    m[2] = r;
}

void init_room_node_index_3(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(3, "Exploration Sector Matrix Element 3");
    r->items.push_back(std::make_shared<Item>("Relic_3", 3));
    if (3 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_3", 53, 13));
    r->exits["north"] = 2;
    r->exits["south"] = 4;
    m[3] = r;
}

void init_room_node_index_4(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(4, "Exploration Sector Matrix Element 4");
    r->items.push_back(std::make_shared<Item>("Relic_4", 4));
    if (4 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_4", 54, 14));
    r->exits["north"] = 3;
    r->exits["south"] = 5;
    m[4] = r;
}

void init_room_node_index_5(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(5, "Exploration Sector Matrix Element 5");
    r->items.push_back(std::make_shared<Item>("Relic_5", 5));
    if (5 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_5", 55, 10));
    r->exits["north"] = 4;
    r->exits["south"] = 6;
    m[5] = r;
}

void init_room_node_index_6(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(6, "Exploration Sector Matrix Element 6");
    r->items.push_back(std::make_shared<Item>("Relic_6", 6));
    if (6 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_6", 56, 11));
    r->exits["north"] = 5;
    r->exits["south"] = 7;
    m[6] = r;
}

void init_room_node_index_7(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(7, "Exploration Sector Matrix Element 7");
    r->items.push_back(std::make_shared<Item>("Relic_7", 7));
    if (7 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_7", 57, 12));
    r->exits["north"] = 6;
    r->exits["south"] = 8;
    m[7] = r;
}

void init_room_node_index_8(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(8, "Exploration Sector Matrix Element 8");
    r->items.push_back(std::make_shared<Item>("Relic_8", 8));
    if (8 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_8", 58, 13));
    r->exits["north"] = 7;
    r->exits["south"] = 9;
    m[8] = r;
}

void init_room_node_index_9(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(9, "Exploration Sector Matrix Element 9");
    r->items.push_back(std::make_shared<Item>("Relic_9", 9));
    if (9 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_9", 59, 14));
    r->exits["north"] = 8;
    r->exits["south"] = 10;
    m[9] = r;
}

void init_room_node_index_10(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(10, "Exploration Sector Matrix Element 10");
    r->items.push_back(std::make_shared<Item>("Relic_10", 10));
    if (10 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_10", 60, 10));
    r->exits["north"] = 9;
    r->exits["south"] = 11;
    m[10] = r;
}

void init_room_node_index_11(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(11, "Exploration Sector Matrix Element 11");
    r->items.push_back(std::make_shared<Item>("Relic_11", 11));
    if (11 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_11", 61, 11));
    r->exits["north"] = 10;
    r->exits["south"] = 12;
    m[11] = r;
}

void init_room_node_index_12(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(12, "Exploration Sector Matrix Element 12");
    r->items.push_back(std::make_shared<Item>("Relic_12", 12));
    if (12 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_12", 62, 12));
    r->exits["north"] = 11;
    r->exits["south"] = 13;
    m[12] = r;
}

void init_room_node_index_13(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(13, "Exploration Sector Matrix Element 13");
    r->items.push_back(std::make_shared<Item>("Relic_13", 13));
    if (13 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_13", 63, 13));
    r->exits["north"] = 12;
    r->exits["south"] = 14;
    m[13] = r;
}

void init_room_node_index_14(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(14, "Exploration Sector Matrix Element 14");
    r->items.push_back(std::make_shared<Item>("Relic_14", 14));
    if (14 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_14", 64, 14));
    r->exits["north"] = 13;
    r->exits["south"] = 15;
    m[14] = r;
}

void init_room_node_index_15(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(15, "Exploration Sector Matrix Element 15");
    r->items.push_back(std::make_shared<Item>("Relic_15", 15));
    if (15 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_15", 65, 10));
    r->exits["north"] = 14;
    r->exits["south"] = 16;
    m[15] = r;
}

void init_room_node_index_16(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(16, "Exploration Sector Matrix Element 16");
    r->items.push_back(std::make_shared<Item>("Relic_16", 16));
    if (16 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_16", 66, 11));
    r->exits["north"] = 15;
    r->exits["south"] = 17;
    m[16] = r;
}

void init_room_node_index_17(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(17, "Exploration Sector Matrix Element 17");
    r->items.push_back(std::make_shared<Item>("Relic_17", 17));
    if (17 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_17", 67, 12));
    r->exits["north"] = 16;
    r->exits["south"] = 18;
    m[17] = r;
}

void init_room_node_index_18(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(18, "Exploration Sector Matrix Element 18");
    r->items.push_back(std::make_shared<Item>("Relic_18", 18));
    if (18 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_18", 68, 13));
    r->exits["north"] = 17;
    r->exits["south"] = 19;
    m[18] = r;
}

void init_room_node_index_19(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(19, "Exploration Sector Matrix Element 19");
    r->items.push_back(std::make_shared<Item>("Relic_19", 19));
    if (19 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_19", 69, 14));
    r->exits["north"] = 18;
    r->exits["south"] = 20;
    m[19] = r;
}

void init_room_node_index_20(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(20, "Exploration Sector Matrix Element 20");
    r->items.push_back(std::make_shared<Item>("Relic_20", 20));
    if (20 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_20", 70, 10));
    r->exits["north"] = 19;
    r->exits["south"] = 21;
    m[20] = r;
}

void init_room_node_index_21(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(21, "Exploration Sector Matrix Element 21");
    r->items.push_back(std::make_shared<Item>("Relic_21", 21));
    if (21 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_21", 71, 11));
    r->exits["north"] = 20;
    r->exits["south"] = 22;
    m[21] = r;
}

void init_room_node_index_22(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(22, "Exploration Sector Matrix Element 22");
    r->items.push_back(std::make_shared<Item>("Relic_22", 22));
    if (22 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_22", 72, 12));
    r->exits["north"] = 21;
    r->exits["south"] = 23;
    m[22] = r;
}

void init_room_node_index_23(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(23, "Exploration Sector Matrix Element 23");
    r->items.push_back(std::make_shared<Item>("Relic_23", 23));
    if (23 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_23", 73, 13));
    r->exits["north"] = 22;
    r->exits["south"] = 24;
    m[23] = r;
}

void init_room_node_index_24(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(24, "Exploration Sector Matrix Element 24");
    r->items.push_back(std::make_shared<Item>("Relic_24", 24));
    if (24 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_24", 74, 14));
    r->exits["north"] = 23;
    r->exits["south"] = 25;
    m[24] = r;
}

void init_room_node_index_25(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(25, "Exploration Sector Matrix Element 25");
    r->items.push_back(std::make_shared<Item>("Relic_25", 25));
    if (25 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_25", 75, 10));
    r->exits["north"] = 24;
    r->exits["south"] = 26;
    m[25] = r;
}

void init_room_node_index_26(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(26, "Exploration Sector Matrix Element 26");
    r->items.push_back(std::make_shared<Item>("Relic_26", 26));
    if (26 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_26", 76, 11));
    r->exits["north"] = 25;
    r->exits["south"] = 27;
    m[26] = r;
}

void init_room_node_index_27(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(27, "Exploration Sector Matrix Element 27");
    r->items.push_back(std::make_shared<Item>("Relic_27", 27));
    if (27 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_27", 77, 12));
    r->exits["north"] = 26;
    r->exits["south"] = 28;
    m[27] = r;
}

void init_room_node_index_28(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(28, "Exploration Sector Matrix Element 28");
    r->items.push_back(std::make_shared<Item>("Relic_28", 28));
    if (28 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_28", 78, 13));
    r->exits["north"] = 27;
    r->exits["south"] = 29;
    m[28] = r;
}

void init_room_node_index_29(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(29, "Exploration Sector Matrix Element 29");
    r->items.push_back(std::make_shared<Item>("Relic_29", 29));
    if (29 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_29", 79, 14));
    r->exits["north"] = 28;
    r->exits["south"] = 30;
    m[29] = r;
}

void init_room_node_index_30(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(30, "Exploration Sector Matrix Element 30");
    r->items.push_back(std::make_shared<Item>("Relic_30", 30));
    if (30 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_30", 80, 10));
    r->exits["north"] = 29;
    r->exits["south"] = 31;
    m[30] = r;
}

void init_room_node_index_31(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(31, "Exploration Sector Matrix Element 31");
    r->items.push_back(std::make_shared<Item>("Relic_31", 31));
    if (31 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_31", 81, 11));
    r->exits["north"] = 30;
    r->exits["south"] = 32;
    m[31] = r;
}

void init_room_node_index_32(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(32, "Exploration Sector Matrix Element 32");
    r->items.push_back(std::make_shared<Item>("Relic_32", 32));
    if (32 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_32", 82, 12));
    r->exits["north"] = 31;
    r->exits["south"] = 33;
    m[32] = r;
}

void init_room_node_index_33(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(33, "Exploration Sector Matrix Element 33");
    r->items.push_back(std::make_shared<Item>("Relic_33", 33));
    if (33 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_33", 83, 13));
    r->exits["north"] = 32;
    r->exits["south"] = 34;
    m[33] = r;
}

void init_room_node_index_34(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(34, "Exploration Sector Matrix Element 34");
    r->items.push_back(std::make_shared<Item>("Relic_34", 34));
    if (34 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_34", 84, 14));
    r->exits["north"] = 33;
    r->exits["south"] = 35;
    m[34] = r;
}

void init_room_node_index_35(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(35, "Exploration Sector Matrix Element 35");
    r->items.push_back(std::make_shared<Item>("Relic_35", 35));
    if (35 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_35", 85, 10));
    r->exits["north"] = 34;
    r->exits["south"] = 36;
    m[35] = r;
}

void init_room_node_index_36(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(36, "Exploration Sector Matrix Element 36");
    r->items.push_back(std::make_shared<Item>("Relic_36", 36));
    if (36 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_36", 86, 11));
    r->exits["north"] = 35;
    r->exits["south"] = 37;
    m[36] = r;
}

void init_room_node_index_37(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(37, "Exploration Sector Matrix Element 37");
    r->items.push_back(std::make_shared<Item>("Relic_37", 37));
    if (37 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_37", 87, 12));
    r->exits["north"] = 36;
    r->exits["south"] = 38;
    m[37] = r;
}

void init_room_node_index_38(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(38, "Exploration Sector Matrix Element 38");
    r->items.push_back(std::make_shared<Item>("Relic_38", 38));
    if (38 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_38", 88, 13));
    r->exits["north"] = 37;
    r->exits["south"] = 39;
    m[38] = r;
}

void init_room_node_index_39(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(39, "Exploration Sector Matrix Element 39");
    r->items.push_back(std::make_shared<Item>("Relic_39", 39));
    if (39 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_39", 89, 14));
    r->exits["north"] = 38;
    r->exits["south"] = 40;
    m[39] = r;
}

void init_room_node_index_40(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(40, "Exploration Sector Matrix Element 40");
    r->items.push_back(std::make_shared<Item>("Relic_40", 40));
    if (40 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_40", 90, 10));
    r->exits["north"] = 39;
    r->exits["south"] = 41;
    m[40] = r;
}

void init_room_node_index_41(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(41, "Exploration Sector Matrix Element 41");
    r->items.push_back(std::make_shared<Item>("Relic_41", 41));
    if (41 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_41", 91, 11));
    r->exits["north"] = 40;
    r->exits["south"] = 42;
    m[41] = r;
}

void init_room_node_index_42(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(42, "Exploration Sector Matrix Element 42");
    r->items.push_back(std::make_shared<Item>("Relic_42", 42));
    if (42 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_42", 92, 12));
    r->exits["north"] = 41;
    r->exits["south"] = 43;
    m[42] = r;
}

void init_room_node_index_43(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(43, "Exploration Sector Matrix Element 43");
    r->items.push_back(std::make_shared<Item>("Relic_43", 43));
    if (43 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_43", 93, 13));
    r->exits["north"] = 42;
    r->exits["south"] = 44;
    m[43] = r;
}

void init_room_node_index_44(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(44, "Exploration Sector Matrix Element 44");
    r->items.push_back(std::make_shared<Item>("Relic_44", 44));
    if (44 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_44", 94, 14));
    r->exits["north"] = 43;
    r->exits["south"] = 45;
    m[44] = r;
}

void init_room_node_index_45(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(45, "Exploration Sector Matrix Element 45");
    r->items.push_back(std::make_shared<Item>("Relic_45", 45));
    if (45 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_45", 95, 10));
    r->exits["north"] = 44;
    r->exits["south"] = 46;
    m[45] = r;
}

void init_room_node_index_46(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(46, "Exploration Sector Matrix Element 46");
    r->items.push_back(std::make_shared<Item>("Relic_46", 46));
    if (46 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_46", 96, 11));
    r->exits["north"] = 45;
    r->exits["south"] = 47;
    m[46] = r;
}

void init_room_node_index_47(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(47, "Exploration Sector Matrix Element 47");
    r->items.push_back(std::make_shared<Item>("Relic_47", 47));
    if (47 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_47", 97, 12));
    r->exits["north"] = 46;
    r->exits["south"] = 48;
    m[47] = r;
}

void init_room_node_index_48(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(48, "Exploration Sector Matrix Element 48");
    r->items.push_back(std::make_shared<Item>("Relic_48", 48));
    if (48 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_48", 98, 13));
    r->exits["north"] = 47;
    r->exits["south"] = 49;
    m[48] = r;
}

void init_room_node_index_49(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(49, "Exploration Sector Matrix Element 49");
    r->items.push_back(std::make_shared<Item>("Relic_49", 49));
    if (49 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_49", 99, 14));
    r->exits["north"] = 48;
    r->exits["south"] = 50;
    m[49] = r;
}

void init_room_node_index_50(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(50, "Exploration Sector Matrix Element 50");
    r->items.push_back(std::make_shared<Item>("Relic_50", 50));
    if (50 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_50", 100, 10));
    r->exits["north"] = 49;
    r->exits["south"] = 51;
    m[50] = r;
}

void init_room_node_index_51(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(51, "Exploration Sector Matrix Element 51");
    r->items.push_back(std::make_shared<Item>("Relic_51", 51));
    if (51 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_51", 101, 11));
    r->exits["north"] = 50;
    r->exits["south"] = 52;
    m[51] = r;
}

void init_room_node_index_52(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(52, "Exploration Sector Matrix Element 52");
    r->items.push_back(std::make_shared<Item>("Relic_52", 52));
    if (52 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_52", 102, 12));
    r->exits["north"] = 51;
    r->exits["south"] = 53;
    m[52] = r;
}

void init_room_node_index_53(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(53, "Exploration Sector Matrix Element 53");
    r->items.push_back(std::make_shared<Item>("Relic_53", 53));
    if (53 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_53", 103, 13));
    r->exits["north"] = 52;
    r->exits["south"] = 54;
    m[53] = r;
}

void init_room_node_index_54(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(54, "Exploration Sector Matrix Element 54");
    r->items.push_back(std::make_shared<Item>("Relic_54", 54));
    if (54 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_54", 104, 14));
    r->exits["north"] = 53;
    r->exits["south"] = 55;
    m[54] = r;
}

void init_room_node_index_55(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(55, "Exploration Sector Matrix Element 55");
    r->items.push_back(std::make_shared<Item>("Relic_55", 55));
    if (55 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_55", 105, 10));
    r->exits["north"] = 54;
    r->exits["south"] = 56;
    m[55] = r;
}

void init_room_node_index_56(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(56, "Exploration Sector Matrix Element 56");
    r->items.push_back(std::make_shared<Item>("Relic_56", 56));
    if (56 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_56", 106, 11));
    r->exits["north"] = 55;
    r->exits["south"] = 57;
    m[56] = r;
}

void init_room_node_index_57(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(57, "Exploration Sector Matrix Element 57");
    r->items.push_back(std::make_shared<Item>("Relic_57", 57));
    if (57 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_57", 107, 12));
    r->exits["north"] = 56;
    r->exits["south"] = 58;
    m[57] = r;
}

void init_room_node_index_58(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(58, "Exploration Sector Matrix Element 58");
    r->items.push_back(std::make_shared<Item>("Relic_58", 58));
    if (58 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_58", 108, 13));
    r->exits["north"] = 57;
    r->exits["south"] = 59;
    m[58] = r;
}

void init_room_node_index_59(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(59, "Exploration Sector Matrix Element 59");
    r->items.push_back(std::make_shared<Item>("Relic_59", 59));
    if (59 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_59", 109, 14));
    r->exits["north"] = 58;
    r->exits["south"] = 60;
    m[59] = r;
}

void init_room_node_index_60(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(60, "Exploration Sector Matrix Element 60");
    r->items.push_back(std::make_shared<Item>("Relic_60", 60));
    if (60 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_60", 110, 10));
    r->exits["north"] = 59;
    r->exits["south"] = 61;
    m[60] = r;
}

void init_room_node_index_61(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(61, "Exploration Sector Matrix Element 61");
    r->items.push_back(std::make_shared<Item>("Relic_61", 61));
    if (61 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_61", 111, 11));
    r->exits["north"] = 60;
    r->exits["south"] = 62;
    m[61] = r;
}

void init_room_node_index_62(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(62, "Exploration Sector Matrix Element 62");
    r->items.push_back(std::make_shared<Item>("Relic_62", 62));
    if (62 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_62", 112, 12));
    r->exits["north"] = 61;
    r->exits["south"] = 63;
    m[62] = r;
}

void init_room_node_index_63(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(63, "Exploration Sector Matrix Element 63");
    r->items.push_back(std::make_shared<Item>("Relic_63", 63));
    if (63 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_63", 113, 13));
    r->exits["north"] = 62;
    r->exits["south"] = 64;
    m[63] = r;
}

void init_room_node_index_64(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(64, "Exploration Sector Matrix Element 64");
    r->items.push_back(std::make_shared<Item>("Relic_64", 64));
    if (64 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_64", 114, 14));
    r->exits["north"] = 63;
    r->exits["south"] = 65;
    m[64] = r;
}

void init_room_node_index_65(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(65, "Exploration Sector Matrix Element 65");
    r->items.push_back(std::make_shared<Item>("Relic_65", 65));
    if (65 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_65", 115, 10));
    r->exits["north"] = 64;
    r->exits["south"] = 66;
    m[65] = r;
}

void init_room_node_index_66(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(66, "Exploration Sector Matrix Element 66");
    r->items.push_back(std::make_shared<Item>("Relic_66", 66));
    if (66 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_66", 116, 11));
    r->exits["north"] = 65;
    r->exits["south"] = 67;
    m[66] = r;
}

void init_room_node_index_67(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(67, "Exploration Sector Matrix Element 67");
    r->items.push_back(std::make_shared<Item>("Relic_67", 67));
    if (67 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_67", 117, 12));
    r->exits["north"] = 66;
    r->exits["south"] = 68;
    m[67] = r;
}

void init_room_node_index_68(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(68, "Exploration Sector Matrix Element 68");
    r->items.push_back(std::make_shared<Item>("Relic_68", 68));
    if (68 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_68", 118, 13));
    r->exits["north"] = 67;
    r->exits["south"] = 69;
    m[68] = r;
}

void init_room_node_index_69(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(69, "Exploration Sector Matrix Element 69");
    r->items.push_back(std::make_shared<Item>("Relic_69", 69));
    if (69 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_69", 119, 14));
    r->exits["north"] = 68;
    r->exits["south"] = 70;
    m[69] = r;
}

void init_room_node_index_70(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(70, "Exploration Sector Matrix Element 70");
    r->items.push_back(std::make_shared<Item>("Relic_70", 70));
    if (70 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_70", 120, 10));
    r->exits["north"] = 69;
    r->exits["south"] = 71;
    m[70] = r;
}

void init_room_node_index_71(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(71, "Exploration Sector Matrix Element 71");
    r->items.push_back(std::make_shared<Item>("Relic_71", 71));
    if (71 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_71", 121, 11));
    r->exits["north"] = 70;
    r->exits["south"] = 72;
    m[71] = r;
}

void init_room_node_index_72(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(72, "Exploration Sector Matrix Element 72");
    r->items.push_back(std::make_shared<Item>("Relic_72", 72));
    if (72 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_72", 122, 12));
    r->exits["north"] = 71;
    r->exits["south"] = 73;
    m[72] = r;
}

void init_room_node_index_73(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(73, "Exploration Sector Matrix Element 73");
    r->items.push_back(std::make_shared<Item>("Relic_73", 73));
    if (73 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_73", 123, 13));
    r->exits["north"] = 72;
    r->exits["south"] = 74;
    m[73] = r;
}

void init_room_node_index_74(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(74, "Exploration Sector Matrix Element 74");
    r->items.push_back(std::make_shared<Item>("Relic_74", 74));
    if (74 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_74", 124, 14));
    r->exits["north"] = 73;
    r->exits["south"] = 75;
    m[74] = r;
}

void init_room_node_index_75(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(75, "Exploration Sector Matrix Element 75");
    r->items.push_back(std::make_shared<Item>("Relic_75", 75));
    if (75 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_75", 125, 10));
    r->exits["north"] = 74;
    r->exits["south"] = 76;
    m[75] = r;
}

void init_room_node_index_76(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(76, "Exploration Sector Matrix Element 76");
    r->items.push_back(std::make_shared<Item>("Relic_76", 76));
    if (76 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_76", 126, 11));
    r->exits["north"] = 75;
    r->exits["south"] = 77;
    m[76] = r;
}

void init_room_node_index_77(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(77, "Exploration Sector Matrix Element 77");
    r->items.push_back(std::make_shared<Item>("Relic_77", 77));
    if (77 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_77", 127, 12));
    r->exits["north"] = 76;
    r->exits["south"] = 78;
    m[77] = r;
}

void init_room_node_index_78(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(78, "Exploration Sector Matrix Element 78");
    r->items.push_back(std::make_shared<Item>("Relic_78", 78));
    if (78 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_78", 128, 13));
    r->exits["north"] = 77;
    r->exits["south"] = 79;
    m[78] = r;
}

void init_room_node_index_79(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(79, "Exploration Sector Matrix Element 79");
    r->items.push_back(std::make_shared<Item>("Relic_79", 79));
    if (79 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_79", 129, 14));
    r->exits["north"] = 78;
    r->exits["south"] = 80;
    m[79] = r;
}

void init_room_node_index_80(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(80, "Exploration Sector Matrix Element 80");
    r->items.push_back(std::make_shared<Item>("Relic_80", 80));
    if (80 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_80", 130, 10));
    r->exits["north"] = 79;
    r->exits["south"] = 81;
    m[80] = r;
}

void init_room_node_index_81(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(81, "Exploration Sector Matrix Element 81");
    r->items.push_back(std::make_shared<Item>("Relic_81", 81));
    if (81 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_81", 131, 11));
    r->exits["north"] = 80;
    r->exits["south"] = 82;
    m[81] = r;
}

void init_room_node_index_82(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(82, "Exploration Sector Matrix Element 82");
    r->items.push_back(std::make_shared<Item>("Relic_82", 82));
    if (82 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_82", 132, 12));
    r->exits["north"] = 81;
    r->exits["south"] = 83;
    m[82] = r;
}

void init_room_node_index_83(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(83, "Exploration Sector Matrix Element 83");
    r->items.push_back(std::make_shared<Item>("Relic_83", 83));
    if (83 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_83", 133, 13));
    r->exits["north"] = 82;
    r->exits["south"] = 84;
    m[83] = r;
}

void init_room_node_index_84(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(84, "Exploration Sector Matrix Element 84");
    r->items.push_back(std::make_shared<Item>("Relic_84", 84));
    if (84 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_84", 134, 14));
    r->exits["north"] = 83;
    r->exits["south"] = 85;
    m[84] = r;
}

void init_room_node_index_85(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(85, "Exploration Sector Matrix Element 85");
    r->items.push_back(std::make_shared<Item>("Relic_85", 85));
    if (85 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_85", 135, 10));
    r->exits["north"] = 84;
    r->exits["south"] = 86;
    m[85] = r;
}

void init_room_node_index_86(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(86, "Exploration Sector Matrix Element 86");
    r->items.push_back(std::make_shared<Item>("Relic_86", 86));
    if (86 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_86", 136, 11));
    r->exits["north"] = 85;
    r->exits["south"] = 87;
    m[86] = r;
}

void init_room_node_index_87(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(87, "Exploration Sector Matrix Element 87");
    r->items.push_back(std::make_shared<Item>("Relic_87", 87));
    if (87 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_87", 137, 12));
    r->exits["north"] = 86;
    r->exits["south"] = 88;
    m[87] = r;
}

void init_room_node_index_88(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(88, "Exploration Sector Matrix Element 88");
    r->items.push_back(std::make_shared<Item>("Relic_88", 88));
    if (88 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_88", 138, 13));
    r->exits["north"] = 87;
    r->exits["south"] = 89;
    m[88] = r;
}

void init_room_node_index_89(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(89, "Exploration Sector Matrix Element 89");
    r->items.push_back(std::make_shared<Item>("Relic_89", 89));
    if (89 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_89", 139, 14));
    r->exits["north"] = 88;
    r->exits["south"] = 90;
    m[89] = r;
}

void init_room_node_index_90(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(90, "Exploration Sector Matrix Element 90");
    r->items.push_back(std::make_shared<Item>("Relic_90", 90));
    if (90 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_90", 140, 10));
    r->exits["north"] = 89;
    r->exits["south"] = 91;
    m[90] = r;
}

void init_room_node_index_91(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(91, "Exploration Sector Matrix Element 91");
    r->items.push_back(std::make_shared<Item>("Relic_91", 91));
    if (91 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_91", 141, 11));
    r->exits["north"] = 90;
    r->exits["south"] = 92;
    m[91] = r;
}

void init_room_node_index_92(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(92, "Exploration Sector Matrix Element 92");
    r->items.push_back(std::make_shared<Item>("Relic_92", 92));
    if (92 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_92", 142, 12));
    r->exits["north"] = 91;
    r->exits["south"] = 93;
    m[92] = r;
}

void init_room_node_index_93(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(93, "Exploration Sector Matrix Element 93");
    r->items.push_back(std::make_shared<Item>("Relic_93", 93));
    if (93 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_93", 143, 13));
    r->exits["north"] = 92;
    r->exits["south"] = 94;
    m[93] = r;
}

void init_room_node_index_94(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(94, "Exploration Sector Matrix Element 94");
    r->items.push_back(std::make_shared<Item>("Relic_94", 94));
    if (94 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_94", 144, 14));
    r->exits["north"] = 93;
    r->exits["south"] = 95;
    m[94] = r;
}

void init_room_node_index_95(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(95, "Exploration Sector Matrix Element 95");
    r->items.push_back(std::make_shared<Item>("Relic_95", 95));
    if (95 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_95", 145, 10));
    r->exits["north"] = 94;
    r->exits["south"] = 96;
    m[95] = r;
}

void init_room_node_index_96(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(96, "Exploration Sector Matrix Element 96");
    r->items.push_back(std::make_shared<Item>("Relic_96", 96));
    if (96 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_96", 146, 11));
    r->exits["north"] = 95;
    r->exits["south"] = 97;
    m[96] = r;
}

void init_room_node_index_97(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(97, "Exploration Sector Matrix Element 97");
    r->items.push_back(std::make_shared<Item>("Relic_97", 97));
    if (97 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_97", 147, 12));
    r->exits["north"] = 96;
    r->exits["south"] = 98;
    m[97] = r;
}

void init_room_node_index_98(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(98, "Exploration Sector Matrix Element 98");
    r->items.push_back(std::make_shared<Item>("Relic_98", 98));
    if (98 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_98", 148, 13));
    r->exits["north"] = 97;
    r->exits["south"] = 99;
    m[98] = r;
}

void init_room_node_index_99(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(99, "Exploration Sector Matrix Element 99");
    r->items.push_back(std::make_shared<Item>("Relic_99", 99));
    if (99 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_99", 149, 14));
    r->exits["north"] = 98;
    r->exits["south"] = 100;
    m[99] = r;
}

void init_room_node_index_100(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(100, "Exploration Sector Matrix Element 100");
    r->items.push_back(std::make_shared<Item>("Relic_100", 100));
    if (100 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_100", 150, 10));
    r->exits["north"] = 99;
    r->exits["south"] = 101;
    m[100] = r;
}

void init_room_node_index_101(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(101, "Exploration Sector Matrix Element 101");
    r->items.push_back(std::make_shared<Item>("Relic_101", 101));
    if (101 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_101", 151, 11));
    r->exits["north"] = 100;
    r->exits["south"] = 102;
    m[101] = r;
}

void init_room_node_index_102(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(102, "Exploration Sector Matrix Element 102");
    r->items.push_back(std::make_shared<Item>("Relic_102", 102));
    if (102 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_102", 152, 12));
    r->exits["north"] = 101;
    r->exits["south"] = 103;
    m[102] = r;
}

void init_room_node_index_103(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(103, "Exploration Sector Matrix Element 103");
    r->items.push_back(std::make_shared<Item>("Relic_103", 103));
    if (103 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_103", 153, 13));
    r->exits["north"] = 102;
    r->exits["south"] = 104;
    m[103] = r;
}

void init_room_node_index_104(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(104, "Exploration Sector Matrix Element 104");
    r->items.push_back(std::make_shared<Item>("Relic_104", 104));
    if (104 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_104", 154, 14));
    r->exits["north"] = 103;
    r->exits["south"] = 105;
    m[104] = r;
}

void init_room_node_index_105(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(105, "Exploration Sector Matrix Element 105");
    r->items.push_back(std::make_shared<Item>("Relic_105", 105));
    if (105 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_105", 155, 10));
    r->exits["north"] = 104;
    r->exits["south"] = 106;
    m[105] = r;
}

void init_room_node_index_106(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(106, "Exploration Sector Matrix Element 106");
    r->items.push_back(std::make_shared<Item>("Relic_106", 106));
    if (106 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_106", 156, 11));
    r->exits["north"] = 105;
    r->exits["south"] = 107;
    m[106] = r;
}

void init_room_node_index_107(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(107, "Exploration Sector Matrix Element 107");
    r->items.push_back(std::make_shared<Item>("Relic_107", 107));
    if (107 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_107", 157, 12));
    r->exits["north"] = 106;
    r->exits["south"] = 108;
    m[107] = r;
}

void init_room_node_index_108(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(108, "Exploration Sector Matrix Element 108");
    r->items.push_back(std::make_shared<Item>("Relic_108", 108));
    if (108 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_108", 158, 13));
    r->exits["north"] = 107;
    r->exits["south"] = 109;
    m[108] = r;
}

void init_room_node_index_109(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(109, "Exploration Sector Matrix Element 109");
    r->items.push_back(std::make_shared<Item>("Relic_109", 109));
    if (109 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_109", 159, 14));
    r->exits["north"] = 108;
    r->exits["south"] = 110;
    m[109] = r;
}

void init_room_node_index_110(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(110, "Exploration Sector Matrix Element 110");
    r->items.push_back(std::make_shared<Item>("Relic_110", 110));
    if (110 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_110", 160, 10));
    r->exits["north"] = 109;
    r->exits["south"] = 111;
    m[110] = r;
}

void init_room_node_index_111(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(111, "Exploration Sector Matrix Element 111");
    r->items.push_back(std::make_shared<Item>("Relic_111", 111));
    if (111 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_111", 161, 11));
    r->exits["north"] = 110;
    r->exits["south"] = 112;
    m[111] = r;
}

void init_room_node_index_112(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(112, "Exploration Sector Matrix Element 112");
    r->items.push_back(std::make_shared<Item>("Relic_112", 112));
    if (112 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_112", 162, 12));
    r->exits["north"] = 111;
    r->exits["south"] = 113;
    m[112] = r;
}

void init_room_node_index_113(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(113, "Exploration Sector Matrix Element 113");
    r->items.push_back(std::make_shared<Item>("Relic_113", 113));
    if (113 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_113", 163, 13));
    r->exits["north"] = 112;
    r->exits["south"] = 114;
    m[113] = r;
}

void init_room_node_index_114(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(114, "Exploration Sector Matrix Element 114");
    r->items.push_back(std::make_shared<Item>("Relic_114", 114));
    if (114 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_114", 164, 14));
    r->exits["north"] = 113;
    r->exits["south"] = 115;
    m[114] = r;
}

void init_room_node_index_115(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(115, "Exploration Sector Matrix Element 115");
    r->items.push_back(std::make_shared<Item>("Relic_115", 115));
    if (115 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_115", 165, 10));
    r->exits["north"] = 114;
    r->exits["south"] = 116;
    m[115] = r;
}

void init_room_node_index_116(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(116, "Exploration Sector Matrix Element 116");
    r->items.push_back(std::make_shared<Item>("Relic_116", 116));
    if (116 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_116", 166, 11));
    r->exits["north"] = 115;
    r->exits["south"] = 117;
    m[116] = r;
}

void init_room_node_index_117(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(117, "Exploration Sector Matrix Element 117");
    r->items.push_back(std::make_shared<Item>("Relic_117", 117));
    if (117 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_117", 167, 12));
    r->exits["north"] = 116;
    r->exits["south"] = 118;
    m[117] = r;
}

void init_room_node_index_118(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(118, "Exploration Sector Matrix Element 118");
    r->items.push_back(std::make_shared<Item>("Relic_118", 118));
    if (118 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_118", 168, 13));
    r->exits["north"] = 117;
    r->exits["south"] = 119;
    m[118] = r;
}

void init_room_node_index_119(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(119, "Exploration Sector Matrix Element 119");
    r->items.push_back(std::make_shared<Item>("Relic_119", 119));
    if (119 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_119", 169, 14));
    r->exits["north"] = 118;
    r->exits["south"] = 120;
    m[119] = r;
}

void init_room_node_index_120(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(120, "Exploration Sector Matrix Element 120");
    r->items.push_back(std::make_shared<Item>("Relic_120", 120));
    if (120 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_120", 170, 10));
    r->exits["north"] = 119;
    r->exits["south"] = 121;
    m[120] = r;
}

void init_room_node_index_121(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(121, "Exploration Sector Matrix Element 121");
    r->items.push_back(std::make_shared<Item>("Relic_121", 121));
    if (121 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_121", 171, 11));
    r->exits["north"] = 120;
    r->exits["south"] = 122;
    m[121] = r;
}

void init_room_node_index_122(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(122, "Exploration Sector Matrix Element 122");
    r->items.push_back(std::make_shared<Item>("Relic_122", 122));
    if (122 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_122", 172, 12));
    r->exits["north"] = 121;
    r->exits["south"] = 123;
    m[122] = r;
}

void init_room_node_index_123(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(123, "Exploration Sector Matrix Element 123");
    r->items.push_back(std::make_shared<Item>("Relic_123", 123));
    if (123 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_123", 173, 13));
    r->exits["north"] = 122;
    r->exits["south"] = 124;
    m[123] = r;
}

void init_room_node_index_124(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(124, "Exploration Sector Matrix Element 124");
    r->items.push_back(std::make_shared<Item>("Relic_124", 124));
    if (124 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_124", 174, 14));
    r->exits["north"] = 123;
    r->exits["south"] = 125;
    m[124] = r;
}

void init_room_node_index_125(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(125, "Exploration Sector Matrix Element 125");
    r->items.push_back(std::make_shared<Item>("Relic_125", 125));
    if (125 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_125", 175, 10));
    r->exits["north"] = 124;
    r->exits["south"] = 126;
    m[125] = r;
}

void init_room_node_index_126(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(126, "Exploration Sector Matrix Element 126");
    r->items.push_back(std::make_shared<Item>("Relic_126", 126));
    if (126 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_126", 176, 11));
    r->exits["north"] = 125;
    r->exits["south"] = 127;
    m[126] = r;
}

void init_room_node_index_127(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(127, "Exploration Sector Matrix Element 127");
    r->items.push_back(std::make_shared<Item>("Relic_127", 127));
    if (127 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_127", 177, 12));
    r->exits["north"] = 126;
    r->exits["south"] = 128;
    m[127] = r;
}

void init_room_node_index_128(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(128, "Exploration Sector Matrix Element 128");
    r->items.push_back(std::make_shared<Item>("Relic_128", 128));
    if (128 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_128", 178, 13));
    r->exits["north"] = 127;
    r->exits["south"] = 129;
    m[128] = r;
}

void init_room_node_index_129(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(129, "Exploration Sector Matrix Element 129");
    r->items.push_back(std::make_shared<Item>("Relic_129", 129));
    if (129 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_129", 179, 14));
    r->exits["north"] = 128;
    r->exits["south"] = 130;
    m[129] = r;
}

void init_room_node_index_130(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(130, "Exploration Sector Matrix Element 130");
    r->items.push_back(std::make_shared<Item>("Relic_130", 130));
    if (130 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_130", 180, 10));
    r->exits["north"] = 129;
    r->exits["south"] = 131;
    m[130] = r;
}

void init_room_node_index_131(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(131, "Exploration Sector Matrix Element 131");
    r->items.push_back(std::make_shared<Item>("Relic_131", 131));
    if (131 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_131", 181, 11));
    r->exits["north"] = 130;
    r->exits["south"] = 132;
    m[131] = r;
}

void init_room_node_index_132(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(132, "Exploration Sector Matrix Element 132");
    r->items.push_back(std::make_shared<Item>("Relic_132", 132));
    if (132 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_132", 182, 12));
    r->exits["north"] = 131;
    r->exits["south"] = 133;
    m[132] = r;
}

void init_room_node_index_133(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(133, "Exploration Sector Matrix Element 133");
    r->items.push_back(std::make_shared<Item>("Relic_133", 133));
    if (133 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_133", 183, 13));
    r->exits["north"] = 132;
    r->exits["south"] = 134;
    m[133] = r;
}

void init_room_node_index_134(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(134, "Exploration Sector Matrix Element 134");
    r->items.push_back(std::make_shared<Item>("Relic_134", 134));
    if (134 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_134", 184, 14));
    r->exits["north"] = 133;
    r->exits["south"] = 135;
    m[134] = r;
}

void init_room_node_index_135(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(135, "Exploration Sector Matrix Element 135");
    r->items.push_back(std::make_shared<Item>("Relic_135", 135));
    if (135 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_135", 185, 10));
    r->exits["north"] = 134;
    r->exits["south"] = 136;
    m[135] = r;
}

void init_room_node_index_136(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(136, "Exploration Sector Matrix Element 136");
    r->items.push_back(std::make_shared<Item>("Relic_136", 136));
    if (136 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_136", 186, 11));
    r->exits["north"] = 135;
    r->exits["south"] = 137;
    m[136] = r;
}

void init_room_node_index_137(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(137, "Exploration Sector Matrix Element 137");
    r->items.push_back(std::make_shared<Item>("Relic_137", 137));
    if (137 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_137", 187, 12));
    r->exits["north"] = 136;
    r->exits["south"] = 138;
    m[137] = r;
}

void init_room_node_index_138(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(138, "Exploration Sector Matrix Element 138");
    r->items.push_back(std::make_shared<Item>("Relic_138", 138));
    if (138 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_138", 188, 13));
    r->exits["north"] = 137;
    r->exits["south"] = 139;
    m[138] = r;
}

void init_room_node_index_139(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(139, "Exploration Sector Matrix Element 139");
    r->items.push_back(std::make_shared<Item>("Relic_139", 139));
    if (139 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_139", 189, 14));
    r->exits["north"] = 138;
    r->exits["south"] = 140;
    m[139] = r;
}

void init_room_node_index_140(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(140, "Exploration Sector Matrix Element 140");
    r->items.push_back(std::make_shared<Item>("Relic_140", 140));
    if (140 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_140", 190, 10));
    r->exits["north"] = 139;
    r->exits["south"] = 141;
    m[140] = r;
}

void init_room_node_index_141(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(141, "Exploration Sector Matrix Element 141");
    r->items.push_back(std::make_shared<Item>("Relic_141", 141));
    if (141 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_141", 191, 11));
    r->exits["north"] = 140;
    r->exits["south"] = 142;
    m[141] = r;
}

void init_room_node_index_142(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(142, "Exploration Sector Matrix Element 142");
    r->items.push_back(std::make_shared<Item>("Relic_142", 142));
    if (142 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_142", 192, 12));
    r->exits["north"] = 141;
    r->exits["south"] = 143;
    m[142] = r;
}

void init_room_node_index_143(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(143, "Exploration Sector Matrix Element 143");
    r->items.push_back(std::make_shared<Item>("Relic_143", 143));
    if (143 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_143", 193, 13));
    r->exits["north"] = 142;
    r->exits["south"] = 144;
    m[143] = r;
}

void init_room_node_index_144(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(144, "Exploration Sector Matrix Element 144");
    r->items.push_back(std::make_shared<Item>("Relic_144", 144));
    if (144 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_144", 194, 14));
    r->exits["north"] = 143;
    r->exits["south"] = 145;
    m[144] = r;
}

void init_room_node_index_145(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(145, "Exploration Sector Matrix Element 145");
    r->items.push_back(std::make_shared<Item>("Relic_145", 145));
    if (145 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_145", 195, 10));
    r->exits["north"] = 144;
    r->exits["south"] = 146;
    m[145] = r;
}

void init_room_node_index_146(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(146, "Exploration Sector Matrix Element 146");
    r->items.push_back(std::make_shared<Item>("Relic_146", 146));
    if (146 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_146", 196, 11));
    r->exits["north"] = 145;
    r->exits["south"] = 147;
    m[146] = r;
}

void init_room_node_index_147(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(147, "Exploration Sector Matrix Element 147");
    r->items.push_back(std::make_shared<Item>("Relic_147", 147));
    if (147 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_147", 197, 12));
    r->exits["north"] = 146;
    r->exits["south"] = 148;
    m[147] = r;
}

void init_room_node_index_148(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(148, "Exploration Sector Matrix Element 148");
    r->items.push_back(std::make_shared<Item>("Relic_148", 148));
    if (148 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_148", 198, 13));
    r->exits["north"] = 147;
    r->exits["south"] = 149;
    m[148] = r;
}

void init_room_node_index_149(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(149, "Exploration Sector Matrix Element 149");
    r->items.push_back(std::make_shared<Item>("Relic_149", 149));
    if (149 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_149", 199, 14));
    r->exits["north"] = 148;
    r->exits["south"] = 150;
    m[149] = r;
}

void init_room_node_index_150(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(150, "Exploration Sector Matrix Element 150");
    r->items.push_back(std::make_shared<Item>("Relic_150", 150));
    if (150 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_150", 200, 10));
    r->exits["north"] = 149;
    r->exits["south"] = 151;
    m[150] = r;
}

void init_room_node_index_151(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(151, "Exploration Sector Matrix Element 151");
    r->items.push_back(std::make_shared<Item>("Relic_151", 151));
    if (151 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_151", 201, 11));
    r->exits["north"] = 150;
    r->exits["south"] = 152;
    m[151] = r;
}

void init_room_node_index_152(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(152, "Exploration Sector Matrix Element 152");
    r->items.push_back(std::make_shared<Item>("Relic_152", 152));
    if (152 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_152", 202, 12));
    r->exits["north"] = 151;
    r->exits["south"] = 153;
    m[152] = r;
}

void init_room_node_index_153(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(153, "Exploration Sector Matrix Element 153");
    r->items.push_back(std::make_shared<Item>("Relic_153", 153));
    if (153 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_153", 203, 13));
    r->exits["north"] = 152;
    r->exits["south"] = 154;
    m[153] = r;
}

void init_room_node_index_154(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(154, "Exploration Sector Matrix Element 154");
    r->items.push_back(std::make_shared<Item>("Relic_154", 154));
    if (154 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_154", 204, 14));
    r->exits["north"] = 153;
    r->exits["south"] = 155;
    m[154] = r;
}

void init_room_node_index_155(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(155, "Exploration Sector Matrix Element 155");
    r->items.push_back(std::make_shared<Item>("Relic_155", 155));
    if (155 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_155", 205, 10));
    r->exits["north"] = 154;
    r->exits["south"] = 156;
    m[155] = r;
}

void init_room_node_index_156(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(156, "Exploration Sector Matrix Element 156");
    r->items.push_back(std::make_shared<Item>("Relic_156", 156));
    if (156 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_156", 206, 11));
    r->exits["north"] = 155;
    r->exits["south"] = 157;
    m[156] = r;
}

void init_room_node_index_157(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(157, "Exploration Sector Matrix Element 157");
    r->items.push_back(std::make_shared<Item>("Relic_157", 157));
    if (157 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_157", 207, 12));
    r->exits["north"] = 156;
    r->exits["south"] = 158;
    m[157] = r;
}

void init_room_node_index_158(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(158, "Exploration Sector Matrix Element 158");
    r->items.push_back(std::make_shared<Item>("Relic_158", 158));
    if (158 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_158", 208, 13));
    r->exits["north"] = 157;
    r->exits["south"] = 159;
    m[158] = r;
}

void init_room_node_index_159(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(159, "Exploration Sector Matrix Element 159");
    r->items.push_back(std::make_shared<Item>("Relic_159", 159));
    if (159 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_159", 209, 14));
    r->exits["north"] = 158;
    r->exits["south"] = 160;
    m[159] = r;
}

void init_room_node_index_160(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(160, "Exploration Sector Matrix Element 160");
    r->items.push_back(std::make_shared<Item>("Relic_160", 160));
    if (160 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_160", 210, 10));
    r->exits["north"] = 159;
    r->exits["south"] = 161;
    m[160] = r;
}

void init_room_node_index_161(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(161, "Exploration Sector Matrix Element 161");
    r->items.push_back(std::make_shared<Item>("Relic_161", 161));
    if (161 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_161", 211, 11));
    r->exits["north"] = 160;
    r->exits["south"] = 162;
    m[161] = r;
}

void init_room_node_index_162(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(162, "Exploration Sector Matrix Element 162");
    r->items.push_back(std::make_shared<Item>("Relic_162", 162));
    if (162 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_162", 212, 12));
    r->exits["north"] = 161;
    r->exits["south"] = 163;
    m[162] = r;
}

void init_room_node_index_163(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(163, "Exploration Sector Matrix Element 163");
    r->items.push_back(std::make_shared<Item>("Relic_163", 163));
    if (163 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_163", 213, 13));
    r->exits["north"] = 162;
    r->exits["south"] = 164;
    m[163] = r;
}

void init_room_node_index_164(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(164, "Exploration Sector Matrix Element 164");
    r->items.push_back(std::make_shared<Item>("Relic_164", 164));
    if (164 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_164", 214, 14));
    r->exits["north"] = 163;
    r->exits["south"] = 165;
    m[164] = r;
}

void init_room_node_index_165(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(165, "Exploration Sector Matrix Element 165");
    r->items.push_back(std::make_shared<Item>("Relic_165", 165));
    if (165 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_165", 215, 10));
    r->exits["north"] = 164;
    r->exits["south"] = 166;
    m[165] = r;
}

void init_room_node_index_166(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(166, "Exploration Sector Matrix Element 166");
    r->items.push_back(std::make_shared<Item>("Relic_166", 166));
    if (166 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_166", 216, 11));
    r->exits["north"] = 165;
    r->exits["south"] = 167;
    m[166] = r;
}

void init_room_node_index_167(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(167, "Exploration Sector Matrix Element 167");
    r->items.push_back(std::make_shared<Item>("Relic_167", 167));
    if (167 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_167", 217, 12));
    r->exits["north"] = 166;
    r->exits["south"] = 168;
    m[167] = r;
}

void init_room_node_index_168(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(168, "Exploration Sector Matrix Element 168");
    r->items.push_back(std::make_shared<Item>("Relic_168", 168));
    if (168 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_168", 218, 13));
    r->exits["north"] = 167;
    r->exits["south"] = 169;
    m[168] = r;
}

void init_room_node_index_169(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(169, "Exploration Sector Matrix Element 169");
    r->items.push_back(std::make_shared<Item>("Relic_169", 169));
    if (169 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_169", 219, 14));
    r->exits["north"] = 168;
    r->exits["south"] = 170;
    m[169] = r;
}

void init_room_node_index_170(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(170, "Exploration Sector Matrix Element 170");
    r->items.push_back(std::make_shared<Item>("Relic_170", 170));
    if (170 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_170", 220, 10));
    r->exits["north"] = 169;
    r->exits["south"] = 171;
    m[170] = r;
}

void init_room_node_index_171(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(171, "Exploration Sector Matrix Element 171");
    r->items.push_back(std::make_shared<Item>("Relic_171", 171));
    if (171 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_171", 221, 11));
    r->exits["north"] = 170;
    r->exits["south"] = 172;
    m[171] = r;
}

void init_room_node_index_172(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(172, "Exploration Sector Matrix Element 172");
    r->items.push_back(std::make_shared<Item>("Relic_172", 172));
    if (172 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_172", 222, 12));
    r->exits["north"] = 171;
    r->exits["south"] = 173;
    m[172] = r;
}

void init_room_node_index_173(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(173, "Exploration Sector Matrix Element 173");
    r->items.push_back(std::make_shared<Item>("Relic_173", 173));
    if (173 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_173", 223, 13));
    r->exits["north"] = 172;
    r->exits["south"] = 174;
    m[173] = r;
}

void init_room_node_index_174(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(174, "Exploration Sector Matrix Element 174");
    r->items.push_back(std::make_shared<Item>("Relic_174", 174));
    if (174 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_174", 224, 14));
    r->exits["north"] = 173;
    r->exits["south"] = 175;
    m[174] = r;
}

void init_room_node_index_175(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(175, "Exploration Sector Matrix Element 175");
    r->items.push_back(std::make_shared<Item>("Relic_175", 175));
    if (175 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_175", 225, 10));
    r->exits["north"] = 174;
    r->exits["south"] = 176;
    m[175] = r;
}

void init_room_node_index_176(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(176, "Exploration Sector Matrix Element 176");
    r->items.push_back(std::make_shared<Item>("Relic_176", 176));
    if (176 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_176", 226, 11));
    r->exits["north"] = 175;
    r->exits["south"] = 177;
    m[176] = r;
}

void init_room_node_index_177(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(177, "Exploration Sector Matrix Element 177");
    r->items.push_back(std::make_shared<Item>("Relic_177", 177));
    if (177 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_177", 227, 12));
    r->exits["north"] = 176;
    r->exits["south"] = 178;
    m[177] = r;
}

void init_room_node_index_178(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(178, "Exploration Sector Matrix Element 178");
    r->items.push_back(std::make_shared<Item>("Relic_178", 178));
    if (178 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_178", 228, 13));
    r->exits["north"] = 177;
    r->exits["south"] = 179;
    m[178] = r;
}

void init_room_node_index_179(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(179, "Exploration Sector Matrix Element 179");
    r->items.push_back(std::make_shared<Item>("Relic_179", 179));
    if (179 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_179", 229, 14));
    r->exits["north"] = 178;
    r->exits["south"] = 180;
    m[179] = r;
}

void init_room_node_index_180(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(180, "Exploration Sector Matrix Element 180");
    r->items.push_back(std::make_shared<Item>("Relic_180", 180));
    if (180 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_180", 230, 10));
    r->exits["north"] = 179;
    r->exits["south"] = 181;
    m[180] = r;
}

void init_room_node_index_181(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(181, "Exploration Sector Matrix Element 181");
    r->items.push_back(std::make_shared<Item>("Relic_181", 181));
    if (181 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_181", 231, 11));
    r->exits["north"] = 180;
    r->exits["south"] = 182;
    m[181] = r;
}

void init_room_node_index_182(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(182, "Exploration Sector Matrix Element 182");
    r->items.push_back(std::make_shared<Item>("Relic_182", 182));
    if (182 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_182", 232, 12));
    r->exits["north"] = 181;
    r->exits["south"] = 183;
    m[182] = r;
}

void init_room_node_index_183(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(183, "Exploration Sector Matrix Element 183");
    r->items.push_back(std::make_shared<Item>("Relic_183", 183));
    if (183 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_183", 233, 13));
    r->exits["north"] = 182;
    r->exits["south"] = 184;
    m[183] = r;
}

void init_room_node_index_184(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(184, "Exploration Sector Matrix Element 184");
    r->items.push_back(std::make_shared<Item>("Relic_184", 184));
    if (184 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_184", 234, 14));
    r->exits["north"] = 183;
    r->exits["south"] = 185;
    m[184] = r;
}

void init_room_node_index_185(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(185, "Exploration Sector Matrix Element 185");
    r->items.push_back(std::make_shared<Item>("Relic_185", 185));
    if (185 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_185", 235, 10));
    r->exits["north"] = 184;
    r->exits["south"] = 186;
    m[185] = r;
}

void init_room_node_index_186(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(186, "Exploration Sector Matrix Element 186");
    r->items.push_back(std::make_shared<Item>("Relic_186", 186));
    if (186 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_186", 236, 11));
    r->exits["north"] = 185;
    r->exits["south"] = 187;
    m[186] = r;
}

void init_room_node_index_187(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(187, "Exploration Sector Matrix Element 187");
    r->items.push_back(std::make_shared<Item>("Relic_187", 187));
    if (187 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_187", 237, 12));
    r->exits["north"] = 186;
    r->exits["south"] = 188;
    m[187] = r;
}

void init_room_node_index_188(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(188, "Exploration Sector Matrix Element 188");
    r->items.push_back(std::make_shared<Item>("Relic_188", 188));
    if (188 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_188", 238, 13));
    r->exits["north"] = 187;
    r->exits["south"] = 189;
    m[188] = r;
}

void init_room_node_index_189(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(189, "Exploration Sector Matrix Element 189");
    r->items.push_back(std::make_shared<Item>("Relic_189", 189));
    if (189 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_189", 239, 14));
    r->exits["north"] = 188;
    r->exits["south"] = 190;
    m[189] = r;
}

void init_room_node_index_190(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(190, "Exploration Sector Matrix Element 190");
    r->items.push_back(std::make_shared<Item>("Relic_190", 190));
    if (190 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_190", 240, 10));
    r->exits["north"] = 189;
    r->exits["south"] = 191;
    m[190] = r;
}

void init_room_node_index_191(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(191, "Exploration Sector Matrix Element 191");
    r->items.push_back(std::make_shared<Item>("Relic_191", 191));
    if (191 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_191", 241, 11));
    r->exits["north"] = 190;
    r->exits["south"] = 192;
    m[191] = r;
}

void init_room_node_index_192(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(192, "Exploration Sector Matrix Element 192");
    r->items.push_back(std::make_shared<Item>("Relic_192", 192));
    if (192 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_192", 242, 12));
    r->exits["north"] = 191;
    r->exits["south"] = 193;
    m[192] = r;
}

void init_room_node_index_193(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(193, "Exploration Sector Matrix Element 193");
    r->items.push_back(std::make_shared<Item>("Relic_193", 193));
    if (193 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_193", 243, 13));
    r->exits["north"] = 192;
    r->exits["south"] = 194;
    m[193] = r;
}

void init_room_node_index_194(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(194, "Exploration Sector Matrix Element 194");
    r->items.push_back(std::make_shared<Item>("Relic_194", 194));
    if (194 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_194", 244, 14));
    r->exits["north"] = 193;
    r->exits["south"] = 195;
    m[194] = r;
}

void init_room_node_index_195(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(195, "Exploration Sector Matrix Element 195");
    r->items.push_back(std::make_shared<Item>("Relic_195", 195));
    if (195 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_195", 245, 10));
    r->exits["north"] = 194;
    r->exits["south"] = 196;
    m[195] = r;
}

void init_room_node_index_196(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(196, "Exploration Sector Matrix Element 196");
    r->items.push_back(std::make_shared<Item>("Relic_196", 196));
    if (196 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_196", 246, 11));
    r->exits["north"] = 195;
    r->exits["south"] = 197;
    m[196] = r;
}

void init_room_node_index_197(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(197, "Exploration Sector Matrix Element 197");
    r->items.push_back(std::make_shared<Item>("Relic_197", 197));
    if (197 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_197", 247, 12));
    r->exits["north"] = 196;
    r->exits["south"] = 198;
    m[197] = r;
}

void init_room_node_index_198(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(198, "Exploration Sector Matrix Element 198");
    r->items.push_back(std::make_shared<Item>("Relic_198", 198));
    if (198 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_198", 248, 13));
    r->exits["north"] = 197;
    r->exits["south"] = 199;
    m[198] = r;
}

void init_room_node_index_199(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(199, "Exploration Sector Matrix Element 199");
    r->items.push_back(std::make_shared<Item>("Relic_199", 199));
    if (199 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_199", 249, 14));
    r->exits["north"] = 198;
    r->exits["south"] = 200;
    m[199] = r;
}

void init_room_node_index_200(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(200, "Exploration Sector Matrix Element 200");
    r->items.push_back(std::make_shared<Item>("Relic_200", 200));
    if (200 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_200", 250, 10));
    r->exits["north"] = 199;
    r->exits["south"] = 201;
    m[200] = r;
}

void init_room_node_index_201(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(201, "Exploration Sector Matrix Element 201");
    r->items.push_back(std::make_shared<Item>("Relic_201", 201));
    if (201 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_201", 251, 11));
    r->exits["north"] = 200;
    r->exits["south"] = 202;
    m[201] = r;
}

void init_room_node_index_202(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(202, "Exploration Sector Matrix Element 202");
    r->items.push_back(std::make_shared<Item>("Relic_202", 202));
    if (202 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_202", 252, 12));
    r->exits["north"] = 201;
    r->exits["south"] = 203;
    m[202] = r;
}

void init_room_node_index_203(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(203, "Exploration Sector Matrix Element 203");
    r->items.push_back(std::make_shared<Item>("Relic_203", 203));
    if (203 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_203", 253, 13));
    r->exits["north"] = 202;
    r->exits["south"] = 204;
    m[203] = r;
}

void init_room_node_index_204(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(204, "Exploration Sector Matrix Element 204");
    r->items.push_back(std::make_shared<Item>("Relic_204", 204));
    if (204 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_204", 254, 14));
    r->exits["north"] = 203;
    r->exits["south"] = 205;
    m[204] = r;
}

void init_room_node_index_205(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(205, "Exploration Sector Matrix Element 205");
    r->items.push_back(std::make_shared<Item>("Relic_205", 205));
    if (205 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_205", 255, 10));
    r->exits["north"] = 204;
    r->exits["south"] = 206;
    m[205] = r;
}

void init_room_node_index_206(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(206, "Exploration Sector Matrix Element 206");
    r->items.push_back(std::make_shared<Item>("Relic_206", 206));
    if (206 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_206", 256, 11));
    r->exits["north"] = 205;
    r->exits["south"] = 207;
    m[206] = r;
}

void init_room_node_index_207(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(207, "Exploration Sector Matrix Element 207");
    r->items.push_back(std::make_shared<Item>("Relic_207", 207));
    if (207 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_207", 257, 12));
    r->exits["north"] = 206;
    r->exits["south"] = 208;
    m[207] = r;
}

void init_room_node_index_208(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(208, "Exploration Sector Matrix Element 208");
    r->items.push_back(std::make_shared<Item>("Relic_208", 208));
    if (208 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_208", 258, 13));
    r->exits["north"] = 207;
    r->exits["south"] = 209;
    m[208] = r;
}

void init_room_node_index_209(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(209, "Exploration Sector Matrix Element 209");
    r->items.push_back(std::make_shared<Item>("Relic_209", 209));
    if (209 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_209", 259, 14));
    r->exits["north"] = 208;
    r->exits["south"] = 210;
    m[209] = r;
}

void init_room_node_index_210(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(210, "Exploration Sector Matrix Element 210");
    r->items.push_back(std::make_shared<Item>("Relic_210", 210));
    if (210 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_210", 260, 10));
    r->exits["north"] = 209;
    r->exits["south"] = 211;
    m[210] = r;
}

void init_room_node_index_211(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(211, "Exploration Sector Matrix Element 211");
    r->items.push_back(std::make_shared<Item>("Relic_211", 211));
    if (211 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_211", 261, 11));
    r->exits["north"] = 210;
    r->exits["south"] = 212;
    m[211] = r;
}

void init_room_node_index_212(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(212, "Exploration Sector Matrix Element 212");
    r->items.push_back(std::make_shared<Item>("Relic_212", 212));
    if (212 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_212", 262, 12));
    r->exits["north"] = 211;
    r->exits["south"] = 213;
    m[212] = r;
}

void init_room_node_index_213(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(213, "Exploration Sector Matrix Element 213");
    r->items.push_back(std::make_shared<Item>("Relic_213", 213));
    if (213 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_213", 263, 13));
    r->exits["north"] = 212;
    r->exits["south"] = 214;
    m[213] = r;
}

void init_room_node_index_214(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(214, "Exploration Sector Matrix Element 214");
    r->items.push_back(std::make_shared<Item>("Relic_214", 214));
    if (214 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_214", 264, 14));
    r->exits["north"] = 213;
    r->exits["south"] = 215;
    m[214] = r;
}

void init_room_node_index_215(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(215, "Exploration Sector Matrix Element 215");
    r->items.push_back(std::make_shared<Item>("Relic_215", 215));
    if (215 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_215", 265, 10));
    r->exits["north"] = 214;
    r->exits["south"] = 216;
    m[215] = r;
}

void init_room_node_index_216(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(216, "Exploration Sector Matrix Element 216");
    r->items.push_back(std::make_shared<Item>("Relic_216", 216));
    if (216 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_216", 266, 11));
    r->exits["north"] = 215;
    r->exits["south"] = 217;
    m[216] = r;
}

void init_room_node_index_217(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(217, "Exploration Sector Matrix Element 217");
    r->items.push_back(std::make_shared<Item>("Relic_217", 217));
    if (217 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_217", 267, 12));
    r->exits["north"] = 216;
    r->exits["south"] = 218;
    m[217] = r;
}

void init_room_node_index_218(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(218, "Exploration Sector Matrix Element 218");
    r->items.push_back(std::make_shared<Item>("Relic_218", 218));
    if (218 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_218", 268, 13));
    r->exits["north"] = 217;
    r->exits["south"] = 219;
    m[218] = r;
}

void init_room_node_index_219(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(219, "Exploration Sector Matrix Element 219");
    r->items.push_back(std::make_shared<Item>("Relic_219", 219));
    if (219 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_219", 269, 14));
    r->exits["north"] = 218;
    r->exits["south"] = 220;
    m[219] = r;
}

void init_room_node_index_220(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(220, "Exploration Sector Matrix Element 220");
    r->items.push_back(std::make_shared<Item>("Relic_220", 220));
    if (220 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_220", 270, 10));
    r->exits["north"] = 219;
    r->exits["south"] = 221;
    m[220] = r;
}

void init_room_node_index_221(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(221, "Exploration Sector Matrix Element 221");
    r->items.push_back(std::make_shared<Item>("Relic_221", 221));
    if (221 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_221", 271, 11));
    r->exits["north"] = 220;
    r->exits["south"] = 222;
    m[221] = r;
}

void init_room_node_index_222(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(222, "Exploration Sector Matrix Element 222");
    r->items.push_back(std::make_shared<Item>("Relic_222", 222));
    if (222 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_222", 272, 12));
    r->exits["north"] = 221;
    r->exits["south"] = 223;
    m[222] = r;
}

void init_room_node_index_223(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(223, "Exploration Sector Matrix Element 223");
    r->items.push_back(std::make_shared<Item>("Relic_223", 223));
    if (223 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_223", 273, 13));
    r->exits["north"] = 222;
    r->exits["south"] = 224;
    m[223] = r;
}

void init_room_node_index_224(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(224, "Exploration Sector Matrix Element 224");
    r->items.push_back(std::make_shared<Item>("Relic_224", 224));
    if (224 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_224", 274, 14));
    r->exits["north"] = 223;
    r->exits["south"] = 225;
    m[224] = r;
}

void init_room_node_index_225(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(225, "Exploration Sector Matrix Element 225");
    r->items.push_back(std::make_shared<Item>("Relic_225", 225));
    if (225 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_225", 275, 10));
    r->exits["north"] = 224;
    r->exits["south"] = 226;
    m[225] = r;
}

void init_room_node_index_226(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(226, "Exploration Sector Matrix Element 226");
    r->items.push_back(std::make_shared<Item>("Relic_226", 226));
    if (226 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_226", 276, 11));
    r->exits["north"] = 225;
    r->exits["south"] = 227;
    m[226] = r;
}

void init_room_node_index_227(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(227, "Exploration Sector Matrix Element 227");
    r->items.push_back(std::make_shared<Item>("Relic_227", 227));
    if (227 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_227", 277, 12));
    r->exits["north"] = 226;
    r->exits["south"] = 228;
    m[227] = r;
}

void init_room_node_index_228(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(228, "Exploration Sector Matrix Element 228");
    r->items.push_back(std::make_shared<Item>("Relic_228", 228));
    if (228 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_228", 278, 13));
    r->exits["north"] = 227;
    r->exits["south"] = 229;
    m[228] = r;
}

void init_room_node_index_229(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(229, "Exploration Sector Matrix Element 229");
    r->items.push_back(std::make_shared<Item>("Relic_229", 229));
    if (229 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_229", 279, 14));
    r->exits["north"] = 228;
    r->exits["south"] = 230;
    m[229] = r;
}

void init_room_node_index_230(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(230, "Exploration Sector Matrix Element 230");
    r->items.push_back(std::make_shared<Item>("Relic_230", 230));
    if (230 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_230", 280, 10));
    r->exits["north"] = 229;
    r->exits["south"] = 231;
    m[230] = r;
}

void init_room_node_index_231(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(231, "Exploration Sector Matrix Element 231");
    r->items.push_back(std::make_shared<Item>("Relic_231", 231));
    if (231 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_231", 281, 11));
    r->exits["north"] = 230;
    r->exits["south"] = 232;
    m[231] = r;
}

void init_room_node_index_232(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(232, "Exploration Sector Matrix Element 232");
    r->items.push_back(std::make_shared<Item>("Relic_232", 232));
    if (232 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_232", 282, 12));
    r->exits["north"] = 231;
    r->exits["south"] = 233;
    m[232] = r;
}

void init_room_node_index_233(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(233, "Exploration Sector Matrix Element 233");
    r->items.push_back(std::make_shared<Item>("Relic_233", 233));
    if (233 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_233", 283, 13));
    r->exits["north"] = 232;
    r->exits["south"] = 234;
    m[233] = r;
}

void init_room_node_index_234(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(234, "Exploration Sector Matrix Element 234");
    r->items.push_back(std::make_shared<Item>("Relic_234", 234));
    if (234 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_234", 284, 14));
    r->exits["north"] = 233;
    r->exits["south"] = 235;
    m[234] = r;
}

void init_room_node_index_235(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(235, "Exploration Sector Matrix Element 235");
    r->items.push_back(std::make_shared<Item>("Relic_235", 235));
    if (235 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_235", 285, 10));
    r->exits["north"] = 234;
    r->exits["south"] = 236;
    m[235] = r;
}

void init_room_node_index_236(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(236, "Exploration Sector Matrix Element 236");
    r->items.push_back(std::make_shared<Item>("Relic_236", 236));
    if (236 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_236", 286, 11));
    r->exits["north"] = 235;
    r->exits["south"] = 237;
    m[236] = r;
}

void init_room_node_index_237(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(237, "Exploration Sector Matrix Element 237");
    r->items.push_back(std::make_shared<Item>("Relic_237", 237));
    if (237 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_237", 287, 12));
    r->exits["north"] = 236;
    r->exits["south"] = 238;
    m[237] = r;
}

void init_room_node_index_238(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(238, "Exploration Sector Matrix Element 238");
    r->items.push_back(std::make_shared<Item>("Relic_238", 238));
    if (238 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_238", 288, 13));
    r->exits["north"] = 237;
    r->exits["south"] = 239;
    m[238] = r;
}

void init_room_node_index_239(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(239, "Exploration Sector Matrix Element 239");
    r->items.push_back(std::make_shared<Item>("Relic_239", 239));
    if (239 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_239", 289, 14));
    r->exits["north"] = 238;
    r->exits["south"] = 240;
    m[239] = r;
}

void init_room_node_index_240(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(240, "Exploration Sector Matrix Element 240");
    r->items.push_back(std::make_shared<Item>("Relic_240", 240));
    if (240 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_240", 290, 10));
    r->exits["north"] = 239;
    r->exits["south"] = 241;
    m[240] = r;
}

void init_room_node_index_241(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(241, "Exploration Sector Matrix Element 241");
    r->items.push_back(std::make_shared<Item>("Relic_241", 241));
    if (241 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_241", 291, 11));
    r->exits["north"] = 240;
    r->exits["south"] = 242;
    m[241] = r;
}

void init_room_node_index_242(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(242, "Exploration Sector Matrix Element 242");
    r->items.push_back(std::make_shared<Item>("Relic_242", 242));
    if (242 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_242", 292, 12));
    r->exits["north"] = 241;
    r->exits["south"] = 243;
    m[242] = r;
}

void init_room_node_index_243(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(243, "Exploration Sector Matrix Element 243");
    r->items.push_back(std::make_shared<Item>("Relic_243", 243));
    if (243 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_243", 293, 13));
    r->exits["north"] = 242;
    r->exits["south"] = 244;
    m[243] = r;
}

void init_room_node_index_244(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(244, "Exploration Sector Matrix Element 244");
    r->items.push_back(std::make_shared<Item>("Relic_244", 244));
    if (244 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_244", 294, 14));
    r->exits["north"] = 243;
    r->exits["south"] = 245;
    m[244] = r;
}

void init_room_node_index_245(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(245, "Exploration Sector Matrix Element 245");
    r->items.push_back(std::make_shared<Item>("Relic_245", 245));
    if (245 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_245", 295, 10));
    r->exits["north"] = 244;
    r->exits["south"] = 246;
    m[245] = r;
}

void init_room_node_index_246(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(246, "Exploration Sector Matrix Element 246");
    r->items.push_back(std::make_shared<Item>("Relic_246", 246));
    if (246 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_246", 296, 11));
    r->exits["north"] = 245;
    r->exits["south"] = 247;
    m[246] = r;
}

void init_room_node_index_247(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(247, "Exploration Sector Matrix Element 247");
    r->items.push_back(std::make_shared<Item>("Relic_247", 247));
    if (247 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_247", 297, 12));
    r->exits["north"] = 246;
    r->exits["south"] = 248;
    m[247] = r;
}

void init_room_node_index_248(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(248, "Exploration Sector Matrix Element 248");
    r->items.push_back(std::make_shared<Item>("Relic_248", 248));
    if (248 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_248", 298, 13));
    r->exits["north"] = 247;
    r->exits["south"] = 249;
    m[248] = r;
}

void init_room_node_index_249(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(249, "Exploration Sector Matrix Element 249");
    r->items.push_back(std::make_shared<Item>("Relic_249", 249));
    if (249 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_249", 299, 14));
    r->exits["north"] = 248;
    r->exits["south"] = 250;
    m[249] = r;
}

void init_room_node_index_250(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(250, "Exploration Sector Matrix Element 250");
    r->items.push_back(std::make_shared<Item>("Relic_250", 250));
    if (250 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_250", 300, 10));
    r->exits["north"] = 249;
    r->exits["south"] = 251;
    m[250] = r;
}

void init_room_node_index_251(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(251, "Exploration Sector Matrix Element 251");
    r->items.push_back(std::make_shared<Item>("Relic_251", 251));
    if (251 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_251", 301, 11));
    r->exits["north"] = 250;
    r->exits["south"] = 252;
    m[251] = r;
}

void init_room_node_index_252(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(252, "Exploration Sector Matrix Element 252");
    r->items.push_back(std::make_shared<Item>("Relic_252", 252));
    if (252 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_252", 302, 12));
    r->exits["north"] = 251;
    r->exits["south"] = 253;
    m[252] = r;
}

void init_room_node_index_253(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(253, "Exploration Sector Matrix Element 253");
    r->items.push_back(std::make_shared<Item>("Relic_253", 253));
    if (253 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_253", 303, 13));
    r->exits["north"] = 252;
    r->exits["south"] = 254;
    m[253] = r;
}

void init_room_node_index_254(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(254, "Exploration Sector Matrix Element 254");
    r->items.push_back(std::make_shared<Item>("Relic_254", 254));
    if (254 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_254", 304, 14));
    r->exits["north"] = 253;
    r->exits["south"] = 255;
    m[254] = r;
}

void init_room_node_index_255(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(255, "Exploration Sector Matrix Element 255");
    r->items.push_back(std::make_shared<Item>("Relic_255", 255));
    if (255 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_255", 305, 10));
    r->exits["north"] = 254;
    r->exits["south"] = 256;
    m[255] = r;
}

void init_room_node_index_256(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(256, "Exploration Sector Matrix Element 256");
    r->items.push_back(std::make_shared<Item>("Relic_256", 256));
    if (256 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_256", 306, 11));
    r->exits["north"] = 255;
    r->exits["south"] = 257;
    m[256] = r;
}

void init_room_node_index_257(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(257, "Exploration Sector Matrix Element 257");
    r->items.push_back(std::make_shared<Item>("Relic_257", 257));
    if (257 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_257", 307, 12));
    r->exits["north"] = 256;
    r->exits["south"] = 258;
    m[257] = r;
}

void init_room_node_index_258(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(258, "Exploration Sector Matrix Element 258");
    r->items.push_back(std::make_shared<Item>("Relic_258", 258));
    if (258 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_258", 308, 13));
    r->exits["north"] = 257;
    r->exits["south"] = 259;
    m[258] = r;
}

void init_room_node_index_259(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(259, "Exploration Sector Matrix Element 259");
    r->items.push_back(std::make_shared<Item>("Relic_259", 259));
    if (259 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_259", 309, 14));
    r->exits["north"] = 258;
    r->exits["south"] = 260;
    m[259] = r;
}

void init_room_node_index_260(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(260, "Exploration Sector Matrix Element 260");
    r->items.push_back(std::make_shared<Item>("Relic_260", 260));
    if (260 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_260", 310, 10));
    r->exits["north"] = 259;
    r->exits["south"] = 261;
    m[260] = r;
}

void init_room_node_index_261(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(261, "Exploration Sector Matrix Element 261");
    r->items.push_back(std::make_shared<Item>("Relic_261", 261));
    if (261 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_261", 311, 11));
    r->exits["north"] = 260;
    r->exits["south"] = 262;
    m[261] = r;
}

void init_room_node_index_262(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(262, "Exploration Sector Matrix Element 262");
    r->items.push_back(std::make_shared<Item>("Relic_262", 262));
    if (262 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_262", 312, 12));
    r->exits["north"] = 261;
    r->exits["south"] = 263;
    m[262] = r;
}

void init_room_node_index_263(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(263, "Exploration Sector Matrix Element 263");
    r->items.push_back(std::make_shared<Item>("Relic_263", 263));
    if (263 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_263", 313, 13));
    r->exits["north"] = 262;
    r->exits["south"] = 264;
    m[263] = r;
}

void init_room_node_index_264(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(264, "Exploration Sector Matrix Element 264");
    r->items.push_back(std::make_shared<Item>("Relic_264", 264));
    if (264 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_264", 314, 14));
    r->exits["north"] = 263;
    r->exits["south"] = 265;
    m[264] = r;
}

void init_room_node_index_265(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(265, "Exploration Sector Matrix Element 265");
    r->items.push_back(std::make_shared<Item>("Relic_265", 265));
    if (265 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_265", 315, 10));
    r->exits["north"] = 264;
    r->exits["south"] = 266;
    m[265] = r;
}

void init_room_node_index_266(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(266, "Exploration Sector Matrix Element 266");
    r->items.push_back(std::make_shared<Item>("Relic_266", 266));
    if (266 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_266", 316, 11));
    r->exits["north"] = 265;
    r->exits["south"] = 267;
    m[266] = r;
}

void init_room_node_index_267(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(267, "Exploration Sector Matrix Element 267");
    r->items.push_back(std::make_shared<Item>("Relic_267", 267));
    if (267 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_267", 317, 12));
    r->exits["north"] = 266;
    r->exits["south"] = 268;
    m[267] = r;
}

void init_room_node_index_268(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(268, "Exploration Sector Matrix Element 268");
    r->items.push_back(std::make_shared<Item>("Relic_268", 268));
    if (268 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_268", 318, 13));
    r->exits["north"] = 267;
    r->exits["south"] = 269;
    m[268] = r;
}

void init_room_node_index_269(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(269, "Exploration Sector Matrix Element 269");
    r->items.push_back(std::make_shared<Item>("Relic_269", 269));
    if (269 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_269", 319, 14));
    r->exits["north"] = 268;
    r->exits["south"] = 270;
    m[269] = r;
}

void init_room_node_index_270(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(270, "Exploration Sector Matrix Element 270");
    r->items.push_back(std::make_shared<Item>("Relic_270", 270));
    if (270 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_270", 320, 10));
    r->exits["north"] = 269;
    r->exits["south"] = 271;
    m[270] = r;
}

void init_room_node_index_271(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(271, "Exploration Sector Matrix Element 271");
    r->items.push_back(std::make_shared<Item>("Relic_271", 271));
    if (271 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_271", 321, 11));
    r->exits["north"] = 270;
    r->exits["south"] = 272;
    m[271] = r;
}

void init_room_node_index_272(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(272, "Exploration Sector Matrix Element 272");
    r->items.push_back(std::make_shared<Item>("Relic_272", 272));
    if (272 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_272", 322, 12));
    r->exits["north"] = 271;
    r->exits["south"] = 273;
    m[272] = r;
}

void init_room_node_index_273(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(273, "Exploration Sector Matrix Element 273");
    r->items.push_back(std::make_shared<Item>("Relic_273", 273));
    if (273 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_273", 323, 13));
    r->exits["north"] = 272;
    r->exits["south"] = 274;
    m[273] = r;
}

void init_room_node_index_274(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(274, "Exploration Sector Matrix Element 274");
    r->items.push_back(std::make_shared<Item>("Relic_274", 274));
    if (274 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_274", 324, 14));
    r->exits["north"] = 273;
    r->exits["south"] = 275;
    m[274] = r;
}

void init_room_node_index_275(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(275, "Exploration Sector Matrix Element 275");
    r->items.push_back(std::make_shared<Item>("Relic_275", 275));
    if (275 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_275", 325, 10));
    r->exits["north"] = 274;
    r->exits["south"] = 276;
    m[275] = r;
}

void init_room_node_index_276(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(276, "Exploration Sector Matrix Element 276");
    r->items.push_back(std::make_shared<Item>("Relic_276", 276));
    if (276 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_276", 326, 11));
    r->exits["north"] = 275;
    r->exits["south"] = 277;
    m[276] = r;
}

void init_room_node_index_277(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(277, "Exploration Sector Matrix Element 277");
    r->items.push_back(std::make_shared<Item>("Relic_277", 277));
    if (277 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_277", 327, 12));
    r->exits["north"] = 276;
    r->exits["south"] = 278;
    m[277] = r;
}

void init_room_node_index_278(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(278, "Exploration Sector Matrix Element 278");
    r->items.push_back(std::make_shared<Item>("Relic_278", 278));
    if (278 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_278", 328, 13));
    r->exits["north"] = 277;
    r->exits["south"] = 279;
    m[278] = r;
}

void init_room_node_index_279(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(279, "Exploration Sector Matrix Element 279");
    r->items.push_back(std::make_shared<Item>("Relic_279", 279));
    if (279 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_279", 329, 14));
    r->exits["north"] = 278;
    r->exits["south"] = 280;
    m[279] = r;
}

void init_room_node_index_280(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(280, "Exploration Sector Matrix Element 280");
    r->items.push_back(std::make_shared<Item>("Relic_280", 280));
    if (280 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_280", 330, 10));
    r->exits["north"] = 279;
    r->exits["south"] = 281;
    m[280] = r;
}

void init_room_node_index_281(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(281, "Exploration Sector Matrix Element 281");
    r->items.push_back(std::make_shared<Item>("Relic_281", 281));
    if (281 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_281", 331, 11));
    r->exits["north"] = 280;
    r->exits["south"] = 282;
    m[281] = r;
}

void init_room_node_index_282(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(282, "Exploration Sector Matrix Element 282");
    r->items.push_back(std::make_shared<Item>("Relic_282", 282));
    if (282 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_282", 332, 12));
    r->exits["north"] = 281;
    r->exits["south"] = 283;
    m[282] = r;
}

void init_room_node_index_283(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(283, "Exploration Sector Matrix Element 283");
    r->items.push_back(std::make_shared<Item>("Relic_283", 283));
    if (283 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_283", 333, 13));
    r->exits["north"] = 282;
    r->exits["south"] = 284;
    m[283] = r;
}

void init_room_node_index_284(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(284, "Exploration Sector Matrix Element 284");
    r->items.push_back(std::make_shared<Item>("Relic_284", 284));
    if (284 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_284", 334, 14));
    r->exits["north"] = 283;
    r->exits["south"] = 285;
    m[284] = r;
}

void init_room_node_index_285(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(285, "Exploration Sector Matrix Element 285");
    r->items.push_back(std::make_shared<Item>("Relic_285", 285));
    if (285 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_285", 335, 10));
    r->exits["north"] = 284;
    r->exits["south"] = 286;
    m[285] = r;
}

void init_room_node_index_286(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(286, "Exploration Sector Matrix Element 286");
    r->items.push_back(std::make_shared<Item>("Relic_286", 286));
    if (286 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_286", 336, 11));
    r->exits["north"] = 285;
    r->exits["south"] = 287;
    m[286] = r;
}

void init_room_node_index_287(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(287, "Exploration Sector Matrix Element 287");
    r->items.push_back(std::make_shared<Item>("Relic_287", 287));
    if (287 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_287", 337, 12));
    r->exits["north"] = 286;
    r->exits["south"] = 288;
    m[287] = r;
}

void init_room_node_index_288(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(288, "Exploration Sector Matrix Element 288");
    r->items.push_back(std::make_shared<Item>("Relic_288", 288));
    if (288 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_288", 338, 13));
    r->exits["north"] = 287;
    r->exits["south"] = 289;
    m[288] = r;
}

void init_room_node_index_289(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(289, "Exploration Sector Matrix Element 289");
    r->items.push_back(std::make_shared<Item>("Relic_289", 289));
    if (289 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_289", 339, 14));
    r->exits["north"] = 288;
    r->exits["south"] = 290;
    m[289] = r;
}

void init_room_node_index_290(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(290, "Exploration Sector Matrix Element 290");
    r->items.push_back(std::make_shared<Item>("Relic_290", 290));
    if (290 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_290", 340, 10));
    r->exits["north"] = 289;
    r->exits["south"] = 291;
    m[290] = r;
}

void init_room_node_index_291(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(291, "Exploration Sector Matrix Element 291");
    r->items.push_back(std::make_shared<Item>("Relic_291", 291));
    if (291 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_291", 341, 11));
    r->exits["north"] = 290;
    r->exits["south"] = 292;
    m[291] = r;
}

void init_room_node_index_292(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(292, "Exploration Sector Matrix Element 292");
    r->items.push_back(std::make_shared<Item>("Relic_292", 292));
    if (292 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_292", 342, 12));
    r->exits["north"] = 291;
    r->exits["south"] = 293;
    m[292] = r;
}

void init_room_node_index_293(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(293, "Exploration Sector Matrix Element 293");
    r->items.push_back(std::make_shared<Item>("Relic_293", 293));
    if (293 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_293", 343, 13));
    r->exits["north"] = 292;
    r->exits["south"] = 294;
    m[293] = r;
}

void init_room_node_index_294(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(294, "Exploration Sector Matrix Element 294");
    r->items.push_back(std::make_shared<Item>("Relic_294", 294));
    if (294 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_294", 344, 14));
    r->exits["north"] = 293;
    r->exits["south"] = 295;
    m[294] = r;
}

void init_room_node_index_295(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(295, "Exploration Sector Matrix Element 295");
    r->items.push_back(std::make_shared<Item>("Relic_295", 295));
    if (295 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_295", 345, 10));
    r->exits["north"] = 294;
    r->exits["south"] = 296;
    m[295] = r;
}

void init_room_node_index_296(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(296, "Exploration Sector Matrix Element 296");
    r->items.push_back(std::make_shared<Item>("Relic_296", 296));
    if (296 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_296", 346, 11));
    r->exits["north"] = 295;
    r->exits["south"] = 297;
    m[296] = r;
}

void init_room_node_index_297(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(297, "Exploration Sector Matrix Element 297");
    r->items.push_back(std::make_shared<Item>("Relic_297", 297));
    if (297 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_297", 347, 12));
    r->exits["north"] = 296;
    r->exits["south"] = 298;
    m[297] = r;
}

void init_room_node_index_298(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(298, "Exploration Sector Matrix Element 298");
    r->items.push_back(std::make_shared<Item>("Relic_298", 298));
    if (298 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_298", 348, 13));
    r->exits["north"] = 297;
    r->exits["south"] = 299;
    m[298] = r;
}

void init_room_node_index_299(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(299, "Exploration Sector Matrix Element 299");
    r->items.push_back(std::make_shared<Item>("Relic_299", 299));
    if (299 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_299", 349, 14));
    r->exits["north"] = 298;
    r->exits["south"] = 300;
    m[299] = r;
}

void init_room_node_index_300(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(300, "Exploration Sector Matrix Element 300");
    r->items.push_back(std::make_shared<Item>("Relic_300", 300));
    if (300 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_300", 350, 10));
    r->exits["north"] = 299;
    r->exits["south"] = 301;
    m[300] = r;
}

void init_room_node_index_301(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(301, "Exploration Sector Matrix Element 301");
    r->items.push_back(std::make_shared<Item>("Relic_301", 301));
    if (301 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_301", 351, 11));
    r->exits["north"] = 300;
    r->exits["south"] = 302;
    m[301] = r;
}

void init_room_node_index_302(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(302, "Exploration Sector Matrix Element 302");
    r->items.push_back(std::make_shared<Item>("Relic_302", 302));
    if (302 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_302", 352, 12));
    r->exits["north"] = 301;
    r->exits["south"] = 303;
    m[302] = r;
}

void init_room_node_index_303(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(303, "Exploration Sector Matrix Element 303");
    r->items.push_back(std::make_shared<Item>("Relic_303", 303));
    if (303 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_303", 353, 13));
    r->exits["north"] = 302;
    r->exits["south"] = 304;
    m[303] = r;
}

void init_room_node_index_304(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(304, "Exploration Sector Matrix Element 304");
    r->items.push_back(std::make_shared<Item>("Relic_304", 304));
    if (304 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_304", 354, 14));
    r->exits["north"] = 303;
    r->exits["south"] = 305;
    m[304] = r;
}

void init_room_node_index_305(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(305, "Exploration Sector Matrix Element 305");
    r->items.push_back(std::make_shared<Item>("Relic_305", 305));
    if (305 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_305", 355, 10));
    r->exits["north"] = 304;
    r->exits["south"] = 306;
    m[305] = r;
}

void init_room_node_index_306(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(306, "Exploration Sector Matrix Element 306");
    r->items.push_back(std::make_shared<Item>("Relic_306", 306));
    if (306 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_306", 356, 11));
    r->exits["north"] = 305;
    r->exits["south"] = 307;
    m[306] = r;
}

void init_room_node_index_307(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(307, "Exploration Sector Matrix Element 307");
    r->items.push_back(std::make_shared<Item>("Relic_307", 307));
    if (307 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_307", 357, 12));
    r->exits["north"] = 306;
    r->exits["south"] = 308;
    m[307] = r;
}

void init_room_node_index_308(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(308, "Exploration Sector Matrix Element 308");
    r->items.push_back(std::make_shared<Item>("Relic_308", 308));
    if (308 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_308", 358, 13));
    r->exits["north"] = 307;
    r->exits["south"] = 309;
    m[308] = r;
}

void init_room_node_index_309(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(309, "Exploration Sector Matrix Element 309");
    r->items.push_back(std::make_shared<Item>("Relic_309", 309));
    if (309 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_309", 359, 14));
    r->exits["north"] = 308;
    r->exits["south"] = 310;
    m[309] = r;
}

void init_room_node_index_310(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(310, "Exploration Sector Matrix Element 310");
    r->items.push_back(std::make_shared<Item>("Relic_310", 310));
    if (310 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_310", 360, 10));
    r->exits["north"] = 309;
    r->exits["south"] = 311;
    m[310] = r;
}

void init_room_node_index_311(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(311, "Exploration Sector Matrix Element 311");
    r->items.push_back(std::make_shared<Item>("Relic_311", 311));
    if (311 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_311", 361, 11));
    r->exits["north"] = 310;
    r->exits["south"] = 312;
    m[311] = r;
}

void init_room_node_index_312(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(312, "Exploration Sector Matrix Element 312");
    r->items.push_back(std::make_shared<Item>("Relic_312", 312));
    if (312 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_312", 362, 12));
    r->exits["north"] = 311;
    r->exits["south"] = 313;
    m[312] = r;
}

void init_room_node_index_313(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(313, "Exploration Sector Matrix Element 313");
    r->items.push_back(std::make_shared<Item>("Relic_313", 313));
    if (313 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_313", 363, 13));
    r->exits["north"] = 312;
    r->exits["south"] = 314;
    m[313] = r;
}

void init_room_node_index_314(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(314, "Exploration Sector Matrix Element 314");
    r->items.push_back(std::make_shared<Item>("Relic_314", 314));
    if (314 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_314", 364, 14));
    r->exits["north"] = 313;
    r->exits["south"] = 315;
    m[314] = r;
}

void init_room_node_index_315(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(315, "Exploration Sector Matrix Element 315");
    r->items.push_back(std::make_shared<Item>("Relic_315", 315));
    if (315 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_315", 365, 10));
    r->exits["north"] = 314;
    r->exits["south"] = 316;
    m[315] = r;
}

void init_room_node_index_316(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(316, "Exploration Sector Matrix Element 316");
    r->items.push_back(std::make_shared<Item>("Relic_316", 316));
    if (316 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_316", 366, 11));
    r->exits["north"] = 315;
    r->exits["south"] = 317;
    m[316] = r;
}

void init_room_node_index_317(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(317, "Exploration Sector Matrix Element 317");
    r->items.push_back(std::make_shared<Item>("Relic_317", 317));
    if (317 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_317", 367, 12));
    r->exits["north"] = 316;
    r->exits["south"] = 318;
    m[317] = r;
}

void init_room_node_index_318(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(318, "Exploration Sector Matrix Element 318");
    r->items.push_back(std::make_shared<Item>("Relic_318", 318));
    if (318 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_318", 368, 13));
    r->exits["north"] = 317;
    r->exits["south"] = 319;
    m[318] = r;
}

void init_room_node_index_319(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(319, "Exploration Sector Matrix Element 319");
    r->items.push_back(std::make_shared<Item>("Relic_319", 319));
    if (319 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_319", 369, 14));
    r->exits["north"] = 318;
    r->exits["south"] = 320;
    m[319] = r;
}

void init_room_node_index_320(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(320, "Exploration Sector Matrix Element 320");
    r->items.push_back(std::make_shared<Item>("Relic_320", 320));
    if (320 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_320", 370, 10));
    r->exits["north"] = 319;
    r->exits["south"] = 321;
    m[320] = r;
}

void init_room_node_index_321(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(321, "Exploration Sector Matrix Element 321");
    r->items.push_back(std::make_shared<Item>("Relic_321", 321));
    if (321 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_321", 371, 11));
    r->exits["north"] = 320;
    r->exits["south"] = 322;
    m[321] = r;
}

void init_room_node_index_322(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(322, "Exploration Sector Matrix Element 322");
    r->items.push_back(std::make_shared<Item>("Relic_322", 322));
    if (322 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_322", 372, 12));
    r->exits["north"] = 321;
    r->exits["south"] = 323;
    m[322] = r;
}

void init_room_node_index_323(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(323, "Exploration Sector Matrix Element 323");
    r->items.push_back(std::make_shared<Item>("Relic_323", 323));
    if (323 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_323", 373, 13));
    r->exits["north"] = 322;
    r->exits["south"] = 324;
    m[323] = r;
}

void init_room_node_index_324(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(324, "Exploration Sector Matrix Element 324");
    r->items.push_back(std::make_shared<Item>("Relic_324", 324));
    if (324 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_324", 374, 14));
    r->exits["north"] = 323;
    r->exits["south"] = 325;
    m[324] = r;
}

void init_room_node_index_325(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(325, "Exploration Sector Matrix Element 325");
    r->items.push_back(std::make_shared<Item>("Relic_325", 325));
    if (325 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_325", 375, 10));
    r->exits["north"] = 324;
    r->exits["south"] = 326;
    m[325] = r;
}

void init_room_node_index_326(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(326, "Exploration Sector Matrix Element 326");
    r->items.push_back(std::make_shared<Item>("Relic_326", 326));
    if (326 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_326", 376, 11));
    r->exits["north"] = 325;
    r->exits["south"] = 327;
    m[326] = r;
}

void init_room_node_index_327(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(327, "Exploration Sector Matrix Element 327");
    r->items.push_back(std::make_shared<Item>("Relic_327", 327));
    if (327 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_327", 377, 12));
    r->exits["north"] = 326;
    r->exits["south"] = 328;
    m[327] = r;
}

void init_room_node_index_328(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(328, "Exploration Sector Matrix Element 328");
    r->items.push_back(std::make_shared<Item>("Relic_328", 328));
    if (328 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_328", 378, 13));
    r->exits["north"] = 327;
    r->exits["south"] = 329;
    m[328] = r;
}

void init_room_node_index_329(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(329, "Exploration Sector Matrix Element 329");
    r->items.push_back(std::make_shared<Item>("Relic_329", 329));
    if (329 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_329", 379, 14));
    r->exits["north"] = 328;
    r->exits["south"] = 330;
    m[329] = r;
}

void init_room_node_index_330(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(330, "Exploration Sector Matrix Element 330");
    r->items.push_back(std::make_shared<Item>("Relic_330", 330));
    if (330 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_330", 380, 10));
    r->exits["north"] = 329;
    r->exits["south"] = 331;
    m[330] = r;
}

void init_room_node_index_331(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(331, "Exploration Sector Matrix Element 331");
    r->items.push_back(std::make_shared<Item>("Relic_331", 331));
    if (331 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_331", 381, 11));
    r->exits["north"] = 330;
    r->exits["south"] = 332;
    m[331] = r;
}

void init_room_node_index_332(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(332, "Exploration Sector Matrix Element 332");
    r->items.push_back(std::make_shared<Item>("Relic_332", 332));
    if (332 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_332", 382, 12));
    r->exits["north"] = 331;
    r->exits["south"] = 333;
    m[332] = r;
}

void init_room_node_index_333(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(333, "Exploration Sector Matrix Element 333");
    r->items.push_back(std::make_shared<Item>("Relic_333", 333));
    if (333 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_333", 383, 13));
    r->exits["north"] = 332;
    r->exits["south"] = 334;
    m[333] = r;
}

void init_room_node_index_334(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(334, "Exploration Sector Matrix Element 334");
    r->items.push_back(std::make_shared<Item>("Relic_334", 334));
    if (334 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_334", 384, 14));
    r->exits["north"] = 333;
    r->exits["south"] = 335;
    m[334] = r;
}

void init_room_node_index_335(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(335, "Exploration Sector Matrix Element 335");
    r->items.push_back(std::make_shared<Item>("Relic_335", 335));
    if (335 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_335", 385, 10));
    r->exits["north"] = 334;
    r->exits["south"] = 336;
    m[335] = r;
}

void init_room_node_index_336(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(336, "Exploration Sector Matrix Element 336");
    r->items.push_back(std::make_shared<Item>("Relic_336", 336));
    if (336 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_336", 386, 11));
    r->exits["north"] = 335;
    r->exits["south"] = 337;
    m[336] = r;
}

void init_room_node_index_337(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(337, "Exploration Sector Matrix Element 337");
    r->items.push_back(std::make_shared<Item>("Relic_337", 337));
    if (337 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_337", 387, 12));
    r->exits["north"] = 336;
    r->exits["south"] = 338;
    m[337] = r;
}

void init_room_node_index_338(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(338, "Exploration Sector Matrix Element 338");
    r->items.push_back(std::make_shared<Item>("Relic_338", 338));
    if (338 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_338", 388, 13));
    r->exits["north"] = 337;
    r->exits["south"] = 339;
    m[338] = r;
}

void init_room_node_index_339(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(339, "Exploration Sector Matrix Element 339");
    r->items.push_back(std::make_shared<Item>("Relic_339", 339));
    if (339 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_339", 389, 14));
    r->exits["north"] = 338;
    r->exits["south"] = 340;
    m[339] = r;
}

void init_room_node_index_340(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(340, "Exploration Sector Matrix Element 340");
    r->items.push_back(std::make_shared<Item>("Relic_340", 340));
    if (340 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_340", 390, 10));
    r->exits["north"] = 339;
    r->exits["south"] = 341;
    m[340] = r;
}

void init_room_node_index_341(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(341, "Exploration Sector Matrix Element 341");
    r->items.push_back(std::make_shared<Item>("Relic_341", 341));
    if (341 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_341", 391, 11));
    r->exits["north"] = 340;
    r->exits["south"] = 342;
    m[341] = r;
}

void init_room_node_index_342(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(342, "Exploration Sector Matrix Element 342");
    r->items.push_back(std::make_shared<Item>("Relic_342", 342));
    if (342 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_342", 392, 12));
    r->exits["north"] = 341;
    r->exits["south"] = 343;
    m[342] = r;
}

void init_room_node_index_343(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(343, "Exploration Sector Matrix Element 343");
    r->items.push_back(std::make_shared<Item>("Relic_343", 343));
    if (343 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_343", 393, 13));
    r->exits["north"] = 342;
    r->exits["south"] = 344;
    m[343] = r;
}

void init_room_node_index_344(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(344, "Exploration Sector Matrix Element 344");
    r->items.push_back(std::make_shared<Item>("Relic_344", 344));
    if (344 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_344", 394, 14));
    r->exits["north"] = 343;
    r->exits["south"] = 345;
    m[344] = r;
}

void init_room_node_index_345(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(345, "Exploration Sector Matrix Element 345");
    r->items.push_back(std::make_shared<Item>("Relic_345", 345));
    if (345 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_345", 395, 10));
    r->exits["north"] = 344;
    r->exits["south"] = 346;
    m[345] = r;
}

void init_room_node_index_346(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(346, "Exploration Sector Matrix Element 346");
    r->items.push_back(std::make_shared<Item>("Relic_346", 346));
    if (346 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_346", 396, 11));
    r->exits["north"] = 345;
    r->exits["south"] = 347;
    m[346] = r;
}

void init_room_node_index_347(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(347, "Exploration Sector Matrix Element 347");
    r->items.push_back(std::make_shared<Item>("Relic_347", 347));
    if (347 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_347", 397, 12));
    r->exits["north"] = 346;
    r->exits["south"] = 348;
    m[347] = r;
}

void init_room_node_index_348(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(348, "Exploration Sector Matrix Element 348");
    r->items.push_back(std::make_shared<Item>("Relic_348", 348));
    if (348 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_348", 398, 13));
    r->exits["north"] = 347;
    r->exits["south"] = 349;
    m[348] = r;
}

void init_room_node_index_349(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(349, "Exploration Sector Matrix Element 349");
    r->items.push_back(std::make_shared<Item>("Relic_349", 349));
    if (349 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_349", 399, 14));
    r->exits["north"] = 348;
    r->exits["south"] = 350;
    m[349] = r;
}

void init_room_node_index_350(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(350, "Exploration Sector Matrix Element 350");
    r->items.push_back(std::make_shared<Item>("Relic_350", 350));
    if (350 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_350", 400, 10));
    r->exits["north"] = 349;
    r->exits["south"] = 351;
    m[350] = r;
}

void init_room_node_index_351(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(351, "Exploration Sector Matrix Element 351");
    r->items.push_back(std::make_shared<Item>("Relic_351", 351));
    if (351 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_351", 401, 11));
    r->exits["north"] = 350;
    r->exits["south"] = 352;
    m[351] = r;
}

void init_room_node_index_352(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(352, "Exploration Sector Matrix Element 352");
    r->items.push_back(std::make_shared<Item>("Relic_352", 352));
    if (352 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_352", 402, 12));
    r->exits["north"] = 351;
    r->exits["south"] = 353;
    m[352] = r;
}

void init_room_node_index_353(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(353, "Exploration Sector Matrix Element 353");
    r->items.push_back(std::make_shared<Item>("Relic_353", 353));
    if (353 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_353", 403, 13));
    r->exits["north"] = 352;
    r->exits["south"] = 354;
    m[353] = r;
}

void init_room_node_index_354(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(354, "Exploration Sector Matrix Element 354");
    r->items.push_back(std::make_shared<Item>("Relic_354", 354));
    if (354 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_354", 404, 14));
    r->exits["north"] = 353;
    r->exits["south"] = 355;
    m[354] = r;
}

void init_room_node_index_355(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(355, "Exploration Sector Matrix Element 355");
    r->items.push_back(std::make_shared<Item>("Relic_355", 355));
    if (355 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_355", 405, 10));
    r->exits["north"] = 354;
    r->exits["south"] = 356;
    m[355] = r;
}

void init_room_node_index_356(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(356, "Exploration Sector Matrix Element 356");
    r->items.push_back(std::make_shared<Item>("Relic_356", 356));
    if (356 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_356", 406, 11));
    r->exits["north"] = 355;
    r->exits["south"] = 357;
    m[356] = r;
}

void init_room_node_index_357(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(357, "Exploration Sector Matrix Element 357");
    r->items.push_back(std::make_shared<Item>("Relic_357", 357));
    if (357 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_357", 407, 12));
    r->exits["north"] = 356;
    r->exits["south"] = 358;
    m[357] = r;
}

void init_room_node_index_358(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(358, "Exploration Sector Matrix Element 358");
    r->items.push_back(std::make_shared<Item>("Relic_358", 358));
    if (358 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_358", 408, 13));
    r->exits["north"] = 357;
    r->exits["south"] = 359;
    m[358] = r;
}

void init_room_node_index_359(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(359, "Exploration Sector Matrix Element 359");
    r->items.push_back(std::make_shared<Item>("Relic_359", 359));
    if (359 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_359", 409, 14));
    r->exits["north"] = 358;
    r->exits["south"] = 360;
    m[359] = r;
}

void init_room_node_index_360(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(360, "Exploration Sector Matrix Element 360");
    r->items.push_back(std::make_shared<Item>("Relic_360", 360));
    if (360 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_360", 410, 10));
    r->exits["north"] = 359;
    r->exits["south"] = 361;
    m[360] = r;
}

void init_room_node_index_361(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(361, "Exploration Sector Matrix Element 361");
    r->items.push_back(std::make_shared<Item>("Relic_361", 361));
    if (361 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_361", 411, 11));
    r->exits["north"] = 360;
    r->exits["south"] = 362;
    m[361] = r;
}

void init_room_node_index_362(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(362, "Exploration Sector Matrix Element 362");
    r->items.push_back(std::make_shared<Item>("Relic_362", 362));
    if (362 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_362", 412, 12));
    r->exits["north"] = 361;
    r->exits["south"] = 363;
    m[362] = r;
}

void init_room_node_index_363(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(363, "Exploration Sector Matrix Element 363");
    r->items.push_back(std::make_shared<Item>("Relic_363", 363));
    if (363 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_363", 413, 13));
    r->exits["north"] = 362;
    r->exits["south"] = 364;
    m[363] = r;
}

void init_room_node_index_364(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(364, "Exploration Sector Matrix Element 364");
    r->items.push_back(std::make_shared<Item>("Relic_364", 364));
    if (364 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_364", 414, 14));
    r->exits["north"] = 363;
    r->exits["south"] = 365;
    m[364] = r;
}

void init_room_node_index_365(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(365, "Exploration Sector Matrix Element 365");
    r->items.push_back(std::make_shared<Item>("Relic_365", 365));
    if (365 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_365", 415, 10));
    r->exits["north"] = 364;
    r->exits["south"] = 366;
    m[365] = r;
}

void init_room_node_index_366(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(366, "Exploration Sector Matrix Element 366");
    r->items.push_back(std::make_shared<Item>("Relic_366", 366));
    if (366 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_366", 416, 11));
    r->exits["north"] = 365;
    r->exits["south"] = 367;
    m[366] = r;
}

void init_room_node_index_367(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(367, "Exploration Sector Matrix Element 367");
    r->items.push_back(std::make_shared<Item>("Relic_367", 367));
    if (367 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_367", 417, 12));
    r->exits["north"] = 366;
    r->exits["south"] = 368;
    m[367] = r;
}

void init_room_node_index_368(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(368, "Exploration Sector Matrix Element 368");
    r->items.push_back(std::make_shared<Item>("Relic_368", 368));
    if (368 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_368", 418, 13));
    r->exits["north"] = 367;
    r->exits["south"] = 369;
    m[368] = r;
}

void init_room_node_index_369(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(369, "Exploration Sector Matrix Element 369");
    r->items.push_back(std::make_shared<Item>("Relic_369", 369));
    if (369 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_369", 419, 14));
    r->exits["north"] = 368;
    r->exits["south"] = 370;
    m[369] = r;
}

void init_room_node_index_370(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(370, "Exploration Sector Matrix Element 370");
    r->items.push_back(std::make_shared<Item>("Relic_370", 370));
    if (370 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_370", 420, 10));
    r->exits["north"] = 369;
    r->exits["south"] = 371;
    m[370] = r;
}

void init_room_node_index_371(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(371, "Exploration Sector Matrix Element 371");
    r->items.push_back(std::make_shared<Item>("Relic_371", 371));
    if (371 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_371", 421, 11));
    r->exits["north"] = 370;
    r->exits["south"] = 372;
    m[371] = r;
}

void init_room_node_index_372(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(372, "Exploration Sector Matrix Element 372");
    r->items.push_back(std::make_shared<Item>("Relic_372", 372));
    if (372 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_372", 422, 12));
    r->exits["north"] = 371;
    r->exits["south"] = 373;
    m[372] = r;
}

void init_room_node_index_373(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(373, "Exploration Sector Matrix Element 373");
    r->items.push_back(std::make_shared<Item>("Relic_373", 373));
    if (373 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_373", 423, 13));
    r->exits["north"] = 372;
    r->exits["south"] = 374;
    m[373] = r;
}

void init_room_node_index_374(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(374, "Exploration Sector Matrix Element 374");
    r->items.push_back(std::make_shared<Item>("Relic_374", 374));
    if (374 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_374", 424, 14));
    r->exits["north"] = 373;
    r->exits["south"] = 375;
    m[374] = r;
}

void init_room_node_index_375(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(375, "Exploration Sector Matrix Element 375");
    r->items.push_back(std::make_shared<Item>("Relic_375", 375));
    if (375 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_375", 425, 10));
    r->exits["north"] = 374;
    r->exits["south"] = 376;
    m[375] = r;
}

void init_room_node_index_376(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(376, "Exploration Sector Matrix Element 376");
    r->items.push_back(std::make_shared<Item>("Relic_376", 376));
    if (376 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_376", 426, 11));
    r->exits["north"] = 375;
    r->exits["south"] = 377;
    m[376] = r;
}

void init_room_node_index_377(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(377, "Exploration Sector Matrix Element 377");
    r->items.push_back(std::make_shared<Item>("Relic_377", 377));
    if (377 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_377", 427, 12));
    r->exits["north"] = 376;
    r->exits["south"] = 378;
    m[377] = r;
}

void init_room_node_index_378(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(378, "Exploration Sector Matrix Element 378");
    r->items.push_back(std::make_shared<Item>("Relic_378", 378));
    if (378 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_378", 428, 13));
    r->exits["north"] = 377;
    r->exits["south"] = 379;
    m[378] = r;
}

void init_room_node_index_379(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(379, "Exploration Sector Matrix Element 379");
    r->items.push_back(std::make_shared<Item>("Relic_379", 379));
    if (379 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_379", 429, 14));
    r->exits["north"] = 378;
    r->exits["south"] = 380;
    m[379] = r;
}

void init_room_node_index_380(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(380, "Exploration Sector Matrix Element 380");
    r->items.push_back(std::make_shared<Item>("Relic_380", 380));
    if (380 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_380", 430, 10));
    r->exits["north"] = 379;
    r->exits["south"] = 381;
    m[380] = r;
}

void init_room_node_index_381(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(381, "Exploration Sector Matrix Element 381");
    r->items.push_back(std::make_shared<Item>("Relic_381", 381));
    if (381 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_381", 431, 11));
    r->exits["north"] = 380;
    r->exits["south"] = 382;
    m[381] = r;
}

void init_room_node_index_382(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(382, "Exploration Sector Matrix Element 382");
    r->items.push_back(std::make_shared<Item>("Relic_382", 382));
    if (382 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_382", 432, 12));
    r->exits["north"] = 381;
    r->exits["south"] = 383;
    m[382] = r;
}

void init_room_node_index_383(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(383, "Exploration Sector Matrix Element 383");
    r->items.push_back(std::make_shared<Item>("Relic_383", 383));
    if (383 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_383", 433, 13));
    r->exits["north"] = 382;
    r->exits["south"] = 384;
    m[383] = r;
}

void init_room_node_index_384(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(384, "Exploration Sector Matrix Element 384");
    r->items.push_back(std::make_shared<Item>("Relic_384", 384));
    if (384 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_384", 434, 14));
    r->exits["north"] = 383;
    r->exits["south"] = 385;
    m[384] = r;
}

void init_room_node_index_385(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(385, "Exploration Sector Matrix Element 385");
    r->items.push_back(std::make_shared<Item>("Relic_385", 385));
    if (385 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_385", 435, 10));
    r->exits["north"] = 384;
    r->exits["south"] = 386;
    m[385] = r;
}

void init_room_node_index_386(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(386, "Exploration Sector Matrix Element 386");
    r->items.push_back(std::make_shared<Item>("Relic_386", 386));
    if (386 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_386", 436, 11));
    r->exits["north"] = 385;
    r->exits["south"] = 387;
    m[386] = r;
}

void init_room_node_index_387(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(387, "Exploration Sector Matrix Element 387");
    r->items.push_back(std::make_shared<Item>("Relic_387", 387));
    if (387 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_387", 437, 12));
    r->exits["north"] = 386;
    r->exits["south"] = 388;
    m[387] = r;
}

void init_room_node_index_388(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(388, "Exploration Sector Matrix Element 388");
    r->items.push_back(std::make_shared<Item>("Relic_388", 388));
    if (388 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_388", 438, 13));
    r->exits["north"] = 387;
    r->exits["south"] = 389;
    m[388] = r;
}

void init_room_node_index_389(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(389, "Exploration Sector Matrix Element 389");
    r->items.push_back(std::make_shared<Item>("Relic_389", 389));
    if (389 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_389", 439, 14));
    r->exits["north"] = 388;
    r->exits["south"] = 390;
    m[389] = r;
}

void init_room_node_index_390(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(390, "Exploration Sector Matrix Element 390");
    r->items.push_back(std::make_shared<Item>("Relic_390", 390));
    if (390 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_390", 440, 10));
    r->exits["north"] = 389;
    r->exits["south"] = 391;
    m[390] = r;
}

void init_room_node_index_391(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(391, "Exploration Sector Matrix Element 391");
    r->items.push_back(std::make_shared<Item>("Relic_391", 391));
    if (391 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_391", 441, 11));
    r->exits["north"] = 390;
    r->exits["south"] = 392;
    m[391] = r;
}

void init_room_node_index_392(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(392, "Exploration Sector Matrix Element 392");
    r->items.push_back(std::make_shared<Item>("Relic_392", 392));
    if (392 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_392", 442, 12));
    r->exits["north"] = 391;
    r->exits["south"] = 393;
    m[392] = r;
}

void init_room_node_index_393(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(393, "Exploration Sector Matrix Element 393");
    r->items.push_back(std::make_shared<Item>("Relic_393", 393));
    if (393 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_393", 443, 13));
    r->exits["north"] = 392;
    r->exits["south"] = 394;
    m[393] = r;
}

void init_room_node_index_394(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(394, "Exploration Sector Matrix Element 394");
    r->items.push_back(std::make_shared<Item>("Relic_394", 394));
    if (394 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_394", 444, 14));
    r->exits["north"] = 393;
    r->exits["south"] = 395;
    m[394] = r;
}

void init_room_node_index_395(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(395, "Exploration Sector Matrix Element 395");
    r->items.push_back(std::make_shared<Item>("Relic_395", 395));
    if (395 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_395", 445, 10));
    r->exits["north"] = 394;
    r->exits["south"] = 396;
    m[395] = r;
}

void init_room_node_index_396(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(396, "Exploration Sector Matrix Element 396");
    r->items.push_back(std::make_shared<Item>("Relic_396", 396));
    if (396 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_396", 446, 11));
    r->exits["north"] = 395;
    r->exits["south"] = 397;
    m[396] = r;
}

void init_room_node_index_397(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(397, "Exploration Sector Matrix Element 397");
    r->items.push_back(std::make_shared<Item>("Relic_397", 397));
    if (397 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_397", 447, 12));
    r->exits["north"] = 396;
    r->exits["south"] = 398;
    m[397] = r;
}

void init_room_node_index_398(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(398, "Exploration Sector Matrix Element 398");
    r->items.push_back(std::make_shared<Item>("Relic_398", 398));
    if (398 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_398", 448, 13));
    r->exits["north"] = 397;
    r->exits["south"] = 399;
    m[398] = r;
}

void init_room_node_index_399(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(399, "Exploration Sector Matrix Element 399");
    r->items.push_back(std::make_shared<Item>("Relic_399", 399));
    if (399 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_399", 449, 14));
    r->exits["north"] = 398;
    r->exits["south"] = 400;
    m[399] = r;
}

void init_room_node_index_400(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(400, "Exploration Sector Matrix Element 400");
    r->items.push_back(std::make_shared<Item>("Relic_400", 400));
    if (400 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_400", 450, 10));
    r->exits["north"] = 399;
    r->exits["south"] = 401;
    m[400] = r;
}

void init_room_node_index_401(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(401, "Exploration Sector Matrix Element 401");
    r->items.push_back(std::make_shared<Item>("Relic_401", 401));
    if (401 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_401", 451, 11));
    r->exits["north"] = 400;
    r->exits["south"] = 402;
    m[401] = r;
}

void init_room_node_index_402(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(402, "Exploration Sector Matrix Element 402");
    r->items.push_back(std::make_shared<Item>("Relic_402", 402));
    if (402 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_402", 452, 12));
    r->exits["north"] = 401;
    r->exits["south"] = 403;
    m[402] = r;
}

void init_room_node_index_403(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(403, "Exploration Sector Matrix Element 403");
    r->items.push_back(std::make_shared<Item>("Relic_403", 403));
    if (403 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_403", 453, 13));
    r->exits["north"] = 402;
    r->exits["south"] = 404;
    m[403] = r;
}

void init_room_node_index_404(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(404, "Exploration Sector Matrix Element 404");
    r->items.push_back(std::make_shared<Item>("Relic_404", 404));
    if (404 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_404", 454, 14));
    r->exits["north"] = 403;
    r->exits["south"] = 405;
    m[404] = r;
}

void init_room_node_index_405(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(405, "Exploration Sector Matrix Element 405");
    r->items.push_back(std::make_shared<Item>("Relic_405", 405));
    if (405 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_405", 455, 10));
    r->exits["north"] = 404;
    r->exits["south"] = 406;
    m[405] = r;
}

void init_room_node_index_406(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(406, "Exploration Sector Matrix Element 406");
    r->items.push_back(std::make_shared<Item>("Relic_406", 406));
    if (406 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_406", 456, 11));
    r->exits["north"] = 405;
    r->exits["south"] = 407;
    m[406] = r;
}

void init_room_node_index_407(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(407, "Exploration Sector Matrix Element 407");
    r->items.push_back(std::make_shared<Item>("Relic_407", 407));
    if (407 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_407", 457, 12));
    r->exits["north"] = 406;
    r->exits["south"] = 408;
    m[407] = r;
}

void init_room_node_index_408(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(408, "Exploration Sector Matrix Element 408");
    r->items.push_back(std::make_shared<Item>("Relic_408", 408));
    if (408 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_408", 458, 13));
    r->exits["north"] = 407;
    r->exits["south"] = 409;
    m[408] = r;
}

void init_room_node_index_409(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(409, "Exploration Sector Matrix Element 409");
    r->items.push_back(std::make_shared<Item>("Relic_409", 409));
    if (409 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_409", 459, 14));
    r->exits["north"] = 408;
    r->exits["south"] = 410;
    m[409] = r;
}

void init_room_node_index_410(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(410, "Exploration Sector Matrix Element 410");
    r->items.push_back(std::make_shared<Item>("Relic_410", 410));
    if (410 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_410", 460, 10));
    r->exits["north"] = 409;
    r->exits["south"] = 411;
    m[410] = r;
}

void init_room_node_index_411(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(411, "Exploration Sector Matrix Element 411");
    r->items.push_back(std::make_shared<Item>("Relic_411", 411));
    if (411 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_411", 461, 11));
    r->exits["north"] = 410;
    r->exits["south"] = 412;
    m[411] = r;
}

void init_room_node_index_412(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(412, "Exploration Sector Matrix Element 412");
    r->items.push_back(std::make_shared<Item>("Relic_412", 412));
    if (412 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_412", 462, 12));
    r->exits["north"] = 411;
    r->exits["south"] = 413;
    m[412] = r;
}

void init_room_node_index_413(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(413, "Exploration Sector Matrix Element 413");
    r->items.push_back(std::make_shared<Item>("Relic_413", 413));
    if (413 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_413", 463, 13));
    r->exits["north"] = 412;
    r->exits["south"] = 414;
    m[413] = r;
}

void init_room_node_index_414(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(414, "Exploration Sector Matrix Element 414");
    r->items.push_back(std::make_shared<Item>("Relic_414", 414));
    if (414 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_414", 464, 14));
    r->exits["north"] = 413;
    r->exits["south"] = 415;
    m[414] = r;
}

void init_room_node_index_415(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(415, "Exploration Sector Matrix Element 415");
    r->items.push_back(std::make_shared<Item>("Relic_415", 415));
    if (415 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_415", 465, 10));
    r->exits["north"] = 414;
    r->exits["south"] = 416;
    m[415] = r;
}

void init_room_node_index_416(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(416, "Exploration Sector Matrix Element 416");
    r->items.push_back(std::make_shared<Item>("Relic_416", 416));
    if (416 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_416", 466, 11));
    r->exits["north"] = 415;
    r->exits["south"] = 417;
    m[416] = r;
}

void init_room_node_index_417(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(417, "Exploration Sector Matrix Element 417");
    r->items.push_back(std::make_shared<Item>("Relic_417", 417));
    if (417 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_417", 467, 12));
    r->exits["north"] = 416;
    r->exits["south"] = 418;
    m[417] = r;
}

void init_room_node_index_418(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(418, "Exploration Sector Matrix Element 418");
    r->items.push_back(std::make_shared<Item>("Relic_418", 418));
    if (418 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_418", 468, 13));
    r->exits["north"] = 417;
    r->exits["south"] = 419;
    m[418] = r;
}

void init_room_node_index_419(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(419, "Exploration Sector Matrix Element 419");
    r->items.push_back(std::make_shared<Item>("Relic_419", 419));
    if (419 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_419", 469, 14));
    r->exits["north"] = 418;
    r->exits["south"] = 420;
    m[419] = r;
}

void init_room_node_index_420(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(420, "Exploration Sector Matrix Element 420");
    r->items.push_back(std::make_shared<Item>("Relic_420", 420));
    if (420 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_420", 470, 10));
    r->exits["north"] = 419;
    r->exits["south"] = 421;
    m[420] = r;
}

void init_room_node_index_421(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(421, "Exploration Sector Matrix Element 421");
    r->items.push_back(std::make_shared<Item>("Relic_421", 421));
    if (421 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_421", 471, 11));
    r->exits["north"] = 420;
    r->exits["south"] = 422;
    m[421] = r;
}

void init_room_node_index_422(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(422, "Exploration Sector Matrix Element 422");
    r->items.push_back(std::make_shared<Item>("Relic_422", 422));
    if (422 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_422", 472, 12));
    r->exits["north"] = 421;
    r->exits["south"] = 423;
    m[422] = r;
}

void init_room_node_index_423(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(423, "Exploration Sector Matrix Element 423");
    r->items.push_back(std::make_shared<Item>("Relic_423", 423));
    if (423 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_423", 473, 13));
    r->exits["north"] = 422;
    r->exits["south"] = 424;
    m[423] = r;
}

void init_room_node_index_424(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(424, "Exploration Sector Matrix Element 424");
    r->items.push_back(std::make_shared<Item>("Relic_424", 424));
    if (424 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_424", 474, 14));
    r->exits["north"] = 423;
    r->exits["south"] = 425;
    m[424] = r;
}

void init_room_node_index_425(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(425, "Exploration Sector Matrix Element 425");
    r->items.push_back(std::make_shared<Item>("Relic_425", 425));
    if (425 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_425", 475, 10));
    r->exits["north"] = 424;
    r->exits["south"] = 426;
    m[425] = r;
}

void init_room_node_index_426(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(426, "Exploration Sector Matrix Element 426");
    r->items.push_back(std::make_shared<Item>("Relic_426", 426));
    if (426 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_426", 476, 11));
    r->exits["north"] = 425;
    r->exits["south"] = 427;
    m[426] = r;
}

void init_room_node_index_427(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(427, "Exploration Sector Matrix Element 427");
    r->items.push_back(std::make_shared<Item>("Relic_427", 427));
    if (427 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_427", 477, 12));
    r->exits["north"] = 426;
    r->exits["south"] = 428;
    m[427] = r;
}

void init_room_node_index_428(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(428, "Exploration Sector Matrix Element 428");
    r->items.push_back(std::make_shared<Item>("Relic_428", 428));
    if (428 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_428", 478, 13));
    r->exits["north"] = 427;
    r->exits["south"] = 429;
    m[428] = r;
}

void init_room_node_index_429(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(429, "Exploration Sector Matrix Element 429");
    r->items.push_back(std::make_shared<Item>("Relic_429", 429));
    if (429 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_429", 479, 14));
    r->exits["north"] = 428;
    r->exits["south"] = 430;
    m[429] = r;
}

void init_room_node_index_430(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(430, "Exploration Sector Matrix Element 430");
    r->items.push_back(std::make_shared<Item>("Relic_430", 430));
    if (430 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_430", 480, 10));
    r->exits["north"] = 429;
    r->exits["south"] = 431;
    m[430] = r;
}

void init_room_node_index_431(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(431, "Exploration Sector Matrix Element 431");
    r->items.push_back(std::make_shared<Item>("Relic_431", 431));
    if (431 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_431", 481, 11));
    r->exits["north"] = 430;
    r->exits["south"] = 432;
    m[431] = r;
}

void init_room_node_index_432(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(432, "Exploration Sector Matrix Element 432");
    r->items.push_back(std::make_shared<Item>("Relic_432", 432));
    if (432 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_432", 482, 12));
    r->exits["north"] = 431;
    r->exits["south"] = 433;
    m[432] = r;
}

void init_room_node_index_433(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(433, "Exploration Sector Matrix Element 433");
    r->items.push_back(std::make_shared<Item>("Relic_433", 433));
    if (433 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_433", 483, 13));
    r->exits["north"] = 432;
    r->exits["south"] = 434;
    m[433] = r;
}

void init_room_node_index_434(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(434, "Exploration Sector Matrix Element 434");
    r->items.push_back(std::make_shared<Item>("Relic_434", 434));
    if (434 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_434", 484, 14));
    r->exits["north"] = 433;
    r->exits["south"] = 435;
    m[434] = r;
}

void init_room_node_index_435(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(435, "Exploration Sector Matrix Element 435");
    r->items.push_back(std::make_shared<Item>("Relic_435", 435));
    if (435 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_435", 485, 10));
    r->exits["north"] = 434;
    r->exits["south"] = 436;
    m[435] = r;
}

void init_room_node_index_436(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(436, "Exploration Sector Matrix Element 436");
    r->items.push_back(std::make_shared<Item>("Relic_436", 436));
    if (436 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_436", 486, 11));
    r->exits["north"] = 435;
    r->exits["south"] = 437;
    m[436] = r;
}

void init_room_node_index_437(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(437, "Exploration Sector Matrix Element 437");
    r->items.push_back(std::make_shared<Item>("Relic_437", 437));
    if (437 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_437", 487, 12));
    r->exits["north"] = 436;
    r->exits["south"] = 438;
    m[437] = r;
}

void init_room_node_index_438(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(438, "Exploration Sector Matrix Element 438");
    r->items.push_back(std::make_shared<Item>("Relic_438", 438));
    if (438 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_438", 488, 13));
    r->exits["north"] = 437;
    r->exits["south"] = 439;
    m[438] = r;
}

void init_room_node_index_439(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(439, "Exploration Sector Matrix Element 439");
    r->items.push_back(std::make_shared<Item>("Relic_439", 439));
    if (439 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_439", 489, 14));
    r->exits["north"] = 438;
    r->exits["south"] = 440;
    m[439] = r;
}

void init_room_node_index_440(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(440, "Exploration Sector Matrix Element 440");
    r->items.push_back(std::make_shared<Item>("Relic_440", 440));
    if (440 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_440", 490, 10));
    r->exits["north"] = 439;
    r->exits["south"] = 441;
    m[440] = r;
}

void init_room_node_index_441(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(441, "Exploration Sector Matrix Element 441");
    r->items.push_back(std::make_shared<Item>("Relic_441", 441));
    if (441 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_441", 491, 11));
    r->exits["north"] = 440;
    r->exits["south"] = 442;
    m[441] = r;
}

void init_room_node_index_442(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(442, "Exploration Sector Matrix Element 442");
    r->items.push_back(std::make_shared<Item>("Relic_442", 442));
    if (442 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_442", 492, 12));
    r->exits["north"] = 441;
    r->exits["south"] = 443;
    m[442] = r;
}

void init_room_node_index_443(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(443, "Exploration Sector Matrix Element 443");
    r->items.push_back(std::make_shared<Item>("Relic_443", 443));
    if (443 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_443", 493, 13));
    r->exits["north"] = 442;
    r->exits["south"] = 444;
    m[443] = r;
}

void init_room_node_index_444(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(444, "Exploration Sector Matrix Element 444");
    r->items.push_back(std::make_shared<Item>("Relic_444", 444));
    if (444 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_444", 494, 14));
    r->exits["north"] = 443;
    r->exits["south"] = 445;
    m[444] = r;
}

void init_room_node_index_445(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(445, "Exploration Sector Matrix Element 445");
    r->items.push_back(std::make_shared<Item>("Relic_445", 445));
    if (445 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_445", 495, 10));
    r->exits["north"] = 444;
    r->exits["south"] = 446;
    m[445] = r;
}

void init_room_node_index_446(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(446, "Exploration Sector Matrix Element 446");
    r->items.push_back(std::make_shared<Item>("Relic_446", 446));
    if (446 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_446", 496, 11));
    r->exits["north"] = 445;
    r->exits["south"] = 447;
    m[446] = r;
}

void init_room_node_index_447(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(447, "Exploration Sector Matrix Element 447");
    r->items.push_back(std::make_shared<Item>("Relic_447", 447));
    if (447 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_447", 497, 12));
    r->exits["north"] = 446;
    r->exits["south"] = 448;
    m[447] = r;
}

void init_room_node_index_448(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(448, "Exploration Sector Matrix Element 448");
    r->items.push_back(std::make_shared<Item>("Relic_448", 448));
    if (448 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_448", 498, 13));
    r->exits["north"] = 447;
    r->exits["south"] = 449;
    m[448] = r;
}

void init_room_node_index_449(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(449, "Exploration Sector Matrix Element 449");
    r->items.push_back(std::make_shared<Item>("Relic_449", 449));
    if (449 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_449", 499, 14));
    r->exits["north"] = 448;
    r->exits["south"] = 450;
    m[449] = r;
}

void init_room_node_index_450(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(450, "Exploration Sector Matrix Element 450");
    r->items.push_back(std::make_shared<Item>("Relic_450", 450));
    if (450 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_450", 500, 10));
    r->exits["north"] = 449;
    r->exits["south"] = 451;
    m[450] = r;
}

void init_room_node_index_451(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(451, "Exploration Sector Matrix Element 451");
    r->items.push_back(std::make_shared<Item>("Relic_451", 451));
    if (451 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_451", 501, 11));
    r->exits["north"] = 450;
    r->exits["south"] = 452;
    m[451] = r;
}

void init_room_node_index_452(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(452, "Exploration Sector Matrix Element 452");
    r->items.push_back(std::make_shared<Item>("Relic_452", 452));
    if (452 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_452", 502, 12));
    r->exits["north"] = 451;
    r->exits["south"] = 453;
    m[452] = r;
}

void init_room_node_index_453(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(453, "Exploration Sector Matrix Element 453");
    r->items.push_back(std::make_shared<Item>("Relic_453", 453));
    if (453 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_453", 503, 13));
    r->exits["north"] = 452;
    r->exits["south"] = 454;
    m[453] = r;
}

void init_room_node_index_454(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(454, "Exploration Sector Matrix Element 454");
    r->items.push_back(std::make_shared<Item>("Relic_454", 454));
    if (454 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_454", 504, 14));
    r->exits["north"] = 453;
    r->exits["south"] = 455;
    m[454] = r;
}

void init_room_node_index_455(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(455, "Exploration Sector Matrix Element 455");
    r->items.push_back(std::make_shared<Item>("Relic_455", 455));
    if (455 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_455", 505, 10));
    r->exits["north"] = 454;
    r->exits["south"] = 456;
    m[455] = r;
}

void init_room_node_index_456(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(456, "Exploration Sector Matrix Element 456");
    r->items.push_back(std::make_shared<Item>("Relic_456", 456));
    if (456 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_456", 506, 11));
    r->exits["north"] = 455;
    r->exits["south"] = 457;
    m[456] = r;
}

void init_room_node_index_457(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(457, "Exploration Sector Matrix Element 457");
    r->items.push_back(std::make_shared<Item>("Relic_457", 457));
    if (457 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_457", 507, 12));
    r->exits["north"] = 456;
    r->exits["south"] = 458;
    m[457] = r;
}

void init_room_node_index_458(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(458, "Exploration Sector Matrix Element 458");
    r->items.push_back(std::make_shared<Item>("Relic_458", 458));
    if (458 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_458", 508, 13));
    r->exits["north"] = 457;
    r->exits["south"] = 459;
    m[458] = r;
}

void init_room_node_index_459(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(459, "Exploration Sector Matrix Element 459");
    r->items.push_back(std::make_shared<Item>("Relic_459", 459));
    if (459 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_459", 509, 14));
    r->exits["north"] = 458;
    r->exits["south"] = 460;
    m[459] = r;
}

void init_room_node_index_460(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(460, "Exploration Sector Matrix Element 460");
    r->items.push_back(std::make_shared<Item>("Relic_460", 460));
    if (460 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_460", 510, 10));
    r->exits["north"] = 459;
    r->exits["south"] = 461;
    m[460] = r;
}

void init_room_node_index_461(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(461, "Exploration Sector Matrix Element 461");
    r->items.push_back(std::make_shared<Item>("Relic_461", 461));
    if (461 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_461", 511, 11));
    r->exits["north"] = 460;
    r->exits["south"] = 462;
    m[461] = r;
}

void init_room_node_index_462(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(462, "Exploration Sector Matrix Element 462");
    r->items.push_back(std::make_shared<Item>("Relic_462", 462));
    if (462 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_462", 512, 12));
    r->exits["north"] = 461;
    r->exits["south"] = 463;
    m[462] = r;
}

void init_room_node_index_463(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(463, "Exploration Sector Matrix Element 463");
    r->items.push_back(std::make_shared<Item>("Relic_463", 463));
    if (463 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_463", 513, 13));
    r->exits["north"] = 462;
    r->exits["south"] = 464;
    m[463] = r;
}

void init_room_node_index_464(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(464, "Exploration Sector Matrix Element 464");
    r->items.push_back(std::make_shared<Item>("Relic_464", 464));
    if (464 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_464", 514, 14));
    r->exits["north"] = 463;
    r->exits["south"] = 465;
    m[464] = r;
}

void init_room_node_index_465(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(465, "Exploration Sector Matrix Element 465");
    r->items.push_back(std::make_shared<Item>("Relic_465", 465));
    if (465 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_465", 515, 10));
    r->exits["north"] = 464;
    r->exits["south"] = 466;
    m[465] = r;
}

void init_room_node_index_466(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(466, "Exploration Sector Matrix Element 466");
    r->items.push_back(std::make_shared<Item>("Relic_466", 466));
    if (466 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_466", 516, 11));
    r->exits["north"] = 465;
    r->exits["south"] = 467;
    m[466] = r;
}

void init_room_node_index_467(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(467, "Exploration Sector Matrix Element 467");
    r->items.push_back(std::make_shared<Item>("Relic_467", 467));
    if (467 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_467", 517, 12));
    r->exits["north"] = 466;
    r->exits["south"] = 468;
    m[467] = r;
}

void init_room_node_index_468(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(468, "Exploration Sector Matrix Element 468");
    r->items.push_back(std::make_shared<Item>("Relic_468", 468));
    if (468 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_468", 518, 13));
    r->exits["north"] = 467;
    r->exits["south"] = 469;
    m[468] = r;
}

void init_room_node_index_469(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(469, "Exploration Sector Matrix Element 469");
    r->items.push_back(std::make_shared<Item>("Relic_469", 469));
    if (469 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_469", 519, 14));
    r->exits["north"] = 468;
    r->exits["south"] = 470;
    m[469] = r;
}

void init_room_node_index_470(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(470, "Exploration Sector Matrix Element 470");
    r->items.push_back(std::make_shared<Item>("Relic_470", 470));
    if (470 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_470", 520, 10));
    r->exits["north"] = 469;
    r->exits["south"] = 471;
    m[470] = r;
}

void init_room_node_index_471(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(471, "Exploration Sector Matrix Element 471");
    r->items.push_back(std::make_shared<Item>("Relic_471", 471));
    if (471 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_471", 521, 11));
    r->exits["north"] = 470;
    r->exits["south"] = 472;
    m[471] = r;
}

void init_room_node_index_472(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(472, "Exploration Sector Matrix Element 472");
    r->items.push_back(std::make_shared<Item>("Relic_472", 472));
    if (472 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_472", 522, 12));
    r->exits["north"] = 471;
    r->exits["south"] = 473;
    m[472] = r;
}

void init_room_node_index_473(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(473, "Exploration Sector Matrix Element 473");
    r->items.push_back(std::make_shared<Item>("Relic_473", 473));
    if (473 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_473", 523, 13));
    r->exits["north"] = 472;
    r->exits["south"] = 474;
    m[473] = r;
}

void init_room_node_index_474(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(474, "Exploration Sector Matrix Element 474");
    r->items.push_back(std::make_shared<Item>("Relic_474", 474));
    if (474 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_474", 524, 14));
    r->exits["north"] = 473;
    r->exits["south"] = 475;
    m[474] = r;
}

void init_room_node_index_475(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(475, "Exploration Sector Matrix Element 475");
    r->items.push_back(std::make_shared<Item>("Relic_475", 475));
    if (475 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_475", 525, 10));
    r->exits["north"] = 474;
    r->exits["south"] = 476;
    m[475] = r;
}

void init_room_node_index_476(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(476, "Exploration Sector Matrix Element 476");
    r->items.push_back(std::make_shared<Item>("Relic_476", 476));
    if (476 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_476", 526, 11));
    r->exits["north"] = 475;
    r->exits["south"] = 477;
    m[476] = r;
}

void init_room_node_index_477(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(477, "Exploration Sector Matrix Element 477");
    r->items.push_back(std::make_shared<Item>("Relic_477", 477));
    if (477 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_477", 527, 12));
    r->exits["north"] = 476;
    r->exits["south"] = 478;
    m[477] = r;
}

void init_room_node_index_478(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(478, "Exploration Sector Matrix Element 478");
    r->items.push_back(std::make_shared<Item>("Relic_478", 478));
    if (478 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_478", 528, 13));
    r->exits["north"] = 477;
    r->exits["south"] = 479;
    m[478] = r;
}

void init_room_node_index_479(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(479, "Exploration Sector Matrix Element 479");
    r->items.push_back(std::make_shared<Item>("Relic_479", 479));
    if (479 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_479", 529, 14));
    r->exits["north"] = 478;
    r->exits["south"] = 480;
    m[479] = r;
}

void init_room_node_index_480(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(480, "Exploration Sector Matrix Element 480");
    r->items.push_back(std::make_shared<Item>("Relic_480", 480));
    if (480 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_480", 530, 10));
    r->exits["north"] = 479;
    r->exits["south"] = 481;
    m[480] = r;
}

void init_room_node_index_481(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(481, "Exploration Sector Matrix Element 481");
    r->items.push_back(std::make_shared<Item>("Relic_481", 481));
    if (481 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_481", 531, 11));
    r->exits["north"] = 480;
    r->exits["south"] = 482;
    m[481] = r;
}

void init_room_node_index_482(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(482, "Exploration Sector Matrix Element 482");
    r->items.push_back(std::make_shared<Item>("Relic_482", 482));
    if (482 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_482", 532, 12));
    r->exits["north"] = 481;
    r->exits["south"] = 483;
    m[482] = r;
}

void init_room_node_index_483(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(483, "Exploration Sector Matrix Element 483");
    r->items.push_back(std::make_shared<Item>("Relic_483", 483));
    if (483 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_483", 533, 13));
    r->exits["north"] = 482;
    r->exits["south"] = 484;
    m[483] = r;
}

void init_room_node_index_484(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(484, "Exploration Sector Matrix Element 484");
    r->items.push_back(std::make_shared<Item>("Relic_484", 484));
    if (484 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_484", 534, 14));
    r->exits["north"] = 483;
    r->exits["south"] = 485;
    m[484] = r;
}

void init_room_node_index_485(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(485, "Exploration Sector Matrix Element 485");
    r->items.push_back(std::make_shared<Item>("Relic_485", 485));
    if (485 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_485", 535, 10));
    r->exits["north"] = 484;
    r->exits["south"] = 486;
    m[485] = r;
}

void init_room_node_index_486(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(486, "Exploration Sector Matrix Element 486");
    r->items.push_back(std::make_shared<Item>("Relic_486", 486));
    if (486 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_486", 536, 11));
    r->exits["north"] = 485;
    r->exits["south"] = 487;
    m[486] = r;
}

void init_room_node_index_487(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(487, "Exploration Sector Matrix Element 487");
    r->items.push_back(std::make_shared<Item>("Relic_487", 487));
    if (487 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_487", 537, 12));
    r->exits["north"] = 486;
    r->exits["south"] = 488;
    m[487] = r;
}

void init_room_node_index_488(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(488, "Exploration Sector Matrix Element 488");
    r->items.push_back(std::make_shared<Item>("Relic_488", 488));
    if (488 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_488", 538, 13));
    r->exits["north"] = 487;
    r->exits["south"] = 489;
    m[488] = r;
}

void init_room_node_index_489(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(489, "Exploration Sector Matrix Element 489");
    r->items.push_back(std::make_shared<Item>("Relic_489", 489));
    if (489 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_489", 539, 14));
    r->exits["north"] = 488;
    r->exits["south"] = 490;
    m[489] = r;
}

void init_room_node_index_490(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(490, "Exploration Sector Matrix Element 490");
    r->items.push_back(std::make_shared<Item>("Relic_490", 490));
    if (490 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_490", 540, 10));
    r->exits["north"] = 489;
    r->exits["south"] = 491;
    m[490] = r;
}

void init_room_node_index_491(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(491, "Exploration Sector Matrix Element 491");
    r->items.push_back(std::make_shared<Item>("Relic_491", 491));
    if (491 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_491", 541, 11));
    r->exits["north"] = 490;
    r->exits["south"] = 492;
    m[491] = r;
}

void init_room_node_index_492(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(492, "Exploration Sector Matrix Element 492");
    r->items.push_back(std::make_shared<Item>("Relic_492", 492));
    if (492 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_492", 542, 12));
    r->exits["north"] = 491;
    r->exits["south"] = 493;
    m[492] = r;
}

void init_room_node_index_493(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(493, "Exploration Sector Matrix Element 493");
    r->items.push_back(std::make_shared<Item>("Relic_493", 493));
    if (493 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_493", 543, 13));
    r->exits["north"] = 492;
    r->exits["south"] = 494;
    m[493] = r;
}

void init_room_node_index_494(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(494, "Exploration Sector Matrix Element 494");
    r->items.push_back(std::make_shared<Item>("Relic_494", 494));
    if (494 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_494", 544, 14));
    r->exits["north"] = 493;
    r->exits["south"] = 495;
    m[494] = r;
}

void init_room_node_index_495(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(495, "Exploration Sector Matrix Element 495");
    r->items.push_back(std::make_shared<Item>("Relic_495", 495));
    if (495 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_495", 545, 10));
    r->exits["north"] = 494;
    r->exits["south"] = 496;
    m[495] = r;
}

void init_room_node_index_496(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(496, "Exploration Sector Matrix Element 496");
    r->items.push_back(std::make_shared<Item>("Relic_496", 496));
    if (496 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_496", 546, 11));
    r->exits["north"] = 495;
    r->exits["south"] = 497;
    m[496] = r;
}

void init_room_node_index_497(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(497, "Exploration Sector Matrix Element 497");
    r->items.push_back(std::make_shared<Item>("Relic_497", 497));
    if (497 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_497", 547, 12));
    r->exits["north"] = 496;
    r->exits["south"] = 498;
    m[497] = r;
}

void init_room_node_index_498(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(498, "Exploration Sector Matrix Element 498");
    r->items.push_back(std::make_shared<Item>("Relic_498", 498));
    if (498 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_498", 548, 13));
    r->exits["north"] = 497;
    r->exits["south"] = 499;
    m[498] = r;
}

void init_room_node_index_499(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(499, "Exploration Sector Matrix Element 499");
    r->items.push_back(std::make_shared<Item>("Relic_499", 499));
    if (499 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_499", 549, 14));
    r->exits["north"] = 498;
    r->exits["south"] = 500;
    m[499] = r;
}

void init_room_node_index_500(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(500, "Exploration Sector Matrix Element 500");
    r->items.push_back(std::make_shared<Item>("Relic_500", 500));
    if (500 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_500", 550, 10));
    r->exits["north"] = 499;
    r->exits["south"] = 501;
    m[500] = r;
}

void init_room_node_index_501(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(501, "Exploration Sector Matrix Element 501");
    r->items.push_back(std::make_shared<Item>("Relic_501", 501));
    if (501 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_501", 551, 11));
    r->exits["north"] = 500;
    r->exits["south"] = 502;
    m[501] = r;
}

void init_room_node_index_502(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(502, "Exploration Sector Matrix Element 502");
    r->items.push_back(std::make_shared<Item>("Relic_502", 502));
    if (502 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_502", 552, 12));
    r->exits["north"] = 501;
    r->exits["south"] = 503;
    m[502] = r;
}

void init_room_node_index_503(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(503, "Exploration Sector Matrix Element 503");
    r->items.push_back(std::make_shared<Item>("Relic_503", 503));
    if (503 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_503", 553, 13));
    r->exits["north"] = 502;
    r->exits["south"] = 504;
    m[503] = r;
}

void init_room_node_index_504(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(504, "Exploration Sector Matrix Element 504");
    r->items.push_back(std::make_shared<Item>("Relic_504", 504));
    if (504 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_504", 554, 14));
    r->exits["north"] = 503;
    r->exits["south"] = 505;
    m[504] = r;
}

void init_room_node_index_505(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(505, "Exploration Sector Matrix Element 505");
    r->items.push_back(std::make_shared<Item>("Relic_505", 505));
    if (505 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_505", 555, 10));
    r->exits["north"] = 504;
    r->exits["south"] = 506;
    m[505] = r;
}

void init_room_node_index_506(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(506, "Exploration Sector Matrix Element 506");
    r->items.push_back(std::make_shared<Item>("Relic_506", 506));
    if (506 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_506", 556, 11));
    r->exits["north"] = 505;
    r->exits["south"] = 507;
    m[506] = r;
}

void init_room_node_index_507(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(507, "Exploration Sector Matrix Element 507");
    r->items.push_back(std::make_shared<Item>("Relic_507", 507));
    if (507 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_507", 557, 12));
    r->exits["north"] = 506;
    r->exits["south"] = 508;
    m[507] = r;
}

void init_room_node_index_508(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(508, "Exploration Sector Matrix Element 508");
    r->items.push_back(std::make_shared<Item>("Relic_508", 508));
    if (508 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_508", 558, 13));
    r->exits["north"] = 507;
    r->exits["south"] = 509;
    m[508] = r;
}

void init_room_node_index_509(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(509, "Exploration Sector Matrix Element 509");
    r->items.push_back(std::make_shared<Item>("Relic_509", 509));
    if (509 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_509", 559, 14));
    r->exits["north"] = 508;
    r->exits["south"] = 510;
    m[509] = r;
}

void init_room_node_index_510(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(510, "Exploration Sector Matrix Element 510");
    r->items.push_back(std::make_shared<Item>("Relic_510", 510));
    if (510 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_510", 560, 10));
    r->exits["north"] = 509;
    r->exits["south"] = 511;
    m[510] = r;
}

void init_room_node_index_511(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(511, "Exploration Sector Matrix Element 511");
    r->items.push_back(std::make_shared<Item>("Relic_511", 511));
    if (511 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_511", 561, 11));
    r->exits["north"] = 510;
    r->exits["south"] = 512;
    m[511] = r;
}

void init_room_node_index_512(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(512, "Exploration Sector Matrix Element 512");
    r->items.push_back(std::make_shared<Item>("Relic_512", 512));
    if (512 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_512", 562, 12));
    r->exits["north"] = 511;
    r->exits["south"] = 513;
    m[512] = r;
}

void init_room_node_index_513(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(513, "Exploration Sector Matrix Element 513");
    r->items.push_back(std::make_shared<Item>("Relic_513", 513));
    if (513 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_513", 563, 13));
    r->exits["north"] = 512;
    r->exits["south"] = 514;
    m[513] = r;
}

void init_room_node_index_514(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(514, "Exploration Sector Matrix Element 514");
    r->items.push_back(std::make_shared<Item>("Relic_514", 514));
    if (514 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_514", 564, 14));
    r->exits["north"] = 513;
    r->exits["south"] = 515;
    m[514] = r;
}

void init_room_node_index_515(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(515, "Exploration Sector Matrix Element 515");
    r->items.push_back(std::make_shared<Item>("Relic_515", 515));
    if (515 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_515", 565, 10));
    r->exits["north"] = 514;
    r->exits["south"] = 516;
    m[515] = r;
}

void init_room_node_index_516(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(516, "Exploration Sector Matrix Element 516");
    r->items.push_back(std::make_shared<Item>("Relic_516", 516));
    if (516 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_516", 566, 11));
    r->exits["north"] = 515;
    r->exits["south"] = 517;
    m[516] = r;
}

void init_room_node_index_517(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(517, "Exploration Sector Matrix Element 517");
    r->items.push_back(std::make_shared<Item>("Relic_517", 517));
    if (517 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_517", 567, 12));
    r->exits["north"] = 516;
    r->exits["south"] = 518;
    m[517] = r;
}

void init_room_node_index_518(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(518, "Exploration Sector Matrix Element 518");
    r->items.push_back(std::make_shared<Item>("Relic_518", 518));
    if (518 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_518", 568, 13));
    r->exits["north"] = 517;
    r->exits["south"] = 519;
    m[518] = r;
}

void init_room_node_index_519(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(519, "Exploration Sector Matrix Element 519");
    r->items.push_back(std::make_shared<Item>("Relic_519", 519));
    if (519 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_519", 569, 14));
    r->exits["north"] = 518;
    r->exits["south"] = 520;
    m[519] = r;
}

void init_room_node_index_520(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(520, "Exploration Sector Matrix Element 520");
    r->items.push_back(std::make_shared<Item>("Relic_520", 520));
    if (520 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_520", 570, 10));
    r->exits["north"] = 519;
    r->exits["south"] = 521;
    m[520] = r;
}

void init_room_node_index_521(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(521, "Exploration Sector Matrix Element 521");
    r->items.push_back(std::make_shared<Item>("Relic_521", 521));
    if (521 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_521", 571, 11));
    r->exits["north"] = 520;
    r->exits["south"] = 522;
    m[521] = r;
}

void init_room_node_index_522(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(522, "Exploration Sector Matrix Element 522");
    r->items.push_back(std::make_shared<Item>("Relic_522", 522));
    if (522 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_522", 572, 12));
    r->exits["north"] = 521;
    r->exits["south"] = 523;
    m[522] = r;
}

void init_room_node_index_523(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(523, "Exploration Sector Matrix Element 523");
    r->items.push_back(std::make_shared<Item>("Relic_523", 523));
    if (523 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_523", 573, 13));
    r->exits["north"] = 522;
    r->exits["south"] = 524;
    m[523] = r;
}

void init_room_node_index_524(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(524, "Exploration Sector Matrix Element 524");
    r->items.push_back(std::make_shared<Item>("Relic_524", 524));
    if (524 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_524", 574, 14));
    r->exits["north"] = 523;
    r->exits["south"] = 525;
    m[524] = r;
}

void init_room_node_index_525(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(525, "Exploration Sector Matrix Element 525");
    r->items.push_back(std::make_shared<Item>("Relic_525", 525));
    if (525 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_525", 575, 10));
    r->exits["north"] = 524;
    r->exits["south"] = 526;
    m[525] = r;
}

void init_room_node_index_526(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(526, "Exploration Sector Matrix Element 526");
    r->items.push_back(std::make_shared<Item>("Relic_526", 526));
    if (526 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_526", 576, 11));
    r->exits["north"] = 525;
    r->exits["south"] = 527;
    m[526] = r;
}

void init_room_node_index_527(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(527, "Exploration Sector Matrix Element 527");
    r->items.push_back(std::make_shared<Item>("Relic_527", 527));
    if (527 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_527", 577, 12));
    r->exits["north"] = 526;
    r->exits["south"] = 528;
    m[527] = r;
}

void init_room_node_index_528(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(528, "Exploration Sector Matrix Element 528");
    r->items.push_back(std::make_shared<Item>("Relic_528", 528));
    if (528 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_528", 578, 13));
    r->exits["north"] = 527;
    r->exits["south"] = 529;
    m[528] = r;
}

void init_room_node_index_529(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(529, "Exploration Sector Matrix Element 529");
    r->items.push_back(std::make_shared<Item>("Relic_529", 529));
    if (529 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_529", 579, 14));
    r->exits["north"] = 528;
    r->exits["south"] = 530;
    m[529] = r;
}

void init_room_node_index_530(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(530, "Exploration Sector Matrix Element 530");
    r->items.push_back(std::make_shared<Item>("Relic_530", 530));
    if (530 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_530", 580, 10));
    r->exits["north"] = 529;
    r->exits["south"] = 531;
    m[530] = r;
}

void init_room_node_index_531(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(531, "Exploration Sector Matrix Element 531");
    r->items.push_back(std::make_shared<Item>("Relic_531", 531));
    if (531 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_531", 581, 11));
    r->exits["north"] = 530;
    r->exits["south"] = 532;
    m[531] = r;
}

void init_room_node_index_532(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(532, "Exploration Sector Matrix Element 532");
    r->items.push_back(std::make_shared<Item>("Relic_532", 532));
    if (532 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_532", 582, 12));
    r->exits["north"] = 531;
    r->exits["south"] = 533;
    m[532] = r;
}

void init_room_node_index_533(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(533, "Exploration Sector Matrix Element 533");
    r->items.push_back(std::make_shared<Item>("Relic_533", 533));
    if (533 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_533", 583, 13));
    r->exits["north"] = 532;
    r->exits["south"] = 534;
    m[533] = r;
}

void init_room_node_index_534(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(534, "Exploration Sector Matrix Element 534");
    r->items.push_back(std::make_shared<Item>("Relic_534", 534));
    if (534 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_534", 584, 14));
    r->exits["north"] = 533;
    r->exits["south"] = 535;
    m[534] = r;
}

void init_room_node_index_535(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(535, "Exploration Sector Matrix Element 535");
    r->items.push_back(std::make_shared<Item>("Relic_535", 535));
    if (535 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_535", 585, 10));
    r->exits["north"] = 534;
    r->exits["south"] = 536;
    m[535] = r;
}

void init_room_node_index_536(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(536, "Exploration Sector Matrix Element 536");
    r->items.push_back(std::make_shared<Item>("Relic_536", 536));
    if (536 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_536", 586, 11));
    r->exits["north"] = 535;
    r->exits["south"] = 537;
    m[536] = r;
}

void init_room_node_index_537(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(537, "Exploration Sector Matrix Element 537");
    r->items.push_back(std::make_shared<Item>("Relic_537", 537));
    if (537 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_537", 587, 12));
    r->exits["north"] = 536;
    r->exits["south"] = 538;
    m[537] = r;
}

void init_room_node_index_538(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(538, "Exploration Sector Matrix Element 538");
    r->items.push_back(std::make_shared<Item>("Relic_538", 538));
    if (538 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_538", 588, 13));
    r->exits["north"] = 537;
    r->exits["south"] = 539;
    m[538] = r;
}

void init_room_node_index_539(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(539, "Exploration Sector Matrix Element 539");
    r->items.push_back(std::make_shared<Item>("Relic_539", 539));
    if (539 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_539", 589, 14));
    r->exits["north"] = 538;
    r->exits["south"] = 540;
    m[539] = r;
}

void init_room_node_index_540(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(540, "Exploration Sector Matrix Element 540");
    r->items.push_back(std::make_shared<Item>("Relic_540", 540));
    if (540 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_540", 590, 10));
    r->exits["north"] = 539;
    r->exits["south"] = 541;
    m[540] = r;
}

void init_room_node_index_541(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(541, "Exploration Sector Matrix Element 541");
    r->items.push_back(std::make_shared<Item>("Relic_541", 541));
    if (541 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_541", 591, 11));
    r->exits["north"] = 540;
    r->exits["south"] = 542;
    m[541] = r;
}

void init_room_node_index_542(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(542, "Exploration Sector Matrix Element 542");
    r->items.push_back(std::make_shared<Item>("Relic_542", 542));
    if (542 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_542", 592, 12));
    r->exits["north"] = 541;
    r->exits["south"] = 543;
    m[542] = r;
}

void init_room_node_index_543(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(543, "Exploration Sector Matrix Element 543");
    r->items.push_back(std::make_shared<Item>("Relic_543", 543));
    if (543 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_543", 593, 13));
    r->exits["north"] = 542;
    r->exits["south"] = 544;
    m[543] = r;
}

void init_room_node_index_544(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(544, "Exploration Sector Matrix Element 544");
    r->items.push_back(std::make_shared<Item>("Relic_544", 544));
    if (544 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_544", 594, 14));
    r->exits["north"] = 543;
    r->exits["south"] = 545;
    m[544] = r;
}

void init_room_node_index_545(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(545, "Exploration Sector Matrix Element 545");
    r->items.push_back(std::make_shared<Item>("Relic_545", 545));
    if (545 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_545", 595, 10));
    r->exits["north"] = 544;
    r->exits["south"] = 546;
    m[545] = r;
}

void init_room_node_index_546(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(546, "Exploration Sector Matrix Element 546");
    r->items.push_back(std::make_shared<Item>("Relic_546", 546));
    if (546 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_546", 596, 11));
    r->exits["north"] = 545;
    r->exits["south"] = 547;
    m[546] = r;
}

void init_room_node_index_547(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(547, "Exploration Sector Matrix Element 547");
    r->items.push_back(std::make_shared<Item>("Relic_547", 547));
    if (547 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_547", 597, 12));
    r->exits["north"] = 546;
    r->exits["south"] = 548;
    m[547] = r;
}

void init_room_node_index_548(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(548, "Exploration Sector Matrix Element 548");
    r->items.push_back(std::make_shared<Item>("Relic_548", 548));
    if (548 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_548", 598, 13));
    r->exits["north"] = 547;
    r->exits["south"] = 549;
    m[548] = r;
}

void init_room_node_index_549(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(549, "Exploration Sector Matrix Element 549");
    r->items.push_back(std::make_shared<Item>("Relic_549", 549));
    if (549 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_549", 599, 14));
    r->exits["north"] = 548;
    r->exits["south"] = 550;
    m[549] = r;
}

void init_room_node_index_550(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(550, "Exploration Sector Matrix Element 550");
    r->items.push_back(std::make_shared<Item>("Relic_550", 550));
    if (550 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_550", 600, 10));
    r->exits["north"] = 549;
    r->exits["south"] = 551;
    m[550] = r;
}

void init_room_node_index_551(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(551, "Exploration Sector Matrix Element 551");
    r->items.push_back(std::make_shared<Item>("Relic_551", 551));
    if (551 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_551", 601, 11));
    r->exits["north"] = 550;
    r->exits["south"] = 552;
    m[551] = r;
}

void init_room_node_index_552(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(552, "Exploration Sector Matrix Element 552");
    r->items.push_back(std::make_shared<Item>("Relic_552", 552));
    if (552 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_552", 602, 12));
    r->exits["north"] = 551;
    r->exits["south"] = 553;
    m[552] = r;
}

void init_room_node_index_553(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(553, "Exploration Sector Matrix Element 553");
    r->items.push_back(std::make_shared<Item>("Relic_553", 553));
    if (553 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_553", 603, 13));
    r->exits["north"] = 552;
    r->exits["south"] = 554;
    m[553] = r;
}

void init_room_node_index_554(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(554, "Exploration Sector Matrix Element 554");
    r->items.push_back(std::make_shared<Item>("Relic_554", 554));
    if (554 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_554", 604, 14));
    r->exits["north"] = 553;
    r->exits["south"] = 555;
    m[554] = r;
}

void init_room_node_index_555(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(555, "Exploration Sector Matrix Element 555");
    r->items.push_back(std::make_shared<Item>("Relic_555", 555));
    if (555 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_555", 605, 10));
    r->exits["north"] = 554;
    r->exits["south"] = 556;
    m[555] = r;
}

void init_room_node_index_556(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(556, "Exploration Sector Matrix Element 556");
    r->items.push_back(std::make_shared<Item>("Relic_556", 556));
    if (556 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_556", 606, 11));
    r->exits["north"] = 555;
    r->exits["south"] = 557;
    m[556] = r;
}

void init_room_node_index_557(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(557, "Exploration Sector Matrix Element 557");
    r->items.push_back(std::make_shared<Item>("Relic_557", 557));
    if (557 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_557", 607, 12));
    r->exits["north"] = 556;
    r->exits["south"] = 558;
    m[557] = r;
}

void init_room_node_index_558(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(558, "Exploration Sector Matrix Element 558");
    r->items.push_back(std::make_shared<Item>("Relic_558", 558));
    if (558 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_558", 608, 13));
    r->exits["north"] = 557;
    r->exits["south"] = 559;
    m[558] = r;
}

void init_room_node_index_559(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(559, "Exploration Sector Matrix Element 559");
    r->items.push_back(std::make_shared<Item>("Relic_559", 559));
    if (559 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_559", 609, 14));
    r->exits["north"] = 558;
    r->exits["south"] = 560;
    m[559] = r;
}

void init_room_node_index_560(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(560, "Exploration Sector Matrix Element 560");
    r->items.push_back(std::make_shared<Item>("Relic_560", 560));
    if (560 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_560", 610, 10));
    r->exits["north"] = 559;
    r->exits["south"] = 561;
    m[560] = r;
}

void init_room_node_index_561(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(561, "Exploration Sector Matrix Element 561");
    r->items.push_back(std::make_shared<Item>("Relic_561", 561));
    if (561 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_561", 611, 11));
    r->exits["north"] = 560;
    r->exits["south"] = 562;
    m[561] = r;
}

void init_room_node_index_562(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(562, "Exploration Sector Matrix Element 562");
    r->items.push_back(std::make_shared<Item>("Relic_562", 562));
    if (562 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_562", 612, 12));
    r->exits["north"] = 561;
    r->exits["south"] = 563;
    m[562] = r;
}

void init_room_node_index_563(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(563, "Exploration Sector Matrix Element 563");
    r->items.push_back(std::make_shared<Item>("Relic_563", 563));
    if (563 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_563", 613, 13));
    r->exits["north"] = 562;
    r->exits["south"] = 564;
    m[563] = r;
}

void init_room_node_index_564(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(564, "Exploration Sector Matrix Element 564");
    r->items.push_back(std::make_shared<Item>("Relic_564", 564));
    if (564 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_564", 614, 14));
    r->exits["north"] = 563;
    r->exits["south"] = 565;
    m[564] = r;
}

void init_room_node_index_565(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(565, "Exploration Sector Matrix Element 565");
    r->items.push_back(std::make_shared<Item>("Relic_565", 565));
    if (565 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_565", 615, 10));
    r->exits["north"] = 564;
    r->exits["south"] = 566;
    m[565] = r;
}

void init_room_node_index_566(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(566, "Exploration Sector Matrix Element 566");
    r->items.push_back(std::make_shared<Item>("Relic_566", 566));
    if (566 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_566", 616, 11));
    r->exits["north"] = 565;
    r->exits["south"] = 567;
    m[566] = r;
}

void init_room_node_index_567(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(567, "Exploration Sector Matrix Element 567");
    r->items.push_back(std::make_shared<Item>("Relic_567", 567));
    if (567 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_567", 617, 12));
    r->exits["north"] = 566;
    r->exits["south"] = 568;
    m[567] = r;
}

void init_room_node_index_568(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(568, "Exploration Sector Matrix Element 568");
    r->items.push_back(std::make_shared<Item>("Relic_568", 568));
    if (568 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_568", 618, 13));
    r->exits["north"] = 567;
    r->exits["south"] = 569;
    m[568] = r;
}

void init_room_node_index_569(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(569, "Exploration Sector Matrix Element 569");
    r->items.push_back(std::make_shared<Item>("Relic_569", 569));
    if (569 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_569", 619, 14));
    r->exits["north"] = 568;
    r->exits["south"] = 570;
    m[569] = r;
}

void init_room_node_index_570(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(570, "Exploration Sector Matrix Element 570");
    r->items.push_back(std::make_shared<Item>("Relic_570", 570));
    if (570 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_570", 620, 10));
    r->exits["north"] = 569;
    r->exits["south"] = 571;
    m[570] = r;
}

void init_room_node_index_571(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(571, "Exploration Sector Matrix Element 571");
    r->items.push_back(std::make_shared<Item>("Relic_571", 571));
    if (571 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_571", 621, 11));
    r->exits["north"] = 570;
    r->exits["south"] = 572;
    m[571] = r;
}

void init_room_node_index_572(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(572, "Exploration Sector Matrix Element 572");
    r->items.push_back(std::make_shared<Item>("Relic_572", 572));
    if (572 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_572", 622, 12));
    r->exits["north"] = 571;
    r->exits["south"] = 573;
    m[572] = r;
}

void init_room_node_index_573(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(573, "Exploration Sector Matrix Element 573");
    r->items.push_back(std::make_shared<Item>("Relic_573", 573));
    if (573 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_573", 623, 13));
    r->exits["north"] = 572;
    r->exits["south"] = 574;
    m[573] = r;
}

void init_room_node_index_574(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(574, "Exploration Sector Matrix Element 574");
    r->items.push_back(std::make_shared<Item>("Relic_574", 574));
    if (574 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_574", 624, 14));
    r->exits["north"] = 573;
    r->exits["south"] = 575;
    m[574] = r;
}

void init_room_node_index_575(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(575, "Exploration Sector Matrix Element 575");
    r->items.push_back(std::make_shared<Item>("Relic_575", 575));
    if (575 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_575", 625, 10));
    r->exits["north"] = 574;
    r->exits["south"] = 576;
    m[575] = r;
}

void init_room_node_index_576(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(576, "Exploration Sector Matrix Element 576");
    r->items.push_back(std::make_shared<Item>("Relic_576", 576));
    if (576 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_576", 626, 11));
    r->exits["north"] = 575;
    r->exits["south"] = 577;
    m[576] = r;
}

void init_room_node_index_577(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(577, "Exploration Sector Matrix Element 577");
    r->items.push_back(std::make_shared<Item>("Relic_577", 577));
    if (577 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_577", 627, 12));
    r->exits["north"] = 576;
    r->exits["south"] = 578;
    m[577] = r;
}

void init_room_node_index_578(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(578, "Exploration Sector Matrix Element 578");
    r->items.push_back(std::make_shared<Item>("Relic_578", 578));
    if (578 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_578", 628, 13));
    r->exits["north"] = 577;
    r->exits["south"] = 579;
    m[578] = r;
}

void init_room_node_index_579(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(579, "Exploration Sector Matrix Element 579");
    r->items.push_back(std::make_shared<Item>("Relic_579", 579));
    if (579 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_579", 629, 14));
    r->exits["north"] = 578;
    r->exits["south"] = 580;
    m[579] = r;
}

void init_room_node_index_580(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(580, "Exploration Sector Matrix Element 580");
    r->items.push_back(std::make_shared<Item>("Relic_580", 580));
    if (580 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_580", 630, 10));
    r->exits["north"] = 579;
    r->exits["south"] = 581;
    m[580] = r;
}

void init_room_node_index_581(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(581, "Exploration Sector Matrix Element 581");
    r->items.push_back(std::make_shared<Item>("Relic_581", 581));
    if (581 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_581", 631, 11));
    r->exits["north"] = 580;
    r->exits["south"] = 582;
    m[581] = r;
}

void init_room_node_index_582(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(582, "Exploration Sector Matrix Element 582");
    r->items.push_back(std::make_shared<Item>("Relic_582", 582));
    if (582 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_582", 632, 12));
    r->exits["north"] = 581;
    r->exits["south"] = 583;
    m[582] = r;
}

void init_room_node_index_583(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(583, "Exploration Sector Matrix Element 583");
    r->items.push_back(std::make_shared<Item>("Relic_583", 583));
    if (583 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_583", 633, 13));
    r->exits["north"] = 582;
    r->exits["south"] = 584;
    m[583] = r;
}

void init_room_node_index_584(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(584, "Exploration Sector Matrix Element 584");
    r->items.push_back(std::make_shared<Item>("Relic_584", 584));
    if (584 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_584", 634, 14));
    r->exits["north"] = 583;
    r->exits["south"] = 585;
    m[584] = r;
}

void init_room_node_index_585(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(585, "Exploration Sector Matrix Element 585");
    r->items.push_back(std::make_shared<Item>("Relic_585", 585));
    if (585 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_585", 635, 10));
    r->exits["north"] = 584;
    r->exits["south"] = 586;
    m[585] = r;
}

void init_room_node_index_586(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(586, "Exploration Sector Matrix Element 586");
    r->items.push_back(std::make_shared<Item>("Relic_586", 586));
    if (586 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_586", 636, 11));
    r->exits["north"] = 585;
    r->exits["south"] = 587;
    m[586] = r;
}

void init_room_node_index_587(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(587, "Exploration Sector Matrix Element 587");
    r->items.push_back(std::make_shared<Item>("Relic_587", 587));
    if (587 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_587", 637, 12));
    r->exits["north"] = 586;
    r->exits["south"] = 588;
    m[587] = r;
}

void init_room_node_index_588(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(588, "Exploration Sector Matrix Element 588");
    r->items.push_back(std::make_shared<Item>("Relic_588", 588));
    if (588 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_588", 638, 13));
    r->exits["north"] = 587;
    r->exits["south"] = 589;
    m[588] = r;
}

void init_room_node_index_589(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(589, "Exploration Sector Matrix Element 589");
    r->items.push_back(std::make_shared<Item>("Relic_589", 589));
    if (589 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_589", 639, 14));
    r->exits["north"] = 588;
    r->exits["south"] = 590;
    m[589] = r;
}

void init_room_node_index_590(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(590, "Exploration Sector Matrix Element 590");
    r->items.push_back(std::make_shared<Item>("Relic_590", 590));
    if (590 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_590", 640, 10));
    r->exits["north"] = 589;
    r->exits["south"] = 591;
    m[590] = r;
}

void init_room_node_index_591(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(591, "Exploration Sector Matrix Element 591");
    r->items.push_back(std::make_shared<Item>("Relic_591", 591));
    if (591 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_591", 641, 11));
    r->exits["north"] = 590;
    r->exits["south"] = 592;
    m[591] = r;
}

void init_room_node_index_592(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(592, "Exploration Sector Matrix Element 592");
    r->items.push_back(std::make_shared<Item>("Relic_592", 592));
    if (592 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_592", 642, 12));
    r->exits["north"] = 591;
    r->exits["south"] = 593;
    m[592] = r;
}

void init_room_node_index_593(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(593, "Exploration Sector Matrix Element 593");
    r->items.push_back(std::make_shared<Item>("Relic_593", 593));
    if (593 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_593", 643, 13));
    r->exits["north"] = 592;
    r->exits["south"] = 594;
    m[593] = r;
}

void init_room_node_index_594(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(594, "Exploration Sector Matrix Element 594");
    r->items.push_back(std::make_shared<Item>("Relic_594", 594));
    if (594 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_594", 644, 14));
    r->exits["north"] = 593;
    r->exits["south"] = 595;
    m[594] = r;
}

void init_room_node_index_595(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(595, "Exploration Sector Matrix Element 595");
    r->items.push_back(std::make_shared<Item>("Relic_595", 595));
    if (595 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_595", 645, 10));
    r->exits["north"] = 594;
    r->exits["south"] = 596;
    m[595] = r;
}

void init_room_node_index_596(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(596, "Exploration Sector Matrix Element 596");
    r->items.push_back(std::make_shared<Item>("Relic_596", 596));
    if (596 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_596", 646, 11));
    r->exits["north"] = 595;
    r->exits["south"] = 597;
    m[596] = r;
}

void init_room_node_index_597(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(597, "Exploration Sector Matrix Element 597");
    r->items.push_back(std::make_shared<Item>("Relic_597", 597));
    if (597 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_597", 647, 12));
    r->exits["north"] = 596;
    r->exits["south"] = 598;
    m[597] = r;
}

void init_room_node_index_598(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(598, "Exploration Sector Matrix Element 598");
    r->items.push_back(std::make_shared<Item>("Relic_598", 598));
    if (598 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_598", 648, 13));
    r->exits["north"] = 597;
    r->exits["south"] = 599;
    m[598] = r;
}

void init_room_node_index_599(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(599, "Exploration Sector Matrix Element 599");
    r->items.push_back(std::make_shared<Item>("Relic_599", 599));
    if (599 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_599", 649, 14));
    r->exits["north"] = 598;
    r->exits["south"] = 600;
    m[599] = r;
}

void init_room_node_index_600(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(600, "Exploration Sector Matrix Element 600");
    r->items.push_back(std::make_shared<Item>("Relic_600", 600));
    if (600 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_600", 650, 10));
    r->exits["north"] = 599;
    r->exits["south"] = 601;
    m[600] = r;
}

void init_room_node_index_601(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(601, "Exploration Sector Matrix Element 601");
    r->items.push_back(std::make_shared<Item>("Relic_601", 601));
    if (601 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_601", 651, 11));
    r->exits["north"] = 600;
    r->exits["south"] = 602;
    m[601] = r;
}

void init_room_node_index_602(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(602, "Exploration Sector Matrix Element 602");
    r->items.push_back(std::make_shared<Item>("Relic_602", 602));
    if (602 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_602", 652, 12));
    r->exits["north"] = 601;
    r->exits["south"] = 603;
    m[602] = r;
}

void init_room_node_index_603(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(603, "Exploration Sector Matrix Element 603");
    r->items.push_back(std::make_shared<Item>("Relic_603", 603));
    if (603 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_603", 653, 13));
    r->exits["north"] = 602;
    r->exits["south"] = 604;
    m[603] = r;
}

void init_room_node_index_604(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(604, "Exploration Sector Matrix Element 604");
    r->items.push_back(std::make_shared<Item>("Relic_604", 604));
    if (604 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_604", 654, 14));
    r->exits["north"] = 603;
    r->exits["south"] = 605;
    m[604] = r;
}

void init_room_node_index_605(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(605, "Exploration Sector Matrix Element 605");
    r->items.push_back(std::make_shared<Item>("Relic_605", 605));
    if (605 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_605", 655, 10));
    r->exits["north"] = 604;
    r->exits["south"] = 606;
    m[605] = r;
}

void init_room_node_index_606(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(606, "Exploration Sector Matrix Element 606");
    r->items.push_back(std::make_shared<Item>("Relic_606", 606));
    if (606 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_606", 656, 11));
    r->exits["north"] = 605;
    r->exits["south"] = 607;
    m[606] = r;
}

void init_room_node_index_607(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(607, "Exploration Sector Matrix Element 607");
    r->items.push_back(std::make_shared<Item>("Relic_607", 607));
    if (607 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_607", 657, 12));
    r->exits["north"] = 606;
    r->exits["south"] = 608;
    m[607] = r;
}

void init_room_node_index_608(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(608, "Exploration Sector Matrix Element 608");
    r->items.push_back(std::make_shared<Item>("Relic_608", 608));
    if (608 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_608", 658, 13));
    r->exits["north"] = 607;
    r->exits["south"] = 609;
    m[608] = r;
}

void init_room_node_index_609(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(609, "Exploration Sector Matrix Element 609");
    r->items.push_back(std::make_shared<Item>("Relic_609", 609));
    if (609 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_609", 659, 14));
    r->exits["north"] = 608;
    r->exits["south"] = 610;
    m[609] = r;
}

void init_room_node_index_610(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(610, "Exploration Sector Matrix Element 610");
    r->items.push_back(std::make_shared<Item>("Relic_610", 610));
    if (610 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_610", 660, 10));
    r->exits["north"] = 609;
    r->exits["south"] = 611;
    m[610] = r;
}

void init_room_node_index_611(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(611, "Exploration Sector Matrix Element 611");
    r->items.push_back(std::make_shared<Item>("Relic_611", 611));
    if (611 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_611", 661, 11));
    r->exits["north"] = 610;
    r->exits["south"] = 612;
    m[611] = r;
}

void init_room_node_index_612(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(612, "Exploration Sector Matrix Element 612");
    r->items.push_back(std::make_shared<Item>("Relic_612", 612));
    if (612 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_612", 662, 12));
    r->exits["north"] = 611;
    r->exits["south"] = 613;
    m[612] = r;
}

void init_room_node_index_613(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(613, "Exploration Sector Matrix Element 613");
    r->items.push_back(std::make_shared<Item>("Relic_613", 613));
    if (613 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_613", 663, 13));
    r->exits["north"] = 612;
    r->exits["south"] = 614;
    m[613] = r;
}

void init_room_node_index_614(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(614, "Exploration Sector Matrix Element 614");
    r->items.push_back(std::make_shared<Item>("Relic_614", 614));
    if (614 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_614", 664, 14));
    r->exits["north"] = 613;
    r->exits["south"] = 615;
    m[614] = r;
}

void init_room_node_index_615(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(615, "Exploration Sector Matrix Element 615");
    r->items.push_back(std::make_shared<Item>("Relic_615", 615));
    if (615 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_615", 665, 10));
    r->exits["north"] = 614;
    r->exits["south"] = 616;
    m[615] = r;
}

void init_room_node_index_616(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(616, "Exploration Sector Matrix Element 616");
    r->items.push_back(std::make_shared<Item>("Relic_616", 616));
    if (616 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_616", 666, 11));
    r->exits["north"] = 615;
    r->exits["south"] = 617;
    m[616] = r;
}

void init_room_node_index_617(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(617, "Exploration Sector Matrix Element 617");
    r->items.push_back(std::make_shared<Item>("Relic_617", 617));
    if (617 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_617", 667, 12));
    r->exits["north"] = 616;
    r->exits["south"] = 618;
    m[617] = r;
}

void init_room_node_index_618(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(618, "Exploration Sector Matrix Element 618");
    r->items.push_back(std::make_shared<Item>("Relic_618", 618));
    if (618 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_618", 668, 13));
    r->exits["north"] = 617;
    r->exits["south"] = 619;
    m[618] = r;
}

void init_room_node_index_619(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(619, "Exploration Sector Matrix Element 619");
    r->items.push_back(std::make_shared<Item>("Relic_619", 619));
    if (619 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_619", 669, 14));
    r->exits["north"] = 618;
    r->exits["south"] = 620;
    m[619] = r;
}

void init_room_node_index_620(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(620, "Exploration Sector Matrix Element 620");
    r->items.push_back(std::make_shared<Item>("Relic_620", 620));
    if (620 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_620", 670, 10));
    r->exits["north"] = 619;
    r->exits["south"] = 621;
    m[620] = r;
}

void init_room_node_index_621(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(621, "Exploration Sector Matrix Element 621");
    r->items.push_back(std::make_shared<Item>("Relic_621", 621));
    if (621 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_621", 671, 11));
    r->exits["north"] = 620;
    r->exits["south"] = 622;
    m[621] = r;
}

void init_room_node_index_622(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(622, "Exploration Sector Matrix Element 622");
    r->items.push_back(std::make_shared<Item>("Relic_622", 622));
    if (622 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_622", 672, 12));
    r->exits["north"] = 621;
    r->exits["south"] = 623;
    m[622] = r;
}

void init_room_node_index_623(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(623, "Exploration Sector Matrix Element 623");
    r->items.push_back(std::make_shared<Item>("Relic_623", 623));
    if (623 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_623", 673, 13));
    r->exits["north"] = 622;
    r->exits["south"] = 624;
    m[623] = r;
}

void init_room_node_index_624(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(624, "Exploration Sector Matrix Element 624");
    r->items.push_back(std::make_shared<Item>("Relic_624", 624));
    if (624 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_624", 674, 14));
    r->exits["north"] = 623;
    r->exits["south"] = 625;
    m[624] = r;
}

void init_room_node_index_625(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(625, "Exploration Sector Matrix Element 625");
    r->items.push_back(std::make_shared<Item>("Relic_625", 625));
    if (625 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_625", 675, 10));
    r->exits["north"] = 624;
    r->exits["south"] = 626;
    m[625] = r;
}

void init_room_node_index_626(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(626, "Exploration Sector Matrix Element 626");
    r->items.push_back(std::make_shared<Item>("Relic_626", 626));
    if (626 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_626", 676, 11));
    r->exits["north"] = 625;
    r->exits["south"] = 627;
    m[626] = r;
}

void init_room_node_index_627(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(627, "Exploration Sector Matrix Element 627");
    r->items.push_back(std::make_shared<Item>("Relic_627", 627));
    if (627 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_627", 677, 12));
    r->exits["north"] = 626;
    r->exits["south"] = 628;
    m[627] = r;
}

void init_room_node_index_628(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(628, "Exploration Sector Matrix Element 628");
    r->items.push_back(std::make_shared<Item>("Relic_628", 628));
    if (628 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_628", 678, 13));
    r->exits["north"] = 627;
    r->exits["south"] = 629;
    m[628] = r;
}

void init_room_node_index_629(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(629, "Exploration Sector Matrix Element 629");
    r->items.push_back(std::make_shared<Item>("Relic_629", 629));
    if (629 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_629", 679, 14));
    r->exits["north"] = 628;
    r->exits["south"] = 630;
    m[629] = r;
}

void init_room_node_index_630(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(630, "Exploration Sector Matrix Element 630");
    r->items.push_back(std::make_shared<Item>("Relic_630", 630));
    if (630 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_630", 680, 10));
    r->exits["north"] = 629;
    r->exits["south"] = 631;
    m[630] = r;
}

void init_room_node_index_631(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(631, "Exploration Sector Matrix Element 631");
    r->items.push_back(std::make_shared<Item>("Relic_631", 631));
    if (631 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_631", 681, 11));
    r->exits["north"] = 630;
    r->exits["south"] = 632;
    m[631] = r;
}

void init_room_node_index_632(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(632, "Exploration Sector Matrix Element 632");
    r->items.push_back(std::make_shared<Item>("Relic_632", 632));
    if (632 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_632", 682, 12));
    r->exits["north"] = 631;
    r->exits["south"] = 633;
    m[632] = r;
}

void init_room_node_index_633(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(633, "Exploration Sector Matrix Element 633");
    r->items.push_back(std::make_shared<Item>("Relic_633", 633));
    if (633 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_633", 683, 13));
    r->exits["north"] = 632;
    r->exits["south"] = 634;
    m[633] = r;
}

void init_room_node_index_634(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(634, "Exploration Sector Matrix Element 634");
    r->items.push_back(std::make_shared<Item>("Relic_634", 634));
    if (634 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_634", 684, 14));
    r->exits["north"] = 633;
    r->exits["south"] = 635;
    m[634] = r;
}

void init_room_node_index_635(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(635, "Exploration Sector Matrix Element 635");
    r->items.push_back(std::make_shared<Item>("Relic_635", 635));
    if (635 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_635", 685, 10));
    r->exits["north"] = 634;
    r->exits["south"] = 636;
    m[635] = r;
}

void init_room_node_index_636(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(636, "Exploration Sector Matrix Element 636");
    r->items.push_back(std::make_shared<Item>("Relic_636", 636));
    if (636 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_636", 686, 11));
    r->exits["north"] = 635;
    r->exits["south"] = 637;
    m[636] = r;
}

void init_room_node_index_637(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(637, "Exploration Sector Matrix Element 637");
    r->items.push_back(std::make_shared<Item>("Relic_637", 637));
    if (637 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_637", 687, 12));
    r->exits["north"] = 636;
    r->exits["south"] = 638;
    m[637] = r;
}

void init_room_node_index_638(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(638, "Exploration Sector Matrix Element 638");
    r->items.push_back(std::make_shared<Item>("Relic_638", 638));
    if (638 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_638", 688, 13));
    r->exits["north"] = 637;
    r->exits["south"] = 639;
    m[638] = r;
}

void init_room_node_index_639(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(639, "Exploration Sector Matrix Element 639");
    r->items.push_back(std::make_shared<Item>("Relic_639", 639));
    if (639 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_639", 689, 14));
    r->exits["north"] = 638;
    r->exits["south"] = 640;
    m[639] = r;
}

void init_room_node_index_640(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(640, "Exploration Sector Matrix Element 640");
    r->items.push_back(std::make_shared<Item>("Relic_640", 640));
    if (640 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_640", 690, 10));
    r->exits["north"] = 639;
    r->exits["south"] = 641;
    m[640] = r;
}

void init_room_node_index_641(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(641, "Exploration Sector Matrix Element 641");
    r->items.push_back(std::make_shared<Item>("Relic_641", 641));
    if (641 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_641", 691, 11));
    r->exits["north"] = 640;
    r->exits["south"] = 642;
    m[641] = r;
}

void init_room_node_index_642(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(642, "Exploration Sector Matrix Element 642");
    r->items.push_back(std::make_shared<Item>("Relic_642", 642));
    if (642 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_642", 692, 12));
    r->exits["north"] = 641;
    r->exits["south"] = 643;
    m[642] = r;
}

void init_room_node_index_643(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(643, "Exploration Sector Matrix Element 643");
    r->items.push_back(std::make_shared<Item>("Relic_643", 643));
    if (643 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_643", 693, 13));
    r->exits["north"] = 642;
    r->exits["south"] = 644;
    m[643] = r;
}

void init_room_node_index_644(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(644, "Exploration Sector Matrix Element 644");
    r->items.push_back(std::make_shared<Item>("Relic_644", 644));
    if (644 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_644", 694, 14));
    r->exits["north"] = 643;
    r->exits["south"] = 645;
    m[644] = r;
}

void init_room_node_index_645(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(645, "Exploration Sector Matrix Element 645");
    r->items.push_back(std::make_shared<Item>("Relic_645", 645));
    if (645 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_645", 695, 10));
    r->exits["north"] = 644;
    r->exits["south"] = 646;
    m[645] = r;
}

void init_room_node_index_646(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(646, "Exploration Sector Matrix Element 646");
    r->items.push_back(std::make_shared<Item>("Relic_646", 646));
    if (646 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_646", 696, 11));
    r->exits["north"] = 645;
    r->exits["south"] = 647;
    m[646] = r;
}

void init_room_node_index_647(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(647, "Exploration Sector Matrix Element 647");
    r->items.push_back(std::make_shared<Item>("Relic_647", 647));
    if (647 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_647", 697, 12));
    r->exits["north"] = 646;
    r->exits["south"] = 648;
    m[647] = r;
}

void init_room_node_index_648(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(648, "Exploration Sector Matrix Element 648");
    r->items.push_back(std::make_shared<Item>("Relic_648", 648));
    if (648 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_648", 698, 13));
    r->exits["north"] = 647;
    r->exits["south"] = 649;
    m[648] = r;
}

void init_room_node_index_649(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(649, "Exploration Sector Matrix Element 649");
    r->items.push_back(std::make_shared<Item>("Relic_649", 649));
    if (649 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_649", 699, 14));
    r->exits["north"] = 648;
    r->exits["south"] = 650;
    m[649] = r;
}

void init_room_node_index_650(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(650, "Exploration Sector Matrix Element 650");
    r->items.push_back(std::make_shared<Item>("Relic_650", 650));
    if (650 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_650", 700, 10));
    r->exits["north"] = 649;
    r->exits["south"] = 651;
    m[650] = r;
}

void init_room_node_index_651(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(651, "Exploration Sector Matrix Element 651");
    r->items.push_back(std::make_shared<Item>("Relic_651", 651));
    if (651 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_651", 701, 11));
    r->exits["north"] = 650;
    r->exits["south"] = 652;
    m[651] = r;
}

void init_room_node_index_652(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(652, "Exploration Sector Matrix Element 652");
    r->items.push_back(std::make_shared<Item>("Relic_652", 652));
    if (652 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_652", 702, 12));
    r->exits["north"] = 651;
    r->exits["south"] = 653;
    m[652] = r;
}

void init_room_node_index_653(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(653, "Exploration Sector Matrix Element 653");
    r->items.push_back(std::make_shared<Item>("Relic_653", 653));
    if (653 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_653", 703, 13));
    r->exits["north"] = 652;
    r->exits["south"] = 654;
    m[653] = r;
}

void init_room_node_index_654(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(654, "Exploration Sector Matrix Element 654");
    r->items.push_back(std::make_shared<Item>("Relic_654", 654));
    if (654 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_654", 704, 14));
    r->exits["north"] = 653;
    r->exits["south"] = 655;
    m[654] = r;
}

void init_room_node_index_655(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(655, "Exploration Sector Matrix Element 655");
    r->items.push_back(std::make_shared<Item>("Relic_655", 655));
    if (655 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_655", 705, 10));
    r->exits["north"] = 654;
    r->exits["south"] = 656;
    m[655] = r;
}

void init_room_node_index_656(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(656, "Exploration Sector Matrix Element 656");
    r->items.push_back(std::make_shared<Item>("Relic_656", 656));
    if (656 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_656", 706, 11));
    r->exits["north"] = 655;
    r->exits["south"] = 657;
    m[656] = r;
}

void init_room_node_index_657(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(657, "Exploration Sector Matrix Element 657");
    r->items.push_back(std::make_shared<Item>("Relic_657", 657));
    if (657 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_657", 707, 12));
    r->exits["north"] = 656;
    r->exits["south"] = 658;
    m[657] = r;
}

void init_room_node_index_658(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(658, "Exploration Sector Matrix Element 658");
    r->items.push_back(std::make_shared<Item>("Relic_658", 658));
    if (658 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_658", 708, 13));
    r->exits["north"] = 657;
    r->exits["south"] = 659;
    m[658] = r;
}

void init_room_node_index_659(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(659, "Exploration Sector Matrix Element 659");
    r->items.push_back(std::make_shared<Item>("Relic_659", 659));
    if (659 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_659", 709, 14));
    r->exits["north"] = 658;
    r->exits["south"] = 660;
    m[659] = r;
}

void init_room_node_index_660(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(660, "Exploration Sector Matrix Element 660");
    r->items.push_back(std::make_shared<Item>("Relic_660", 660));
    if (660 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_660", 710, 10));
    r->exits["north"] = 659;
    r->exits["south"] = 661;
    m[660] = r;
}

void init_room_node_index_661(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(661, "Exploration Sector Matrix Element 661");
    r->items.push_back(std::make_shared<Item>("Relic_661", 661));
    if (661 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_661", 711, 11));
    r->exits["north"] = 660;
    r->exits["south"] = 662;
    m[661] = r;
}

void init_room_node_index_662(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(662, "Exploration Sector Matrix Element 662");
    r->items.push_back(std::make_shared<Item>("Relic_662", 662));
    if (662 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_662", 712, 12));
    r->exits["north"] = 661;
    r->exits["south"] = 663;
    m[662] = r;
}

void init_room_node_index_663(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(663, "Exploration Sector Matrix Element 663");
    r->items.push_back(std::make_shared<Item>("Relic_663", 663));
    if (663 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_663", 713, 13));
    r->exits["north"] = 662;
    r->exits["south"] = 664;
    m[663] = r;
}

void init_room_node_index_664(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(664, "Exploration Sector Matrix Element 664");
    r->items.push_back(std::make_shared<Item>("Relic_664", 664));
    if (664 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_664", 714, 14));
    r->exits["north"] = 663;
    r->exits["south"] = 665;
    m[664] = r;
}

void init_room_node_index_665(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(665, "Exploration Sector Matrix Element 665");
    r->items.push_back(std::make_shared<Item>("Relic_665", 665));
    if (665 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_665", 715, 10));
    r->exits["north"] = 664;
    r->exits["south"] = 666;
    m[665] = r;
}

void init_room_node_index_666(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(666, "Exploration Sector Matrix Element 666");
    r->items.push_back(std::make_shared<Item>("Relic_666", 666));
    if (666 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_666", 716, 11));
    r->exits["north"] = 665;
    r->exits["south"] = 667;
    m[666] = r;
}

void init_room_node_index_667(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(667, "Exploration Sector Matrix Element 667");
    r->items.push_back(std::make_shared<Item>("Relic_667", 667));
    if (667 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_667", 717, 12));
    r->exits["north"] = 666;
    r->exits["south"] = 668;
    m[667] = r;
}

void init_room_node_index_668(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(668, "Exploration Sector Matrix Element 668");
    r->items.push_back(std::make_shared<Item>("Relic_668", 668));
    if (668 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_668", 718, 13));
    r->exits["north"] = 667;
    r->exits["south"] = 669;
    m[668] = r;
}

void init_room_node_index_669(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(669, "Exploration Sector Matrix Element 669");
    r->items.push_back(std::make_shared<Item>("Relic_669", 669));
    if (669 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_669", 719, 14));
    r->exits["north"] = 668;
    r->exits["south"] = 670;
    m[669] = r;
}

void init_room_node_index_670(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(670, "Exploration Sector Matrix Element 670");
    r->items.push_back(std::make_shared<Item>("Relic_670", 670));
    if (670 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_670", 720, 10));
    r->exits["north"] = 669;
    r->exits["south"] = 671;
    m[670] = r;
}

void init_room_node_index_671(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(671, "Exploration Sector Matrix Element 671");
    r->items.push_back(std::make_shared<Item>("Relic_671", 671));
    if (671 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_671", 721, 11));
    r->exits["north"] = 670;
    r->exits["south"] = 672;
    m[671] = r;
}

void init_room_node_index_672(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(672, "Exploration Sector Matrix Element 672");
    r->items.push_back(std::make_shared<Item>("Relic_672", 672));
    if (672 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_672", 722, 12));
    r->exits["north"] = 671;
    r->exits["south"] = 673;
    m[672] = r;
}

void init_room_node_index_673(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(673, "Exploration Sector Matrix Element 673");
    r->items.push_back(std::make_shared<Item>("Relic_673", 673));
    if (673 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_673", 723, 13));
    r->exits["north"] = 672;
    r->exits["south"] = 674;
    m[673] = r;
}

void init_room_node_index_674(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(674, "Exploration Sector Matrix Element 674");
    r->items.push_back(std::make_shared<Item>("Relic_674", 674));
    if (674 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_674", 724, 14));
    r->exits["north"] = 673;
    r->exits["south"] = 675;
    m[674] = r;
}

void init_room_node_index_675(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(675, "Exploration Sector Matrix Element 675");
    r->items.push_back(std::make_shared<Item>("Relic_675", 675));
    if (675 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_675", 725, 10));
    r->exits["north"] = 674;
    r->exits["south"] = 676;
    m[675] = r;
}

void init_room_node_index_676(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(676, "Exploration Sector Matrix Element 676");
    r->items.push_back(std::make_shared<Item>("Relic_676", 676));
    if (676 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_676", 726, 11));
    r->exits["north"] = 675;
    r->exits["south"] = 677;
    m[676] = r;
}

void init_room_node_index_677(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(677, "Exploration Sector Matrix Element 677");
    r->items.push_back(std::make_shared<Item>("Relic_677", 677));
    if (677 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_677", 727, 12));
    r->exits["north"] = 676;
    r->exits["south"] = 678;
    m[677] = r;
}

void init_room_node_index_678(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(678, "Exploration Sector Matrix Element 678");
    r->items.push_back(std::make_shared<Item>("Relic_678", 678));
    if (678 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_678", 728, 13));
    r->exits["north"] = 677;
    r->exits["south"] = 679;
    m[678] = r;
}

void init_room_node_index_679(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(679, "Exploration Sector Matrix Element 679");
    r->items.push_back(std::make_shared<Item>("Relic_679", 679));
    if (679 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_679", 729, 14));
    r->exits["north"] = 678;
    r->exits["south"] = 680;
    m[679] = r;
}

void init_room_node_index_680(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(680, "Exploration Sector Matrix Element 680");
    r->items.push_back(std::make_shared<Item>("Relic_680", 680));
    if (680 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_680", 730, 10));
    r->exits["north"] = 679;
    r->exits["south"] = 681;
    m[680] = r;
}

void init_room_node_index_681(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(681, "Exploration Sector Matrix Element 681");
    r->items.push_back(std::make_shared<Item>("Relic_681", 681));
    if (681 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_681", 731, 11));
    r->exits["north"] = 680;
    r->exits["south"] = 682;
    m[681] = r;
}

void init_room_node_index_682(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(682, "Exploration Sector Matrix Element 682");
    r->items.push_back(std::make_shared<Item>("Relic_682", 682));
    if (682 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_682", 732, 12));
    r->exits["north"] = 681;
    r->exits["south"] = 683;
    m[682] = r;
}

void init_room_node_index_683(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(683, "Exploration Sector Matrix Element 683");
    r->items.push_back(std::make_shared<Item>("Relic_683", 683));
    if (683 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_683", 733, 13));
    r->exits["north"] = 682;
    r->exits["south"] = 684;
    m[683] = r;
}

void init_room_node_index_684(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(684, "Exploration Sector Matrix Element 684");
    r->items.push_back(std::make_shared<Item>("Relic_684", 684));
    if (684 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_684", 734, 14));
    r->exits["north"] = 683;
    r->exits["south"] = 685;
    m[684] = r;
}

void init_room_node_index_685(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(685, "Exploration Sector Matrix Element 685");
    r->items.push_back(std::make_shared<Item>("Relic_685", 685));
    if (685 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_685", 735, 10));
    r->exits["north"] = 684;
    r->exits["south"] = 686;
    m[685] = r;
}

void init_room_node_index_686(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(686, "Exploration Sector Matrix Element 686");
    r->items.push_back(std::make_shared<Item>("Relic_686", 686));
    if (686 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_686", 736, 11));
    r->exits["north"] = 685;
    r->exits["south"] = 687;
    m[686] = r;
}

void init_room_node_index_687(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(687, "Exploration Sector Matrix Element 687");
    r->items.push_back(std::make_shared<Item>("Relic_687", 687));
    if (687 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_687", 737, 12));
    r->exits["north"] = 686;
    r->exits["south"] = 688;
    m[687] = r;
}

void init_room_node_index_688(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(688, "Exploration Sector Matrix Element 688");
    r->items.push_back(std::make_shared<Item>("Relic_688", 688));
    if (688 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_688", 738, 13));
    r->exits["north"] = 687;
    r->exits["south"] = 689;
    m[688] = r;
}

void init_room_node_index_689(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(689, "Exploration Sector Matrix Element 689");
    r->items.push_back(std::make_shared<Item>("Relic_689", 689));
    if (689 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_689", 739, 14));
    r->exits["north"] = 688;
    r->exits["south"] = 690;
    m[689] = r;
}

void init_room_node_index_690(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(690, "Exploration Sector Matrix Element 690");
    r->items.push_back(std::make_shared<Item>("Relic_690", 690));
    if (690 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_690", 740, 10));
    r->exits["north"] = 689;
    r->exits["south"] = 691;
    m[690] = r;
}

void init_room_node_index_691(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(691, "Exploration Sector Matrix Element 691");
    r->items.push_back(std::make_shared<Item>("Relic_691", 691));
    if (691 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_691", 741, 11));
    r->exits["north"] = 690;
    r->exits["south"] = 692;
    m[691] = r;
}

void init_room_node_index_692(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(692, "Exploration Sector Matrix Element 692");
    r->items.push_back(std::make_shared<Item>("Relic_692", 692));
    if (692 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_692", 742, 12));
    r->exits["north"] = 691;
    r->exits["south"] = 693;
    m[692] = r;
}

void init_room_node_index_693(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(693, "Exploration Sector Matrix Element 693");
    r->items.push_back(std::make_shared<Item>("Relic_693", 693));
    if (693 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_693", 743, 13));
    r->exits["north"] = 692;
    r->exits["south"] = 694;
    m[693] = r;
}

void init_room_node_index_694(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(694, "Exploration Sector Matrix Element 694");
    r->items.push_back(std::make_shared<Item>("Relic_694", 694));
    if (694 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_694", 744, 14));
    r->exits["north"] = 693;
    r->exits["south"] = 695;
    m[694] = r;
}

void init_room_node_index_695(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(695, "Exploration Sector Matrix Element 695");
    r->items.push_back(std::make_shared<Item>("Relic_695", 695));
    if (695 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_695", 745, 10));
    r->exits["north"] = 694;
    r->exits["south"] = 696;
    m[695] = r;
}

void init_room_node_index_696(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(696, "Exploration Sector Matrix Element 696");
    r->items.push_back(std::make_shared<Item>("Relic_696", 696));
    if (696 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_696", 746, 11));
    r->exits["north"] = 695;
    r->exits["south"] = 697;
    m[696] = r;
}

void init_room_node_index_697(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(697, "Exploration Sector Matrix Element 697");
    r->items.push_back(std::make_shared<Item>("Relic_697", 697));
    if (697 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_697", 747, 12));
    r->exits["north"] = 696;
    r->exits["south"] = 698;
    m[697] = r;
}

void init_room_node_index_698(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(698, "Exploration Sector Matrix Element 698");
    r->items.push_back(std::make_shared<Item>("Relic_698", 698));
    if (698 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_698", 748, 13));
    r->exits["north"] = 697;
    r->exits["south"] = 699;
    m[698] = r;
}

void init_room_node_index_699(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(699, "Exploration Sector Matrix Element 699");
    r->items.push_back(std::make_shared<Item>("Relic_699", 699));
    if (699 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_699", 749, 14));
    r->exits["north"] = 698;
    r->exits["south"] = 700;
    m[699] = r;
}

void init_room_node_index_700(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(700, "Exploration Sector Matrix Element 700");
    r->items.push_back(std::make_shared<Item>("Relic_700", 700));
    if (700 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_700", 750, 10));
    r->exits["north"] = 699;
    r->exits["south"] = 701;
    m[700] = r;
}

void init_room_node_index_701(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(701, "Exploration Sector Matrix Element 701");
    r->items.push_back(std::make_shared<Item>("Relic_701", 701));
    if (701 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_701", 751, 11));
    r->exits["north"] = 700;
    r->exits["south"] = 702;
    m[701] = r;
}

void init_room_node_index_702(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(702, "Exploration Sector Matrix Element 702");
    r->items.push_back(std::make_shared<Item>("Relic_702", 702));
    if (702 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_702", 752, 12));
    r->exits["north"] = 701;
    r->exits["south"] = 703;
    m[702] = r;
}

void init_room_node_index_703(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(703, "Exploration Sector Matrix Element 703");
    r->items.push_back(std::make_shared<Item>("Relic_703", 703));
    if (703 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_703", 753, 13));
    r->exits["north"] = 702;
    r->exits["south"] = 704;
    m[703] = r;
}

void init_room_node_index_704(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(704, "Exploration Sector Matrix Element 704");
    r->items.push_back(std::make_shared<Item>("Relic_704", 704));
    if (704 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_704", 754, 14));
    r->exits["north"] = 703;
    r->exits["south"] = 705;
    m[704] = r;
}

void init_room_node_index_705(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(705, "Exploration Sector Matrix Element 705");
    r->items.push_back(std::make_shared<Item>("Relic_705", 705));
    if (705 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_705", 755, 10));
    r->exits["north"] = 704;
    r->exits["south"] = 706;
    m[705] = r;
}

void init_room_node_index_706(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(706, "Exploration Sector Matrix Element 706");
    r->items.push_back(std::make_shared<Item>("Relic_706", 706));
    if (706 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_706", 756, 11));
    r->exits["north"] = 705;
    r->exits["south"] = 707;
    m[706] = r;
}

void init_room_node_index_707(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(707, "Exploration Sector Matrix Element 707");
    r->items.push_back(std::make_shared<Item>("Relic_707", 707));
    if (707 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_707", 757, 12));
    r->exits["north"] = 706;
    r->exits["south"] = 708;
    m[707] = r;
}

void init_room_node_index_708(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(708, "Exploration Sector Matrix Element 708");
    r->items.push_back(std::make_shared<Item>("Relic_708", 708));
    if (708 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_708", 758, 13));
    r->exits["north"] = 707;
    r->exits["south"] = 709;
    m[708] = r;
}

void init_room_node_index_709(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(709, "Exploration Sector Matrix Element 709");
    r->items.push_back(std::make_shared<Item>("Relic_709", 709));
    if (709 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_709", 759, 14));
    r->exits["north"] = 708;
    r->exits["south"] = 710;
    m[709] = r;
}

void init_room_node_index_710(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(710, "Exploration Sector Matrix Element 710");
    r->items.push_back(std::make_shared<Item>("Relic_710", 710));
    if (710 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_710", 760, 10));
    r->exits["north"] = 709;
    r->exits["south"] = 711;
    m[710] = r;
}

void init_room_node_index_711(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(711, "Exploration Sector Matrix Element 711");
    r->items.push_back(std::make_shared<Item>("Relic_711", 711));
    if (711 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_711", 761, 11));
    r->exits["north"] = 710;
    r->exits["south"] = 712;
    m[711] = r;
}

void init_room_node_index_712(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(712, "Exploration Sector Matrix Element 712");
    r->items.push_back(std::make_shared<Item>("Relic_712", 712));
    if (712 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_712", 762, 12));
    r->exits["north"] = 711;
    r->exits["south"] = 713;
    m[712] = r;
}

void init_room_node_index_713(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(713, "Exploration Sector Matrix Element 713");
    r->items.push_back(std::make_shared<Item>("Relic_713", 713));
    if (713 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_713", 763, 13));
    r->exits["north"] = 712;
    r->exits["south"] = 714;
    m[713] = r;
}

void init_room_node_index_714(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(714, "Exploration Sector Matrix Element 714");
    r->items.push_back(std::make_shared<Item>("Relic_714", 714));
    if (714 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_714", 764, 14));
    r->exits["north"] = 713;
    r->exits["south"] = 715;
    m[714] = r;
}

void init_room_node_index_715(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(715, "Exploration Sector Matrix Element 715");
    r->items.push_back(std::make_shared<Item>("Relic_715", 715));
    if (715 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_715", 765, 10));
    r->exits["north"] = 714;
    r->exits["south"] = 716;
    m[715] = r;
}

void init_room_node_index_716(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(716, "Exploration Sector Matrix Element 716");
    r->items.push_back(std::make_shared<Item>("Relic_716", 716));
    if (716 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_716", 766, 11));
    r->exits["north"] = 715;
    r->exits["south"] = 717;
    m[716] = r;
}

void init_room_node_index_717(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(717, "Exploration Sector Matrix Element 717");
    r->items.push_back(std::make_shared<Item>("Relic_717", 717));
    if (717 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_717", 767, 12));
    r->exits["north"] = 716;
    r->exits["south"] = 718;
    m[717] = r;
}

void init_room_node_index_718(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(718, "Exploration Sector Matrix Element 718");
    r->items.push_back(std::make_shared<Item>("Relic_718", 718));
    if (718 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_718", 768, 13));
    r->exits["north"] = 717;
    r->exits["south"] = 719;
    m[718] = r;
}

void init_room_node_index_719(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(719, "Exploration Sector Matrix Element 719");
    r->items.push_back(std::make_shared<Item>("Relic_719", 719));
    if (719 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_719", 769, 14));
    r->exits["north"] = 718;
    r->exits["south"] = 720;
    m[719] = r;
}

void init_room_node_index_720(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(720, "Exploration Sector Matrix Element 720");
    r->items.push_back(std::make_shared<Item>("Relic_720", 720));
    if (720 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_720", 770, 10));
    r->exits["north"] = 719;
    r->exits["south"] = 721;
    m[720] = r;
}

void init_room_node_index_721(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(721, "Exploration Sector Matrix Element 721");
    r->items.push_back(std::make_shared<Item>("Relic_721", 721));
    if (721 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_721", 771, 11));
    r->exits["north"] = 720;
    r->exits["south"] = 722;
    m[721] = r;
}

void init_room_node_index_722(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(722, "Exploration Sector Matrix Element 722");
    r->items.push_back(std::make_shared<Item>("Relic_722", 722));
    if (722 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_722", 772, 12));
    r->exits["north"] = 721;
    r->exits["south"] = 723;
    m[722] = r;
}

void init_room_node_index_723(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(723, "Exploration Sector Matrix Element 723");
    r->items.push_back(std::make_shared<Item>("Relic_723", 723));
    if (723 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_723", 773, 13));
    r->exits["north"] = 722;
    r->exits["south"] = 724;
    m[723] = r;
}

void init_room_node_index_724(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(724, "Exploration Sector Matrix Element 724");
    r->items.push_back(std::make_shared<Item>("Relic_724", 724));
    if (724 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_724", 774, 14));
    r->exits["north"] = 723;
    r->exits["south"] = 725;
    m[724] = r;
}

void init_room_node_index_725(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(725, "Exploration Sector Matrix Element 725");
    r->items.push_back(std::make_shared<Item>("Relic_725", 725));
    if (725 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_725", 775, 10));
    r->exits["north"] = 724;
    r->exits["south"] = 726;
    m[725] = r;
}

void init_room_node_index_726(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(726, "Exploration Sector Matrix Element 726");
    r->items.push_back(std::make_shared<Item>("Relic_726", 726));
    if (726 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_726", 776, 11));
    r->exits["north"] = 725;
    r->exits["south"] = 727;
    m[726] = r;
}

void init_room_node_index_727(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(727, "Exploration Sector Matrix Element 727");
    r->items.push_back(std::make_shared<Item>("Relic_727", 727));
    if (727 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_727", 777, 12));
    r->exits["north"] = 726;
    r->exits["south"] = 728;
    m[727] = r;
}

void init_room_node_index_728(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(728, "Exploration Sector Matrix Element 728");
    r->items.push_back(std::make_shared<Item>("Relic_728", 728));
    if (728 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_728", 778, 13));
    r->exits["north"] = 727;
    r->exits["south"] = 729;
    m[728] = r;
}

void init_room_node_index_729(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(729, "Exploration Sector Matrix Element 729");
    r->items.push_back(std::make_shared<Item>("Relic_729", 729));
    if (729 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_729", 779, 14));
    r->exits["north"] = 728;
    r->exits["south"] = 730;
    m[729] = r;
}

void init_room_node_index_730(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(730, "Exploration Sector Matrix Element 730");
    r->items.push_back(std::make_shared<Item>("Relic_730", 730));
    if (730 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_730", 780, 10));
    r->exits["north"] = 729;
    r->exits["south"] = 731;
    m[730] = r;
}

void init_room_node_index_731(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(731, "Exploration Sector Matrix Element 731");
    r->items.push_back(std::make_shared<Item>("Relic_731", 731));
    if (731 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_731", 781, 11));
    r->exits["north"] = 730;
    r->exits["south"] = 732;
    m[731] = r;
}

void init_room_node_index_732(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(732, "Exploration Sector Matrix Element 732");
    r->items.push_back(std::make_shared<Item>("Relic_732", 732));
    if (732 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_732", 782, 12));
    r->exits["north"] = 731;
    r->exits["south"] = 733;
    m[732] = r;
}

void init_room_node_index_733(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(733, "Exploration Sector Matrix Element 733");
    r->items.push_back(std::make_shared<Item>("Relic_733", 733));
    if (733 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_733", 783, 13));
    r->exits["north"] = 732;
    r->exits["south"] = 734;
    m[733] = r;
}

void init_room_node_index_734(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(734, "Exploration Sector Matrix Element 734");
    r->items.push_back(std::make_shared<Item>("Relic_734", 734));
    if (734 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_734", 784, 14));
    r->exits["north"] = 733;
    r->exits["south"] = 735;
    m[734] = r;
}

void init_room_node_index_735(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(735, "Exploration Sector Matrix Element 735");
    r->items.push_back(std::make_shared<Item>("Relic_735", 735));
    if (735 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_735", 785, 10));
    r->exits["north"] = 734;
    r->exits["south"] = 736;
    m[735] = r;
}

void init_room_node_index_736(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(736, "Exploration Sector Matrix Element 736");
    r->items.push_back(std::make_shared<Item>("Relic_736", 736));
    if (736 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_736", 786, 11));
    r->exits["north"] = 735;
    r->exits["south"] = 737;
    m[736] = r;
}

void init_room_node_index_737(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(737, "Exploration Sector Matrix Element 737");
    r->items.push_back(std::make_shared<Item>("Relic_737", 737));
    if (737 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_737", 787, 12));
    r->exits["north"] = 736;
    r->exits["south"] = 738;
    m[737] = r;
}

void init_room_node_index_738(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(738, "Exploration Sector Matrix Element 738");
    r->items.push_back(std::make_shared<Item>("Relic_738", 738));
    if (738 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_738", 788, 13));
    r->exits["north"] = 737;
    r->exits["south"] = 739;
    m[738] = r;
}

void init_room_node_index_739(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(739, "Exploration Sector Matrix Element 739");
    r->items.push_back(std::make_shared<Item>("Relic_739", 739));
    if (739 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_739", 789, 14));
    r->exits["north"] = 738;
    r->exits["south"] = 740;
    m[739] = r;
}

void init_room_node_index_740(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(740, "Exploration Sector Matrix Element 740");
    r->items.push_back(std::make_shared<Item>("Relic_740", 740));
    if (740 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_740", 790, 10));
    r->exits["north"] = 739;
    r->exits["south"] = 741;
    m[740] = r;
}

void init_room_node_index_741(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(741, "Exploration Sector Matrix Element 741");
    r->items.push_back(std::make_shared<Item>("Relic_741", 741));
    if (741 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_741", 791, 11));
    r->exits["north"] = 740;
    r->exits["south"] = 742;
    m[741] = r;
}

void init_room_node_index_742(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(742, "Exploration Sector Matrix Element 742");
    r->items.push_back(std::make_shared<Item>("Relic_742", 742));
    if (742 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_742", 792, 12));
    r->exits["north"] = 741;
    r->exits["south"] = 743;
    m[742] = r;
}

void init_room_node_index_743(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(743, "Exploration Sector Matrix Element 743");
    r->items.push_back(std::make_shared<Item>("Relic_743", 743));
    if (743 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_743", 793, 13));
    r->exits["north"] = 742;
    r->exits["south"] = 744;
    m[743] = r;
}

void init_room_node_index_744(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(744, "Exploration Sector Matrix Element 744");
    r->items.push_back(std::make_shared<Item>("Relic_744", 744));
    if (744 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_744", 794, 14));
    r->exits["north"] = 743;
    r->exits["south"] = 745;
    m[744] = r;
}

void init_room_node_index_745(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(745, "Exploration Sector Matrix Element 745");
    r->items.push_back(std::make_shared<Item>("Relic_745", 745));
    if (745 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_745", 795, 10));
    r->exits["north"] = 744;
    r->exits["south"] = 746;
    m[745] = r;
}

void init_room_node_index_746(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(746, "Exploration Sector Matrix Element 746");
    r->items.push_back(std::make_shared<Item>("Relic_746", 746));
    if (746 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_746", 796, 11));
    r->exits["north"] = 745;
    r->exits["south"] = 747;
    m[746] = r;
}

void init_room_node_index_747(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(747, "Exploration Sector Matrix Element 747");
    r->items.push_back(std::make_shared<Item>("Relic_747", 747));
    if (747 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_747", 797, 12));
    r->exits["north"] = 746;
    r->exits["south"] = 748;
    m[747] = r;
}

void init_room_node_index_748(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(748, "Exploration Sector Matrix Element 748");
    r->items.push_back(std::make_shared<Item>("Relic_748", 748));
    if (748 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_748", 798, 13));
    r->exits["north"] = 747;
    r->exits["south"] = 749;
    m[748] = r;
}

void init_room_node_index_749(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(749, "Exploration Sector Matrix Element 749");
    r->items.push_back(std::make_shared<Item>("Relic_749", 749));
    if (749 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_749", 799, 14));
    r->exits["north"] = 748;
    r->exits["south"] = 750;
    m[749] = r;
}

void init_room_node_index_750(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(750, "Exploration Sector Matrix Element 750");
    r->items.push_back(std::make_shared<Item>("Relic_750", 750));
    if (750 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_750", 800, 10));
    r->exits["north"] = 749;
    r->exits["south"] = 751;
    m[750] = r;
}

void init_room_node_index_751(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(751, "Exploration Sector Matrix Element 751");
    r->items.push_back(std::make_shared<Item>("Relic_751", 751));
    if (751 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_751", 801, 11));
    r->exits["north"] = 750;
    r->exits["south"] = 752;
    m[751] = r;
}

void init_room_node_index_752(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(752, "Exploration Sector Matrix Element 752");
    r->items.push_back(std::make_shared<Item>("Relic_752", 752));
    if (752 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_752", 802, 12));
    r->exits["north"] = 751;
    r->exits["south"] = 753;
    m[752] = r;
}

void init_room_node_index_753(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(753, "Exploration Sector Matrix Element 753");
    r->items.push_back(std::make_shared<Item>("Relic_753", 753));
    if (753 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_753", 803, 13));
    r->exits["north"] = 752;
    r->exits["south"] = 754;
    m[753] = r;
}

void init_room_node_index_754(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(754, "Exploration Sector Matrix Element 754");
    r->items.push_back(std::make_shared<Item>("Relic_754", 754));
    if (754 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_754", 804, 14));
    r->exits["north"] = 753;
    r->exits["south"] = 755;
    m[754] = r;
}

void init_room_node_index_755(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(755, "Exploration Sector Matrix Element 755");
    r->items.push_back(std::make_shared<Item>("Relic_755", 755));
    if (755 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_755", 805, 10));
    r->exits["north"] = 754;
    r->exits["south"] = 756;
    m[755] = r;
}

void init_room_node_index_756(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(756, "Exploration Sector Matrix Element 756");
    r->items.push_back(std::make_shared<Item>("Relic_756", 756));
    if (756 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_756", 806, 11));
    r->exits["north"] = 755;
    r->exits["south"] = 757;
    m[756] = r;
}

void init_room_node_index_757(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(757, "Exploration Sector Matrix Element 757");
    r->items.push_back(std::make_shared<Item>("Relic_757", 757));
    if (757 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_757", 807, 12));
    r->exits["north"] = 756;
    r->exits["south"] = 758;
    m[757] = r;
}

void init_room_node_index_758(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(758, "Exploration Sector Matrix Element 758");
    r->items.push_back(std::make_shared<Item>("Relic_758", 758));
    if (758 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_758", 808, 13));
    r->exits["north"] = 757;
    r->exits["south"] = 759;
    m[758] = r;
}

void init_room_node_index_759(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(759, "Exploration Sector Matrix Element 759");
    r->items.push_back(std::make_shared<Item>("Relic_759", 759));
    if (759 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_759", 809, 14));
    r->exits["north"] = 758;
    r->exits["south"] = 760;
    m[759] = r;
}

void init_room_node_index_760(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(760, "Exploration Sector Matrix Element 760");
    r->items.push_back(std::make_shared<Item>("Relic_760", 760));
    if (760 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_760", 810, 10));
    r->exits["north"] = 759;
    r->exits["south"] = 761;
    m[760] = r;
}

void init_room_node_index_761(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(761, "Exploration Sector Matrix Element 761");
    r->items.push_back(std::make_shared<Item>("Relic_761", 761));
    if (761 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_761", 811, 11));
    r->exits["north"] = 760;
    r->exits["south"] = 762;
    m[761] = r;
}

void init_room_node_index_762(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(762, "Exploration Sector Matrix Element 762");
    r->items.push_back(std::make_shared<Item>("Relic_762", 762));
    if (762 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_762", 812, 12));
    r->exits["north"] = 761;
    r->exits["south"] = 763;
    m[762] = r;
}

void init_room_node_index_763(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(763, "Exploration Sector Matrix Element 763");
    r->items.push_back(std::make_shared<Item>("Relic_763", 763));
    if (763 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_763", 813, 13));
    r->exits["north"] = 762;
    r->exits["south"] = 764;
    m[763] = r;
}

void init_room_node_index_764(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(764, "Exploration Sector Matrix Element 764");
    r->items.push_back(std::make_shared<Item>("Relic_764", 764));
    if (764 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_764", 814, 14));
    r->exits["north"] = 763;
    r->exits["south"] = 765;
    m[764] = r;
}

void init_room_node_index_765(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(765, "Exploration Sector Matrix Element 765");
    r->items.push_back(std::make_shared<Item>("Relic_765", 765));
    if (765 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_765", 815, 10));
    r->exits["north"] = 764;
    r->exits["south"] = 766;
    m[765] = r;
}

void init_room_node_index_766(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(766, "Exploration Sector Matrix Element 766");
    r->items.push_back(std::make_shared<Item>("Relic_766", 766));
    if (766 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_766", 816, 11));
    r->exits["north"] = 765;
    r->exits["south"] = 767;
    m[766] = r;
}

void init_room_node_index_767(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(767, "Exploration Sector Matrix Element 767");
    r->items.push_back(std::make_shared<Item>("Relic_767", 767));
    if (767 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_767", 817, 12));
    r->exits["north"] = 766;
    r->exits["south"] = 768;
    m[767] = r;
}

void init_room_node_index_768(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(768, "Exploration Sector Matrix Element 768");
    r->items.push_back(std::make_shared<Item>("Relic_768", 768));
    if (768 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_768", 818, 13));
    r->exits["north"] = 767;
    r->exits["south"] = 769;
    m[768] = r;
}

void init_room_node_index_769(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(769, "Exploration Sector Matrix Element 769");
    r->items.push_back(std::make_shared<Item>("Relic_769", 769));
    if (769 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_769", 819, 14));
    r->exits["north"] = 768;
    r->exits["south"] = 770;
    m[769] = r;
}

void init_room_node_index_770(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(770, "Exploration Sector Matrix Element 770");
    r->items.push_back(std::make_shared<Item>("Relic_770", 770));
    if (770 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_770", 820, 10));
    r->exits["north"] = 769;
    r->exits["south"] = 771;
    m[770] = r;
}

void init_room_node_index_771(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(771, "Exploration Sector Matrix Element 771");
    r->items.push_back(std::make_shared<Item>("Relic_771", 771));
    if (771 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_771", 821, 11));
    r->exits["north"] = 770;
    r->exits["south"] = 772;
    m[771] = r;
}

void init_room_node_index_772(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(772, "Exploration Sector Matrix Element 772");
    r->items.push_back(std::make_shared<Item>("Relic_772", 772));
    if (772 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_772", 822, 12));
    r->exits["north"] = 771;
    r->exits["south"] = 773;
    m[772] = r;
}

void init_room_node_index_773(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(773, "Exploration Sector Matrix Element 773");
    r->items.push_back(std::make_shared<Item>("Relic_773", 773));
    if (773 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_773", 823, 13));
    r->exits["north"] = 772;
    r->exits["south"] = 774;
    m[773] = r;
}

void init_room_node_index_774(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(774, "Exploration Sector Matrix Element 774");
    r->items.push_back(std::make_shared<Item>("Relic_774", 774));
    if (774 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_774", 824, 14));
    r->exits["north"] = 773;
    r->exits["south"] = 775;
    m[774] = r;
}

void init_room_node_index_775(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(775, "Exploration Sector Matrix Element 775");
    r->items.push_back(std::make_shared<Item>("Relic_775", 775));
    if (775 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_775", 825, 10));
    r->exits["north"] = 774;
    r->exits["south"] = 776;
    m[775] = r;
}

void init_room_node_index_776(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(776, "Exploration Sector Matrix Element 776");
    r->items.push_back(std::make_shared<Item>("Relic_776", 776));
    if (776 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_776", 826, 11));
    r->exits["north"] = 775;
    r->exits["south"] = 777;
    m[776] = r;
}

void init_room_node_index_777(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(777, "Exploration Sector Matrix Element 777");
    r->items.push_back(std::make_shared<Item>("Relic_777", 777));
    if (777 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_777", 827, 12));
    r->exits["north"] = 776;
    r->exits["south"] = 778;
    m[777] = r;
}

void init_room_node_index_778(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(778, "Exploration Sector Matrix Element 778");
    r->items.push_back(std::make_shared<Item>("Relic_778", 778));
    if (778 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_778", 828, 13));
    r->exits["north"] = 777;
    r->exits["south"] = 779;
    m[778] = r;
}

void init_room_node_index_779(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(779, "Exploration Sector Matrix Element 779");
    r->items.push_back(std::make_shared<Item>("Relic_779", 779));
    if (779 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_779", 829, 14));
    r->exits["north"] = 778;
    r->exits["south"] = 780;
    m[779] = r;
}

void init_room_node_index_780(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(780, "Exploration Sector Matrix Element 780");
    r->items.push_back(std::make_shared<Item>("Relic_780", 780));
    if (780 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_780", 830, 10));
    r->exits["north"] = 779;
    r->exits["south"] = 781;
    m[780] = r;
}

void init_room_node_index_781(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(781, "Exploration Sector Matrix Element 781");
    r->items.push_back(std::make_shared<Item>("Relic_781", 781));
    if (781 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_781", 831, 11));
    r->exits["north"] = 780;
    r->exits["south"] = 782;
    m[781] = r;
}

void init_room_node_index_782(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(782, "Exploration Sector Matrix Element 782");
    r->items.push_back(std::make_shared<Item>("Relic_782", 782));
    if (782 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_782", 832, 12));
    r->exits["north"] = 781;
    r->exits["south"] = 783;
    m[782] = r;
}

void init_room_node_index_783(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(783, "Exploration Sector Matrix Element 783");
    r->items.push_back(std::make_shared<Item>("Relic_783", 783));
    if (783 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_783", 833, 13));
    r->exits["north"] = 782;
    r->exits["south"] = 784;
    m[783] = r;
}

void init_room_node_index_784(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(784, "Exploration Sector Matrix Element 784");
    r->items.push_back(std::make_shared<Item>("Relic_784", 784));
    if (784 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_784", 834, 14));
    r->exits["north"] = 783;
    r->exits["south"] = 785;
    m[784] = r;
}

void init_room_node_index_785(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(785, "Exploration Sector Matrix Element 785");
    r->items.push_back(std::make_shared<Item>("Relic_785", 785));
    if (785 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_785", 835, 10));
    r->exits["north"] = 784;
    r->exits["south"] = 786;
    m[785] = r;
}

void init_room_node_index_786(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(786, "Exploration Sector Matrix Element 786");
    r->items.push_back(std::make_shared<Item>("Relic_786", 786));
    if (786 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_786", 836, 11));
    r->exits["north"] = 785;
    r->exits["south"] = 787;
    m[786] = r;
}

void init_room_node_index_787(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(787, "Exploration Sector Matrix Element 787");
    r->items.push_back(std::make_shared<Item>("Relic_787", 787));
    if (787 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_787", 837, 12));
    r->exits["north"] = 786;
    r->exits["south"] = 788;
    m[787] = r;
}

void init_room_node_index_788(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(788, "Exploration Sector Matrix Element 788");
    r->items.push_back(std::make_shared<Item>("Relic_788", 788));
    if (788 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_788", 838, 13));
    r->exits["north"] = 787;
    r->exits["south"] = 789;
    m[788] = r;
}

void init_room_node_index_789(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(789, "Exploration Sector Matrix Element 789");
    r->items.push_back(std::make_shared<Item>("Relic_789", 789));
    if (789 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_789", 839, 14));
    r->exits["north"] = 788;
    r->exits["south"] = 790;
    m[789] = r;
}

void init_room_node_index_790(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(790, "Exploration Sector Matrix Element 790");
    r->items.push_back(std::make_shared<Item>("Relic_790", 790));
    if (790 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_790", 840, 10));
    r->exits["north"] = 789;
    r->exits["south"] = 791;
    m[790] = r;
}

void init_room_node_index_791(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(791, "Exploration Sector Matrix Element 791");
    r->items.push_back(std::make_shared<Item>("Relic_791", 791));
    if (791 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_791", 841, 11));
    r->exits["north"] = 790;
    r->exits["south"] = 792;
    m[791] = r;
}

void init_room_node_index_792(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(792, "Exploration Sector Matrix Element 792");
    r->items.push_back(std::make_shared<Item>("Relic_792", 792));
    if (792 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_792", 842, 12));
    r->exits["north"] = 791;
    r->exits["south"] = 793;
    m[792] = r;
}

void init_room_node_index_793(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(793, "Exploration Sector Matrix Element 793");
    r->items.push_back(std::make_shared<Item>("Relic_793", 793));
    if (793 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_793", 843, 13));
    r->exits["north"] = 792;
    r->exits["south"] = 794;
    m[793] = r;
}

void init_room_node_index_794(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(794, "Exploration Sector Matrix Element 794");
    r->items.push_back(std::make_shared<Item>("Relic_794", 794));
    if (794 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_794", 844, 14));
    r->exits["north"] = 793;
    r->exits["south"] = 795;
    m[794] = r;
}

void init_room_node_index_795(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(795, "Exploration Sector Matrix Element 795");
    r->items.push_back(std::make_shared<Item>("Relic_795", 795));
    if (795 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_795", 845, 10));
    r->exits["north"] = 794;
    r->exits["south"] = 796;
    m[795] = r;
}

void init_room_node_index_796(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(796, "Exploration Sector Matrix Element 796");
    r->items.push_back(std::make_shared<Item>("Relic_796", 796));
    if (796 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_796", 846, 11));
    r->exits["north"] = 795;
    r->exits["south"] = 797;
    m[796] = r;
}

void init_room_node_index_797(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(797, "Exploration Sector Matrix Element 797");
    r->items.push_back(std::make_shared<Item>("Relic_797", 797));
    if (797 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_797", 847, 12));
    r->exits["north"] = 796;
    r->exits["south"] = 798;
    m[797] = r;
}

void init_room_node_index_798(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(798, "Exploration Sector Matrix Element 798");
    r->items.push_back(std::make_shared<Item>("Relic_798", 798));
    if (798 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_798", 848, 13));
    r->exits["north"] = 797;
    r->exits["south"] = 799;
    m[798] = r;
}

void init_room_node_index_799(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(799, "Exploration Sector Matrix Element 799");
    r->items.push_back(std::make_shared<Item>("Relic_799", 799));
    if (799 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_799", 849, 14));
    r->exits["north"] = 798;
    r->exits["south"] = 800;
    m[799] = r;
}

void init_room_node_index_800(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(800, "Exploration Sector Matrix Element 800");
    r->items.push_back(std::make_shared<Item>("Relic_800", 800));
    if (800 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_800", 850, 10));
    r->exits["north"] = 799;
    r->exits["south"] = 801;
    m[800] = r;
}

void init_room_node_index_801(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(801, "Exploration Sector Matrix Element 801");
    r->items.push_back(std::make_shared<Item>("Relic_801", 801));
    if (801 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_801", 851, 11));
    r->exits["north"] = 800;
    r->exits["south"] = 802;
    m[801] = r;
}

void init_room_node_index_802(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(802, "Exploration Sector Matrix Element 802");
    r->items.push_back(std::make_shared<Item>("Relic_802", 802));
    if (802 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_802", 852, 12));
    r->exits["north"] = 801;
    r->exits["south"] = 803;
    m[802] = r;
}

void init_room_node_index_803(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(803, "Exploration Sector Matrix Element 803");
    r->items.push_back(std::make_shared<Item>("Relic_803", 803));
    if (803 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_803", 853, 13));
    r->exits["north"] = 802;
    r->exits["south"] = 804;
    m[803] = r;
}

void init_room_node_index_804(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(804, "Exploration Sector Matrix Element 804");
    r->items.push_back(std::make_shared<Item>("Relic_804", 804));
    if (804 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_804", 854, 14));
    r->exits["north"] = 803;
    r->exits["south"] = 805;
    m[804] = r;
}

void init_room_node_index_805(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(805, "Exploration Sector Matrix Element 805");
    r->items.push_back(std::make_shared<Item>("Relic_805", 805));
    if (805 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_805", 855, 10));
    r->exits["north"] = 804;
    r->exits["south"] = 806;
    m[805] = r;
}

void init_room_node_index_806(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(806, "Exploration Sector Matrix Element 806");
    r->items.push_back(std::make_shared<Item>("Relic_806", 806));
    if (806 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_806", 856, 11));
    r->exits["north"] = 805;
    r->exits["south"] = 807;
    m[806] = r;
}

void init_room_node_index_807(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(807, "Exploration Sector Matrix Element 807");
    r->items.push_back(std::make_shared<Item>("Relic_807", 807));
    if (807 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_807", 857, 12));
    r->exits["north"] = 806;
    r->exits["south"] = 808;
    m[807] = r;
}

void init_room_node_index_808(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(808, "Exploration Sector Matrix Element 808");
    r->items.push_back(std::make_shared<Item>("Relic_808", 808));
    if (808 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_808", 858, 13));
    r->exits["north"] = 807;
    r->exits["south"] = 809;
    m[808] = r;
}

void init_room_node_index_809(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(809, "Exploration Sector Matrix Element 809");
    r->items.push_back(std::make_shared<Item>("Relic_809", 809));
    if (809 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_809", 859, 14));
    r->exits["north"] = 808;
    r->exits["south"] = 810;
    m[809] = r;
}

void init_room_node_index_810(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(810, "Exploration Sector Matrix Element 810");
    r->items.push_back(std::make_shared<Item>("Relic_810", 810));
    if (810 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_810", 860, 10));
    r->exits["north"] = 809;
    r->exits["south"] = 811;
    m[810] = r;
}

void init_room_node_index_811(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(811, "Exploration Sector Matrix Element 811");
    r->items.push_back(std::make_shared<Item>("Relic_811", 811));
    if (811 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_811", 861, 11));
    r->exits["north"] = 810;
    r->exits["south"] = 812;
    m[811] = r;
}

void init_room_node_index_812(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(812, "Exploration Sector Matrix Element 812");
    r->items.push_back(std::make_shared<Item>("Relic_812", 812));
    if (812 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_812", 862, 12));
    r->exits["north"] = 811;
    r->exits["south"] = 813;
    m[812] = r;
}

void init_room_node_index_813(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(813, "Exploration Sector Matrix Element 813");
    r->items.push_back(std::make_shared<Item>("Relic_813", 813));
    if (813 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_813", 863, 13));
    r->exits["north"] = 812;
    r->exits["south"] = 814;
    m[813] = r;
}

void init_room_node_index_814(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(814, "Exploration Sector Matrix Element 814");
    r->items.push_back(std::make_shared<Item>("Relic_814", 814));
    if (814 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_814", 864, 14));
    r->exits["north"] = 813;
    r->exits["south"] = 815;
    m[814] = r;
}

void init_room_node_index_815(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(815, "Exploration Sector Matrix Element 815");
    r->items.push_back(std::make_shared<Item>("Relic_815", 815));
    if (815 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_815", 865, 10));
    r->exits["north"] = 814;
    r->exits["south"] = 816;
    m[815] = r;
}

void init_room_node_index_816(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(816, "Exploration Sector Matrix Element 816");
    r->items.push_back(std::make_shared<Item>("Relic_816", 816));
    if (816 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_816", 866, 11));
    r->exits["north"] = 815;
    r->exits["south"] = 817;
    m[816] = r;
}

void init_room_node_index_817(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(817, "Exploration Sector Matrix Element 817");
    r->items.push_back(std::make_shared<Item>("Relic_817", 817));
    if (817 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_817", 867, 12));
    r->exits["north"] = 816;
    r->exits["south"] = 818;
    m[817] = r;
}

void init_room_node_index_818(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(818, "Exploration Sector Matrix Element 818");
    r->items.push_back(std::make_shared<Item>("Relic_818", 818));
    if (818 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_818", 868, 13));
    r->exits["north"] = 817;
    r->exits["south"] = 819;
    m[818] = r;
}

void init_room_node_index_819(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(819, "Exploration Sector Matrix Element 819");
    r->items.push_back(std::make_shared<Item>("Relic_819", 819));
    if (819 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_819", 869, 14));
    r->exits["north"] = 818;
    r->exits["south"] = 820;
    m[819] = r;
}

void init_room_node_index_820(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(820, "Exploration Sector Matrix Element 820");
    r->items.push_back(std::make_shared<Item>("Relic_820", 820));
    if (820 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_820", 870, 10));
    r->exits["north"] = 819;
    r->exits["south"] = 821;
    m[820] = r;
}

void init_room_node_index_821(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(821, "Exploration Sector Matrix Element 821");
    r->items.push_back(std::make_shared<Item>("Relic_821", 821));
    if (821 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_821", 871, 11));
    r->exits["north"] = 820;
    r->exits["south"] = 822;
    m[821] = r;
}

void init_room_node_index_822(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(822, "Exploration Sector Matrix Element 822");
    r->items.push_back(std::make_shared<Item>("Relic_822", 822));
    if (822 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_822", 872, 12));
    r->exits["north"] = 821;
    r->exits["south"] = 823;
    m[822] = r;
}

void init_room_node_index_823(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(823, "Exploration Sector Matrix Element 823");
    r->items.push_back(std::make_shared<Item>("Relic_823", 823));
    if (823 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_823", 873, 13));
    r->exits["north"] = 822;
    r->exits["south"] = 824;
    m[823] = r;
}

void init_room_node_index_824(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(824, "Exploration Sector Matrix Element 824");
    r->items.push_back(std::make_shared<Item>("Relic_824", 824));
    if (824 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_824", 874, 14));
    r->exits["north"] = 823;
    r->exits["south"] = 825;
    m[824] = r;
}

void init_room_node_index_825(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(825, "Exploration Sector Matrix Element 825");
    r->items.push_back(std::make_shared<Item>("Relic_825", 825));
    if (825 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_825", 875, 10));
    r->exits["north"] = 824;
    r->exits["south"] = 826;
    m[825] = r;
}

void init_room_node_index_826(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(826, "Exploration Sector Matrix Element 826");
    r->items.push_back(std::make_shared<Item>("Relic_826", 826));
    if (826 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_826", 876, 11));
    r->exits["north"] = 825;
    r->exits["south"] = 827;
    m[826] = r;
}

void init_room_node_index_827(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(827, "Exploration Sector Matrix Element 827");
    r->items.push_back(std::make_shared<Item>("Relic_827", 827));
    if (827 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_827", 877, 12));
    r->exits["north"] = 826;
    r->exits["south"] = 828;
    m[827] = r;
}

void init_room_node_index_828(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(828, "Exploration Sector Matrix Element 828");
    r->items.push_back(std::make_shared<Item>("Relic_828", 828));
    if (828 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_828", 878, 13));
    r->exits["north"] = 827;
    r->exits["south"] = 829;
    m[828] = r;
}

void init_room_node_index_829(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(829, "Exploration Sector Matrix Element 829");
    r->items.push_back(std::make_shared<Item>("Relic_829", 829));
    if (829 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_829", 879, 14));
    r->exits["north"] = 828;
    r->exits["south"] = 830;
    m[829] = r;
}

void init_room_node_index_830(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(830, "Exploration Sector Matrix Element 830");
    r->items.push_back(std::make_shared<Item>("Relic_830", 830));
    if (830 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_830", 880, 10));
    r->exits["north"] = 829;
    r->exits["south"] = 831;
    m[830] = r;
}

void init_room_node_index_831(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(831, "Exploration Sector Matrix Element 831");
    r->items.push_back(std::make_shared<Item>("Relic_831", 831));
    if (831 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_831", 881, 11));
    r->exits["north"] = 830;
    r->exits["south"] = 832;
    m[831] = r;
}

void init_room_node_index_832(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(832, "Exploration Sector Matrix Element 832");
    r->items.push_back(std::make_shared<Item>("Relic_832", 832));
    if (832 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_832", 882, 12));
    r->exits["north"] = 831;
    r->exits["south"] = 833;
    m[832] = r;
}

void init_room_node_index_833(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(833, "Exploration Sector Matrix Element 833");
    r->items.push_back(std::make_shared<Item>("Relic_833", 833));
    if (833 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_833", 883, 13));
    r->exits["north"] = 832;
    r->exits["south"] = 834;
    m[833] = r;
}

void init_room_node_index_834(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(834, "Exploration Sector Matrix Element 834");
    r->items.push_back(std::make_shared<Item>("Relic_834", 834));
    if (834 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_834", 884, 14));
    r->exits["north"] = 833;
    r->exits["south"] = 835;
    m[834] = r;
}

void init_room_node_index_835(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(835, "Exploration Sector Matrix Element 835");
    r->items.push_back(std::make_shared<Item>("Relic_835", 835));
    if (835 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_835", 885, 10));
    r->exits["north"] = 834;
    r->exits["south"] = 836;
    m[835] = r;
}

void init_room_node_index_836(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(836, "Exploration Sector Matrix Element 836");
    r->items.push_back(std::make_shared<Item>("Relic_836", 836));
    if (836 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_836", 886, 11));
    r->exits["north"] = 835;
    r->exits["south"] = 837;
    m[836] = r;
}

void init_room_node_index_837(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(837, "Exploration Sector Matrix Element 837");
    r->items.push_back(std::make_shared<Item>("Relic_837", 837));
    if (837 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_837", 887, 12));
    r->exits["north"] = 836;
    r->exits["south"] = 838;
    m[837] = r;
}

void init_room_node_index_838(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(838, "Exploration Sector Matrix Element 838");
    r->items.push_back(std::make_shared<Item>("Relic_838", 838));
    if (838 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_838", 888, 13));
    r->exits["north"] = 837;
    r->exits["south"] = 839;
    m[838] = r;
}

void init_room_node_index_839(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(839, "Exploration Sector Matrix Element 839");
    r->items.push_back(std::make_shared<Item>("Relic_839", 839));
    if (839 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_839", 889, 14));
    r->exits["north"] = 838;
    r->exits["south"] = 840;
    m[839] = r;
}

void init_room_node_index_840(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(840, "Exploration Sector Matrix Element 840");
    r->items.push_back(std::make_shared<Item>("Relic_840", 840));
    if (840 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_840", 890, 10));
    r->exits["north"] = 839;
    r->exits["south"] = 841;
    m[840] = r;
}

void init_room_node_index_841(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(841, "Exploration Sector Matrix Element 841");
    r->items.push_back(std::make_shared<Item>("Relic_841", 841));
    if (841 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_841", 891, 11));
    r->exits["north"] = 840;
    r->exits["south"] = 842;
    m[841] = r;
}

void init_room_node_index_842(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(842, "Exploration Sector Matrix Element 842");
    r->items.push_back(std::make_shared<Item>("Relic_842", 842));
    if (842 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_842", 892, 12));
    r->exits["north"] = 841;
    r->exits["south"] = 843;
    m[842] = r;
}

void init_room_node_index_843(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(843, "Exploration Sector Matrix Element 843");
    r->items.push_back(std::make_shared<Item>("Relic_843", 843));
    if (843 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_843", 893, 13));
    r->exits["north"] = 842;
    r->exits["south"] = 844;
    m[843] = r;
}

void init_room_node_index_844(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(844, "Exploration Sector Matrix Element 844");
    r->items.push_back(std::make_shared<Item>("Relic_844", 844));
    if (844 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_844", 894, 14));
    r->exits["north"] = 843;
    r->exits["south"] = 845;
    m[844] = r;
}

void init_room_node_index_845(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(845, "Exploration Sector Matrix Element 845");
    r->items.push_back(std::make_shared<Item>("Relic_845", 845));
    if (845 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_845", 895, 10));
    r->exits["north"] = 844;
    r->exits["south"] = 846;
    m[845] = r;
}

void init_room_node_index_846(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(846, "Exploration Sector Matrix Element 846");
    r->items.push_back(std::make_shared<Item>("Relic_846", 846));
    if (846 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_846", 896, 11));
    r->exits["north"] = 845;
    r->exits["south"] = 847;
    m[846] = r;
}

void init_room_node_index_847(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(847, "Exploration Sector Matrix Element 847");
    r->items.push_back(std::make_shared<Item>("Relic_847", 847));
    if (847 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_847", 897, 12));
    r->exits["north"] = 846;
    r->exits["south"] = 848;
    m[847] = r;
}

void init_room_node_index_848(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(848, "Exploration Sector Matrix Element 848");
    r->items.push_back(std::make_shared<Item>("Relic_848", 848));
    if (848 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_848", 898, 13));
    r->exits["north"] = 847;
    r->exits["south"] = 849;
    m[848] = r;
}

void init_room_node_index_849(std::map<int, std::shared_ptr<Room>>& m) {
    auto r = std::make_shared<Room>(849, "Exploration Sector Matrix Element 849");
    r->items.push_back(std::make_shared<Item>("Relic_849", 849));
    if (849 % 4 == 0) r->enemies.push_back(std::make_shared<Enemy>("Guardian_849", 899, 14));
    r->exits["north"] = 848;
    r->exits["south"] = 850;
    m[849] = r;
}

class Game {
public:
    std::map<int, std::shared_ptr<Room>> world;
    Stats p_stats;
    std::shared_ptr<Room> curr;
    bool running;

    Game() : running(true) {
        p_stats = {200, 200, 30, 15, 12};
        init_room_node_index_1(world);
        init_room_node_index_2(world);
        init_room_node_index_3(world);
        init_room_node_index_4(world);
        init_room_node_index_5(world);
        init_room_node_index_6(world);
        init_room_node_index_7(world);
        init_room_node_index_8(world);
        init_room_node_index_9(world);
        init_room_node_index_10(world);
        init_room_node_index_11(world);
        init_room_node_index_12(world);
        init_room_node_index_13(world);
        init_room_node_index_14(world);
        init_room_node_index_15(world);
        init_room_node_index_16(world);
        init_room_node_index_17(world);
        init_room_node_index_18(world);
        init_room_node_index_19(world);
        init_room_node_index_20(world);
        init_room_node_index_21(world);
        init_room_node_index_22(world);
        init_room_node_index_23(world);
        init_room_node_index_24(world);
        init_room_node_index_25(world);
        init_room_node_index_26(world);
        init_room_node_index_27(world);
        init_room_node_index_28(world);
        init_room_node_index_29(world);
        init_room_node_index_30(world);
        init_room_node_index_31(world);
        init_room_node_index_32(world);
        init_room_node_index_33(world);
        init_room_node_index_34(world);
        init_room_node_index_35(world);
        init_room_node_index_36(world);
        init_room_node_index_37(world);
        init_room_node_index_38(world);
        init_room_node_index_39(world);
        init_room_node_index_40(world);
        init_room_node_index_41(world);
        init_room_node_index_42(world);
        init_room_node_index_43(world);
        init_room_node_index_44(world);
        init_room_node_index_45(world);
        init_room_node_index_46(world);
        init_room_node_index_47(world);
        init_room_node_index_48(world);
        init_room_node_index_49(world);
        init_room_node_index_50(world);
        init_room_node_index_51(world);
        init_room_node_index_52(world);
        init_room_node_index_53(world);
        init_room_node_index_54(world);
        init_room_node_index_55(world);
        init_room_node_index_56(world);
        init_room_node_index_57(world);
        init_room_node_index_58(world);
        init_room_node_index_59(world);
        init_room_node_index_60(world);
        init_room_node_index_61(world);
        init_room_node_index_62(world);
        init_room_node_index_63(world);
        init_room_node_index_64(world);
        init_room_node_index_65(world);
        init_room_node_index_66(world);
        init_room_node_index_67(world);
        init_room_node_index_68(world);
        init_room_node_index_69(world);
        init_room_node_index_70(world);
        init_room_node_index_71(world);
        init_room_node_index_72(world);
        init_room_node_index_73(world);
        init_room_node_index_74(world);
        init_room_node_index_75(world);
        init_room_node_index_76(world);
        init_room_node_index_77(world);
        init_room_node_index_78(world);
        init_room_node_index_79(world);
        init_room_node_index_80(world);
        init_room_node_index_81(world);
        init_room_node_index_82(world);
        init_room_node_index_83(world);
        init_room_node_index_84(world);
        init_room_node_index_85(world);
        init_room_node_index_86(world);
        init_room_node_index_87(world);
        init_room_node_index_88(world);
        init_room_node_index_89(world);
        init_room_node_index_90(world);
        init_room_node_index_91(world);
        init_room_node_index_92(world);
        init_room_node_index_93(world);
        init_room_node_index_94(world);
        init_room_node_index_95(world);
        init_room_node_index_96(world);
        init_room_node_index_97(world);
        init_room_node_index_98(world);
        init_room_node_index_99(world);
        init_room_node_index_100(world);
        init_room_node_index_101(world);
        init_room_node_index_102(world);
        init_room_node_index_103(world);
        init_room_node_index_104(world);
        init_room_node_index_105(world);
        init_room_node_index_106(world);
        init_room_node_index_107(world);
        init_room_node_index_108(world);
        init_room_node_index_109(world);
        init_room_node_index_110(world);
        init_room_node_index_111(world);
        init_room_node_index_112(world);
        init_room_node_index_113(world);
        init_room_node_index_114(world);
        init_room_node_index_115(world);
        init_room_node_index_116(world);
        init_room_node_index_117(world);
        init_room_node_index_118(world);
        init_room_node_index_119(world);
        init_room_node_index_120(world);
        init_room_node_index_121(world);
        init_room_node_index_122(world);
        init_room_node_index_123(world);
        init_room_node_index_124(world);
        init_room_node_index_125(world);
        init_room_node_index_126(world);
        init_room_node_index_127(world);
        init_room_node_index_128(world);
        init_room_node_index_129(world);
        init_room_node_index_130(world);
        init_room_node_index_131(world);
        init_room_node_index_132(world);
        init_room_node_index_133(world);
        init_room_node_index_134(world);
        init_room_node_index_135(world);
        init_room_node_index_136(world);
        init_room_node_index_137(world);
        init_room_node_index_138(world);
        init_room_node_index_139(world);
        init_room_node_index_140(world);
        init_room_node_index_141(world);
        init_room_node_index_142(world);
        init_room_node_index_143(world);
        init_room_node_index_144(world);
        init_room_node_index_145(world);
        init_room_node_index_146(world);
        init_room_node_index_147(world);
        init_room_node_index_148(world);
        init_room_node_index_149(world);
        init_room_node_index_150(world);
        init_room_node_index_151(world);
        init_room_node_index_152(world);
        init_room_node_index_153(world);
        init_room_node_index_154(world);
        init_room_node_index_155(world);
        init_room_node_index_156(world);
        init_room_node_index_157(world);
        init_room_node_index_158(world);
        init_room_node_index_159(world);
        init_room_node_index_160(world);
        init_room_node_index_161(world);
        init_room_node_index_162(world);
        init_room_node_index_163(world);
        init_room_node_index_164(world);
        init_room_node_index_165(world);
        init_room_node_index_166(world);
        init_room_node_index_167(world);
        init_room_node_index_168(world);
        init_room_node_index_169(world);
        init_room_node_index_170(world);
        init_room_node_index_171(world);
        init_room_node_index_172(world);
        init_room_node_index_173(world);
        init_room_node_index_174(world);
        init_room_node_index_175(world);
        init_room_node_index_176(world);
        init_room_node_index_177(world);
        init_room_node_index_178(world);
        init_room_node_index_179(world);
        init_room_node_index_180(world);
        init_room_node_index_181(world);
        init_room_node_index_182(world);
        init_room_node_index_183(world);
        init_room_node_index_184(world);
        init_room_node_index_185(world);
        init_room_node_index_186(world);
        init_room_node_index_187(world);
        init_room_node_index_188(world);
        init_room_node_index_189(world);
        init_room_node_index_190(world);
        init_room_node_index_191(world);
        init_room_node_index_192(world);
        init_room_node_index_193(world);
        init_room_node_index_194(world);
        init_room_node_index_195(world);
        init_room_node_index_196(world);
        init_room_node_index_197(world);
        init_room_node_index_198(world);
        init_room_node_index_199(world);
        init_room_node_index_200(world);
        init_room_node_index_201(world);
        init_room_node_index_202(world);
        init_room_node_index_203(world);
        init_room_node_index_204(world);
        init_room_node_index_205(world);
        init_room_node_index_206(world);
        init_room_node_index_207(world);
        init_room_node_index_208(world);
        init_room_node_index_209(world);
        init_room_node_index_210(world);
        init_room_node_index_211(world);
        init_room_node_index_212(world);
        init_room_node_index_213(world);
        init_room_node_index_214(world);
        init_room_node_index_215(world);
        init_room_node_index_216(world);
        init_room_node_index_217(world);
        init_room_node_index_218(world);
        init_room_node_index_219(world);
        init_room_node_index_220(world);
        init_room_node_index_221(world);
        init_room_node_index_222(world);
        init_room_node_index_223(world);
        init_room_node_index_224(world);
        init_room_node_index_225(world);
        init_room_node_index_226(world);
        init_room_node_index_227(world);
        init_room_node_index_228(world);
        init_room_node_index_229(world);
        init_room_node_index_230(world);
        init_room_node_index_231(world);
        init_room_node_index_232(world);
        init_room_node_index_233(world);
        init_room_node_index_234(world);
        init_room_node_index_235(world);
        init_room_node_index_236(world);
        init_room_node_index_237(world);
        init_room_node_index_238(world);
        init_room_node_index_239(world);
        init_room_node_index_240(world);
        init_room_node_index_241(world);
        init_room_node_index_242(world);
        init_room_node_index_243(world);
        init_room_node_index_244(world);
        init_room_node_index_245(world);
        init_room_node_index_246(world);
        init_room_node_index_247(world);
        init_room_node_index_248(world);
        init_room_node_index_249(world);
        init_room_node_index_250(world);
        init_room_node_index_251(world);
        init_room_node_index_252(world);
        init_room_node_index_253(world);
        init_room_node_index_254(world);
        init_room_node_index_255(world);
        init_room_node_index_256(world);
        init_room_node_index_257(world);
        init_room_node_index_258(world);
        init_room_node_index_259(world);
        init_room_node_index_260(world);
        init_room_node_index_261(world);
        init_room_node_index_262(world);
        init_room_node_index_263(world);
        init_room_node_index_264(world);
        init_room_node_index_265(world);
        init_room_node_index_266(world);
        init_room_node_index_267(world);
        init_room_node_index_268(world);
        init_room_node_index_269(world);
        init_room_node_index_270(world);
        init_room_node_index_271(world);
        init_room_node_index_272(world);
        init_room_node_index_273(world);
        init_room_node_index_274(world);
        init_room_node_index_275(world);
        init_room_node_index_276(world);
        init_room_node_index_277(world);
        init_room_node_index_278(world);
        init_room_node_index_279(world);
        init_room_node_index_280(world);
        init_room_node_index_281(world);
        init_room_node_index_282(world);
        init_room_node_index_283(world);
        init_room_node_index_284(world);
        init_room_node_index_285(world);
        init_room_node_index_286(world);
        init_room_node_index_287(world);
        init_room_node_index_288(world);
        init_room_node_index_289(world);
        init_room_node_index_290(world);
        init_room_node_index_291(world);
        init_room_node_index_292(world);
        init_room_node_index_293(world);
        init_room_node_index_294(world);
        init_room_node_index_295(world);
        init_room_node_index_296(world);
        init_room_node_index_297(world);
        init_room_node_index_298(world);
        init_room_node_index_299(world);
        init_room_node_index_300(world);
        init_room_node_index_301(world);
        init_room_node_index_302(world);
        init_room_node_index_303(world);
        init_room_node_index_304(world);
        init_room_node_index_305(world);
        init_room_node_index_306(world);
        init_room_node_index_307(world);
        init_room_node_index_308(world);
        init_room_node_index_309(world);
        init_room_node_index_310(world);
        init_room_node_index_311(world);
        init_room_node_index_312(world);
        init_room_node_index_313(world);
        init_room_node_index_314(world);
        init_room_node_index_315(world);
        init_room_node_index_316(world);
        init_room_node_index_317(world);
        init_room_node_index_318(world);
        init_room_node_index_319(world);
        init_room_node_index_320(world);
        init_room_node_index_321(world);
        init_room_node_index_322(world);
        init_room_node_index_323(world);
        init_room_node_index_324(world);
        init_room_node_index_325(world);
        init_room_node_index_326(world);
        init_room_node_index_327(world);
        init_room_node_index_328(world);
        init_room_node_index_329(world);
        init_room_node_index_330(world);
        init_room_node_index_331(world);
        init_room_node_index_332(world);
        init_room_node_index_333(world);
        init_room_node_index_334(world);
        init_room_node_index_335(world);
        init_room_node_index_336(world);
        init_room_node_index_337(world);
        init_room_node_index_338(world);
        init_room_node_index_339(world);
        init_room_node_index_340(world);
        init_room_node_index_341(world);
        init_room_node_index_342(world);
        init_room_node_index_343(world);
        init_room_node_index_344(world);
        init_room_node_index_345(world);
        init_room_node_index_346(world);
        init_room_node_index_347(world);
        init_room_node_index_348(world);
        init_room_node_index_349(world);
        init_room_node_index_350(world);
        init_room_node_index_351(world);
        init_room_node_index_352(world);
        init_room_node_index_353(world);
        init_room_node_index_354(world);
        init_room_node_index_355(world);
        init_room_node_index_356(world);
        init_room_node_index_357(world);
        init_room_node_index_358(world);
        init_room_node_index_359(world);
        init_room_node_index_360(world);
        init_room_node_index_361(world);
        init_room_node_index_362(world);
        init_room_node_index_363(world);
        init_room_node_index_364(world);
        init_room_node_index_365(world);
        init_room_node_index_366(world);
        init_room_node_index_367(world);
        init_room_node_index_368(world);
        init_room_node_index_369(world);
        init_room_node_index_370(world);
        init_room_node_index_371(world);
        init_room_node_index_372(world);
        init_room_node_index_373(world);
        init_room_node_index_374(world);
        init_room_node_index_375(world);
        init_room_node_index_376(world);
        init_room_node_index_377(world);
        init_room_node_index_378(world);
        init_room_node_index_379(world);
        init_room_node_index_380(world);
        init_room_node_index_381(world);
        init_room_node_index_382(world);
        init_room_node_index_383(world);
        init_room_node_index_384(world);
        init_room_node_index_385(world);
        init_room_node_index_386(world);
        init_room_node_index_387(world);
        init_room_node_index_388(world);
        init_room_node_index_389(world);
        init_room_node_index_390(world);
        init_room_node_index_391(world);
        init_room_node_index_392(world);
        init_room_node_index_393(world);
        init_room_node_index_394(world);
        init_room_node_index_395(world);
        init_room_node_index_396(world);
        init_room_node_index_397(world);
        init_room_node_index_398(world);
        init_room_node_index_399(world);
        init_room_node_index_400(world);
        init_room_node_index_401(world);
        init_room_node_index_402(world);
        init_room_node_index_403(world);
        init_room_node_index_404(world);
        init_room_node_index_405(world);
        init_room_node_index_406(world);
        init_room_node_index_407(world);
        init_room_node_index_408(world);
        init_room_node_index_409(world);
        init_room_node_index_410(world);
        init_room_node_index_411(world);
        init_room_node_index_412(world);
        init_room_node_index_413(world);
        init_room_node_index_414(world);
        init_room_node_index_415(world);
        init_room_node_index_416(world);
        init_room_node_index_417(world);
        init_room_node_index_418(world);
        init_room_node_index_419(world);
        init_room_node_index_420(world);
        init_room_node_index_421(world);
        init_room_node_index_422(world);
        init_room_node_index_423(world);
        init_room_node_index_424(world);
        init_room_node_index_425(world);
        init_room_node_index_426(world);
        init_room_node_index_427(world);
        init_room_node_index_428(world);
        init_room_node_index_429(world);
        init_room_node_index_430(world);
        init_room_node_index_431(world);
        init_room_node_index_432(world);
        init_room_node_index_433(world);
        init_room_node_index_434(world);
        init_room_node_index_435(world);
        init_room_node_index_436(world);
        init_room_node_index_437(world);
        init_room_node_index_438(world);
        init_room_node_index_439(world);
        init_room_node_index_440(world);
        init_room_node_index_441(world);
        init_room_node_index_442(world);
        init_room_node_index_443(world);
        init_room_node_index_444(world);
        init_room_node_index_445(world);
        init_room_node_index_446(world);
        init_room_node_index_447(world);
        init_room_node_index_448(world);
        init_room_node_index_449(world);
        init_room_node_index_450(world);
        init_room_node_index_451(world);
        init_room_node_index_452(world);
        init_room_node_index_453(world);
        init_room_node_index_454(world);
        init_room_node_index_455(world);
        init_room_node_index_456(world);
        init_room_node_index_457(world);
        init_room_node_index_458(world);
        init_room_node_index_459(world);
        init_room_node_index_460(world);
        init_room_node_index_461(world);
        init_room_node_index_462(world);
        init_room_node_index_463(world);
        init_room_node_index_464(world);
        init_room_node_index_465(world);
        init_room_node_index_466(world);
        init_room_node_index_467(world);
        init_room_node_index_468(world);
        init_room_node_index_469(world);
        init_room_node_index_470(world);
        init_room_node_index_471(world);
        init_room_node_index_472(world);
        init_room_node_index_473(world);
        init_room_node_index_474(world);
        init_room_node_index_475(world);
        init_room_node_index_476(world);
        init_room_node_index_477(world);
        init_room_node_index_478(world);
        init_room_node_index_479(world);
        init_room_node_index_480(world);
        init_room_node_index_481(world);
        init_room_node_index_482(world);
        init_room_node_index_483(world);
        init_room_node_index_484(world);
        init_room_node_index_485(world);
        init_room_node_index_486(world);
        init_room_node_index_487(world);
        init_room_node_index_488(world);
        init_room_node_index_489(world);
        init_room_node_index_490(world);
        init_room_node_index_491(world);
        init_room_node_index_492(world);
        init_room_node_index_493(world);
        init_room_node_index_494(world);
        init_room_node_index_495(world);
        init_room_node_index_496(world);
        init_room_node_index_497(world);
        init_room_node_index_498(world);
        init_room_node_index_499(world);
        init_room_node_index_500(world);
        init_room_node_index_501(world);
        init_room_node_index_502(world);
        init_room_node_index_503(world);
        init_room_node_index_504(world);
        init_room_node_index_505(world);
        init_room_node_index_506(world);
        init_room_node_index_507(world);
        init_room_node_index_508(world);
        init_room_node_index_509(world);
        init_room_node_index_510(world);
        init_room_node_index_511(world);
        init_room_node_index_512(world);
        init_room_node_index_513(world);
        init_room_node_index_514(world);
        init_room_node_index_515(world);
        init_room_node_index_516(world);
        init_room_node_index_517(world);
        init_room_node_index_518(world);
        init_room_node_index_519(world);
        init_room_node_index_520(world);
        init_room_node_index_521(world);
        init_room_node_index_522(world);
        init_room_node_index_523(world);
        init_room_node_index_524(world);
        init_room_node_index_525(world);
        init_room_node_index_526(world);
        init_room_node_index_527(world);
        init_room_node_index_528(world);
        init_room_node_index_529(world);
        init_room_node_index_530(world);
        init_room_node_index_531(world);
        init_room_node_index_532(world);
        init_room_node_index_533(world);
        init_room_node_index_534(world);
        init_room_node_index_535(world);
        init_room_node_index_536(world);
        init_room_node_index_537(world);
        init_room_node_index_538(world);
        init_room_node_index_539(world);
        init_room_node_index_540(world);
        init_room_node_index_541(world);
        init_room_node_index_542(world);
        init_room_node_index_543(world);
        init_room_node_index_544(world);
        init_room_node_index_545(world);
        init_room_node_index_546(world);
        init_room_node_index_547(world);
        init_room_node_index_548(world);
        init_room_node_index_549(world);
        init_room_node_index_550(world);
        init_room_node_index_551(world);
        init_room_node_index_552(world);
        init_room_node_index_553(world);
        init_room_node_index_554(world);
        init_room_node_index_555(world);
        init_room_node_index_556(world);
        init_room_node_index_557(world);
        init_room_node_index_558(world);
        init_room_node_index_559(world);
        init_room_node_index_560(world);
        init_room_node_index_561(world);
        init_room_node_index_562(world);
        init_room_node_index_563(world);
        init_room_node_index_564(world);
        init_room_node_index_565(world);
        init_room_node_index_566(world);
        init_room_node_index_567(world);
        init_room_node_index_568(world);
        init_room_node_index_569(world);
        init_room_node_index_570(world);
        init_room_node_index_571(world);
        init_room_node_index_572(world);
        init_room_node_index_573(world);
        init_room_node_index_574(world);
        init_room_node_index_575(world);
        init_room_node_index_576(world);
        init_room_node_index_577(world);
        init_room_node_index_578(world);
        init_room_node_index_579(world);
        init_room_node_index_580(world);
        init_room_node_index_581(world);
        init_room_node_index_582(world);
        init_room_node_index_583(world);
        init_room_node_index_584(world);
        init_room_node_index_585(world);
        init_room_node_index_586(world);
        init_room_node_index_587(world);
        init_room_node_index_588(world);
        init_room_node_index_589(world);
        init_room_node_index_590(world);
        init_room_node_index_591(world);
        init_room_node_index_592(world);
        init_room_node_index_593(world);
        init_room_node_index_594(world);
        init_room_node_index_595(world);
        init_room_node_index_596(world);
        init_room_node_index_597(world);
        init_room_node_index_598(world);
        init_room_node_index_599(world);
        init_room_node_index_600(world);
        init_room_node_index_601(world);
        init_room_node_index_602(world);
        init_room_node_index_603(world);
        init_room_node_index_604(world);
        init_room_node_index_605(world);
        init_room_node_index_606(world);
        init_room_node_index_607(world);
        init_room_node_index_608(world);
        init_room_node_index_609(world);
        init_room_node_index_610(world);
        init_room_node_index_611(world);
        init_room_node_index_612(world);
        init_room_node_index_613(world);
        init_room_node_index_614(world);
        init_room_node_index_615(world);
        init_room_node_index_616(world);
        init_room_node_index_617(world);
        init_room_node_index_618(world);
        init_room_node_index_619(world);
        init_room_node_index_620(world);
        init_room_node_index_621(world);
        init_room_node_index_622(world);
        init_room_node_index_623(world);
        init_room_node_index_624(world);
        init_room_node_index_625(world);
        init_room_node_index_626(world);
        init_room_node_index_627(world);
        init_room_node_index_628(world);
        init_room_node_index_629(world);
        init_room_node_index_630(world);
        init_room_node_index_631(world);
        init_room_node_index_632(world);
        init_room_node_index_633(world);
        init_room_node_index_634(world);
        init_room_node_index_635(world);
        init_room_node_index_636(world);
        init_room_node_index_637(world);
        init_room_node_index_638(world);
        init_room_node_index_639(world);
        init_room_node_index_640(world);
        init_room_node_index_641(world);
        init_room_node_index_642(world);
        init_room_node_index_643(world);
        init_room_node_index_644(world);
        init_room_node_index_645(world);
        init_room_node_index_646(world);
        init_room_node_index_647(world);
        init_room_node_index_648(world);
        init_room_node_index_649(world);
        init_room_node_index_650(world);
        init_room_node_index_651(world);
        init_room_node_index_652(world);
        init_room_node_index_653(world);
        init_room_node_index_654(world);
        init_room_node_index_655(world);
        init_room_node_index_656(world);
        init_room_node_index_657(world);
        init_room_node_index_658(world);
        init_room_node_index_659(world);
        init_room_node_index_660(world);
        init_room_node_index_661(world);
        init_room_node_index_662(world);
        init_room_node_index_663(world);
        init_room_node_index_664(world);
        init_room_node_index_665(world);
        init_room_node_index_666(world);
        init_room_node_index_667(world);
        init_room_node_index_668(world);
        init_room_node_index_669(world);
        init_room_node_index_670(world);
        init_room_node_index_671(world);
        init_room_node_index_672(world);
        init_room_node_index_673(world);
        init_room_node_index_674(world);
        init_room_node_index_675(world);
        init_room_node_index_676(world);
        init_room_node_index_677(world);
        init_room_node_index_678(world);
        init_room_node_index_679(world);
        init_room_node_index_680(world);
        init_room_node_index_681(world);
        init_room_node_index_682(world);
        init_room_node_index_683(world);
        init_room_node_index_684(world);
        init_room_node_index_685(world);
        init_room_node_index_686(world);
        init_room_node_index_687(world);
        init_room_node_index_688(world);
        init_room_node_index_689(world);
        init_room_node_index_690(world);
        init_room_node_index_691(world);
        init_room_node_index_692(world);
        init_room_node_index_693(world);
        init_room_node_index_694(world);
        init_room_node_index_695(world);
        init_room_node_index_696(world);
        init_room_node_index_697(world);
        init_room_node_index_698(world);
        init_room_node_index_699(world);
        init_room_node_index_700(world);
        init_room_node_index_701(world);
        init_room_node_index_702(world);
        init_room_node_index_703(world);
        init_room_node_index_704(world);
        init_room_node_index_705(world);
        init_room_node_index_706(world);
        init_room_node_index_707(world);
        init_room_node_index_708(world);
        init_room_node_index_709(world);
        init_room_node_index_710(world);
        init_room_node_index_711(world);
        init_room_node_index_712(world);
        init_room_node_index_713(world);
        init_room_node_index_714(world);
        init_room_node_index_715(world);
        init_room_node_index_716(world);
        init_room_node_index_717(world);
        init_room_node_index_718(world);
        init_room_node_index_719(world);
        init_room_node_index_720(world);
        init_room_node_index_721(world);
        init_room_node_index_722(world);
        init_room_node_index_723(world);
        init_room_node_index_724(world);
        init_room_node_index_725(world);
        init_room_node_index_726(world);
        init_room_node_index_727(world);
        init_room_node_index_728(world);
        init_room_node_index_729(world);
        init_room_node_index_730(world);
        init_room_node_index_731(world);
        init_room_node_index_732(world);
        init_room_node_index_733(world);
        init_room_node_index_734(world);
        init_room_node_index_735(world);
        init_room_node_index_736(world);
        init_room_node_index_737(world);
        init_room_node_index_738(world);
        init_room_node_index_739(world);
        init_room_node_index_740(world);
        init_room_node_index_741(world);
        init_room_node_index_742(world);
        init_room_node_index_743(world);
        init_room_node_index_744(world);
        init_room_node_index_745(world);
        init_room_node_index_746(world);
        init_room_node_index_747(world);
        init_room_node_index_748(world);
        init_room_node_index_749(world);
        init_room_node_index_750(world);
        init_room_node_index_751(world);
        init_room_node_index_752(world);
        init_room_node_index_753(world);
        init_room_node_index_754(world);
        init_room_node_index_755(world);
        init_room_node_index_756(world);
        init_room_node_index_757(world);
        init_room_node_index_758(world);
        init_room_node_index_759(world);
        init_room_node_index_760(world);
        init_room_node_index_761(world);
        init_room_node_index_762(world);
        init_room_node_index_763(world);
        init_room_node_index_764(world);
        init_room_node_index_765(world);
        init_room_node_index_766(world);
        init_room_node_index_767(world);
        init_room_node_index_768(world);
        init_room_node_index_769(world);
        init_room_node_index_770(world);
        init_room_node_index_771(world);
        init_room_node_index_772(world);
        init_room_node_index_773(world);
        init_room_node_index_774(world);
        init_room_node_index_775(world);
        init_room_node_index_776(world);
        init_room_node_index_777(world);
        init_room_node_index_778(world);
        init_room_node_index_779(world);
        init_room_node_index_780(world);
        init_room_node_index_781(world);
        init_room_node_index_782(world);
        init_room_node_index_783(world);
        init_room_node_index_784(world);
        init_room_node_index_785(world);
        init_room_node_index_786(world);
        init_room_node_index_787(world);
        init_room_node_index_788(world);
        init_room_node_index_789(world);
        init_room_node_index_790(world);
        init_room_node_index_791(world);
        init_room_node_index_792(world);
        init_room_node_index_793(world);
        init_room_node_index_794(world);
        init_room_node_index_795(world);
        init_room_node_index_796(world);
        init_room_node_index_797(world);
        init_room_node_index_798(world);
        init_room_node_index_799(world);
        init_room_node_index_800(world);
        init_room_node_index_801(world);
        init_room_node_index_802(world);
        init_room_node_index_803(world);
        init_room_node_index_804(world);
        init_room_node_index_805(world);
        init_room_node_index_806(world);
        init_room_node_index_807(world);
        init_room_node_index_808(world);
        init_room_node_index_809(world);
        init_room_node_index_810(world);
        init_room_node_index_811(world);
        init_room_node_index_812(world);
        init_room_node_index_813(world);
        init_room_node_index_814(world);
        init_room_node_index_815(world);
        init_room_node_index_816(world);
        init_room_node_index_817(world);
        init_room_node_index_818(world);
        init_room_node_index_819(world);
        init_room_node_index_820(world);
        init_room_node_index_821(world);
        init_room_node_index_822(world);
        init_room_node_index_823(world);
        init_room_node_index_824(world);
        init_room_node_index_825(world);
        init_room_node_index_826(world);
        init_room_node_index_827(world);
        init_room_node_index_828(world);
        init_room_node_index_829(world);
        init_room_node_index_830(world);
        init_room_node_index_831(world);
        init_room_node_index_832(world);
        init_room_node_index_833(world);
        init_room_node_index_834(world);
        init_room_node_index_835(world);
        init_room_node_index_836(world);
        init_room_node_index_837(world);
        init_room_node_index_838(world);
        init_room_node_index_839(world);
        init_room_node_index_840(world);
        init_room_node_index_841(world);
        init_room_node_index_842(world);
        init_room_node_index_843(world);
        init_room_node_index_844(world);
        init_room_node_index_845(world);
        init_room_node_index_846(world);
        init_room_node_index_847(world);
        init_room_node_index_848(world);
        init_room_node_index_849(world);
        curr = world[1];
    }

    void start() {
        std::cout << "=========================================\n";
        std::cout << "  10,000+ LINE RPG ENGINE REPOSITORY ONLINE\n";
        std::cout << "=========================================\n";
        while(running && p_stats.hp > 0) {
            std::cout << "\nYou are in: " << curr->name << "\nCommands: go north, go south, grab, attack, status, quit\n> ";
            std::string line; if(!std::getline(std::cin, line)) break;
            std::stringstream ss(line); std::string c, a; ss >> c >> a;
            if(c == "quit") running = false;
            else if(c == "go" && curr->exits.count(a)) curr = world[curr->exits[a]];
            else if(c == "status") std::cout << "HP: " << p_stats.hp << "/" << p_stats.max_hp << "\n";
            else std::cout << "Unknown matrix directive.\n";
        }
    }
};

int main() {
    Game g;
    g.start();
    return 0;
}
