# encoding utf-8
# Q04

import turtle

turtle.setup(500, 500, 50, 50)
for i in range(24):
    for j in range(4):
        turtle.color("purple")
        turtle.forward(100)
        turtle.right(90)
    turtle.left(15)
turtle.done()
