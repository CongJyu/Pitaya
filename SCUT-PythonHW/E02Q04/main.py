# encoding utf-8
# E02Q04

def count_letter():
    with open("./Q4.txt", "r") as f:
        text = f.read()
    counts = {}

    # 请补全代码
    for i in range(len(text)):
        if 'a' <= text[i] <= 'z' and 'A' <= text[i] <= 'Z':
            counts += 1
    return counts


print(count_letter())
