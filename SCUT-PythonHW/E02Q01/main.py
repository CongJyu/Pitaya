# encoding utf-8
# E02Q01

def valid_number():
    numbers = []

    # 请补全代码
    for i in range(10000, 55556):
        s = str(i)
        ok = True
        for j in range(5):
            if s[j] >= '6':
                ok = False
                break
        if ok:
            numbers.append(i)

    return len(numbers)


print(valid_number())
# print(5 * 6 * 6 * 6 * 6)
