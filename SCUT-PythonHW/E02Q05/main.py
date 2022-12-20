# encoding utf-8
# E02Q05

def narcissistic_number():
    numbers = []

    # 请补全代码
    for i in range(100, 1000):
        s = str(i)
        if i == int(s[0]) ** 3 + int(s[1]) ** 3 + int(s[2]) ** 3:
            numbers.append(i)

    return numbers


print(narcissistic_number())
