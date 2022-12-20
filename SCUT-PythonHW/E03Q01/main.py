# encoding utf-8
# E03Q01

def cycle(iterable):
    iterable += 1
    if iterable > len(iterable):
        iterable = 0
    return iterable


str = "abc"
g = cycle(str)
print(next(g))
print(next(g))
print(next(g))
print(next(g))
print(next(g))
print(next(g))
