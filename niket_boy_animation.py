"""
====================================================================
   NIKET KE LIYE - ANIMATED BOY CHARACTER
   Python Turtle Graphics se banaya gaya
   Features: Animated boy figure jo haath hilata hai (waving),
             palkein jhapkata hai (blinking), aur "NIKET" naam
             screen par dikhta hai.
====================================================================
"""

import turtle
import math

# ----------------------------------------------------------------
#  SCREEN SETUP

screen = turtle.Screen()
screen.title("Niket - Animated Boy")
screen.bgcolor("#AEE1F9")   # halka aasmani background
screen.setup(width=800, height=700)
screen.tracer(0)           



artist = turtle.Turtle()
artist.hideturtle()
artist.speed(0)
artist.width(3)


def draw_circle(x, y, radius, fill_color, outline_color="black"):
    """Ek circle banata hai diye gaye center aur radius par."""
    artist.penup()
    artist.goto(x, y - radius)
    artist.setheading(0)
    artist.pendown()
    artist.color(outline_color, fill_color)
    artist.begin_fill()
    artist.circle(radius)
    artist.end_fill()


def draw_rectangle(x, y, width, height, fill_color, outline_color="black"):
    """Ek rectangle banata hai top-left corner (x, y) se."""
    artist.penup()
    artist.goto(x, y)
    artist.setheading(0)
    artist.pendown()
    artist.color(outline_color, fill_color)
    artist.begin_fill()
    for _ in range(2):
        artist.forward(width)
        artist.right(90)
        artist.forward(height)
        artist.right(90)
    artist.end_fill()


def draw_line(x1, y1, x2, y2, color="black", width=3):
    artist.penup()
    artist.goto(x1, y1)
    artist.pendown()
    artist.color(color)
    artist.width(width)
    artist.goto(x2, y2)


def draw_ground():
    """Neeche hari zameen banata hai."""
    draw_rectangle(-400, -250, 800, 100, "#8BC34A", "#8BC34A")


def draw_sun():
    """Upar ek sooraj banata hai."""
    draw_circle(300, 250, 45, "#FFD54F", "#FFA000")


def draw_cloud(x, y):
    draw_circle(x, y, 25, "white", "white")
    draw_circle(x + 25, y + 10, 30, "white", "white")
    draw_circle(x + 55, y, 22, "white", "white")


def draw_name_text():
    """Screen ke upar 'NIKET' likhta hai."""
    artist.penup()
    artist.goto(0, 300)
    artist.color("#D84315")
    artist.write("NIKET", align="center", font=("Arial Rounded MT Bold", 36, "bold"))




def draw_static_scene():
    """Background aur boy ke wo hisse jo animate nahi hote."""
    draw_ground()
    draw_sun()
    draw_cloud(-250, 220)
    draw_cloud(-150, 260)
    draw_name_text()

  
    draw_rectangle(-40, -20, 80, 100, "#42A5F5", "#1565C0")

   
    draw_rectangle(-35, -100, 30, 80, "#37474F", "#263238")   # left leg (pant)
    draw_rectangle(5, -100, 30, 80, "#37474F", "#263238")     # right leg (pant)

    # ---- Shoes ----
    draw_rectangle(-40, -100, 35, 15, "#FFFFFF", "black")
    draw_rectangle(5, -100, 35, 15, "#FFFFFF", "black")

    # ---- Neck ----
    draw_rectangle(-8, 78, 16, 15, "#FFCC80", "#E0A96D")

    # ---- Head ----
    draw_circle(0, 130, 45, "#FFCC80", "#E0A96D")

    # ---- Hair ----
    artist.penup()
    artist.goto(-45, 155)
    artist.pendown()
    artist.color("#3E2723", "#3E2723")
    artist.begin_fill()
    artist.setheading(0)
    artist.circle(45, 180)
    artist.goto(-45, 155)
    artist.end_fill()

    # ---- Ears ----
    draw_circle(-44, 128, 8, "#FFCC80", "#E0A96D")
    draw_circle(44, 128, 8, "#FFCC80", "#E0A96D")

    # ---- Static face features (nose, mouth) ----
    draw_circle(0, 122, 4, "#F4A261", "#E0A96D")     # nose

    artist.penup()
    artist.goto(-12, 108)
    artist.pendown()
    artist.color("#8D3B1A")
    artist.width(3)
    artist.setheading(-40)
    artist.circle(-15, 80)   # smile




eye_state = {"open": True}
wave_state = {"angle": 0, "direction": 1}
frame_count = {"n": 0}


def draw_eyes():
    """Ankhein banata hai - khuli ya band, blink animation ke liye."""
    artist.penup()
    if eye_state["open"]:
        draw_circle(-16, 138, 6, "white", "black")
        draw_circle(16, 138, 6, "white", "black")
        draw_circle(-14, 138, 3, "black", "black")
        draw_circle(18, 138, 3, "black", "black")
    else:
        draw_line(-22, 138, -10, 138, "black", 3)
        draw_line(10, 138, 22, 138, "black", 3)

    # Eyebrows
    draw_line(-22, 148, -10, 152, "#3E2723", 3)
    draw_line(10, 152, 22, 148, "#3E2723", 3)


def draw_waving_arm():
    """Dahine haath ko hilate hue banata hai (waving animation)."""
    angle_rad = math.radians(wave_state["angle"])
    shoulder_x, shoulder_y = 40, 60

    hand_x = shoulder_x + 55 * math.sin(angle_rad)
    hand_y = shoulder_y + 55 * math.cos(angle_rad)

    artist.penup()
    artist.goto(shoulder_x, shoulder_y)
    artist.pendown()
    artist.color("#FFCC80")
    artist.width(14)
    artist.goto(hand_x, hand_y)
    artist.width(3)

    # Hand (circle at the end)
    draw_circle(hand_x, hand_y + 8, 12, "#FFCC80", "#E0A96D")

    # Left arm (static, resting)
    artist.penup()
    artist.goto(-40, 60)
    artist.pendown()
    artist.color("#FFCC80")
    artist.width(14)
    artist.goto(-55, 10)
    artist.width(3)
    draw_circle(-55, 2, 12, "#FFCC80", "#E0A96D")


def draw_animated_parts():
    """Wo saare parts jo har frame mein badalte hain."""
    draw_eyes()
    draw_waving_arm()


# ----------------------------------------------------------------
#  ANIMAT--ION LOOP
# ----------------------------------------------------------------

def animate():
    artist.clear()
    draw_static_scene()
    draw_animated_parts()
    screen.update()

    frame_count["n"] += 1

    # Waving arm: aage-peeche jhoolta hai
    wave_state["angle"] += wave_state["direction"] * 8
    if wave_state["angle"] >= 40 or wave_state["angle"] <= -10:
        wave_state["direction"] *= -1

    # Blinking: har ~40 frames mein ek baar palkein jhapkein
    if frame_count["n"] % 40 == 0:
        eye_state["open"] = False
    elif frame_count["n"] % 40 == 5:
        eye_state["open"] = True

    screen.ontimer(animate, 50)   # ~20 FPS



if __name__ == "__main__":
    animate()
    screen.mainloop()