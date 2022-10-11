# encoding utf-8
# E03Q03

def func(a, b=[]):
    b.append(a)
    return b


if __name__ == '__main__':
    print(func(1))
    print(func(2))
    print(func(1, [2]))
    print(func(3))
