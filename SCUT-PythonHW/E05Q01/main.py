# encoding utf-8
# E05Q01

import math


class Vector2D(object):
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):
        r = Vector2D
        r.x = self.x + other.x
        r.y = self.y + other.y
        return str(r.x) + " " + str(r.y)

    def __sub__(self, other):
        r = Vector2D
        r.x = self.x - other.x
        r.y = self.y - other.y
        return str(r.x) + " " + str(r.y)

    def __mul__(self, other):
        r = Vector2D
        r.x = self.x * other.x
        r.y = self.y * other.y
        return str(r.x) + " " + str(r.y)

    def __abs__(self):
        return math.sqrt(self.x ** 2 + self.y ** 2)


a = Vector2D(1, 2)
b = Vector2D(2, 3)
print(a + b)
print(a * b)
print(b - a)
print(abs(a))
print(str(b))
# print(a.angle(b))
