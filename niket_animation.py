import turtle
import time

# Set up the screen environment
screen = turtle.Screen()
screen.setup(width=800, height=600)
screen.bgcolor("black")
screen.title("Python Animation for Niket")

# Create a turtle for the geometric background animation
drawer = turtle.Turtle()
drawer.speed(0)
drawer.width(2)
drawer.hideturtle()



colors = ["#00FFCC", "#FF007F", "#3399FF", "#FFCC00"]



for i in range(120):
    drawer.color(colors[i % 4])
    drawer.forward(i * 3)
    drawer.right(91) 

# Create a separate turtle to display the name
text_writer = turtle.Turtle()
text_writer.hideturtle()
text_writer.penup()


text_writer.goto(0, -30)

# Make the text flash neon colors
for flash in range(5):
    for color in ["#FFFFFF", "#212525", "#FF007F"]:
        text_writer.clear()
        text_writer.color(color)
        text_writer.write("NIKET", align="center", font=("Arial", 48, "bold"))
        time.sleep(0.3)

screen.mainloop()
