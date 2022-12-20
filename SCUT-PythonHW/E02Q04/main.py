# encoding utf-8
# E02Q04

def count_letter():
    with open("./Q4.txt", "r") as f:
        text = f.read()
    counts = {
        'a': 0,
        'b': 0,
        'c': 0,
        'd': 0,
        'e': 0,
        'f': 0,
        'g': 0,
        'h': 0,
        'i': 0,
        'j': 0,
        'k': 0,
        'l': 0,
        'm': 0,
        'n': 0,
        'o': 0,
        'p': 0,
        'q': 0,
        'r': 0,
        's': 0,
        't': 0,
        'u': 0,
        'v': 0,
        'w': 0,
        'x': 0,
        'y': 0,
        'z': 0
    }
    # 请补全代码
    for i in range(len(text)):
        if text[i] == 'a' or text[i] == 'A':
            counts['a'] += 1
        elif text[i] == 'b' or text[i] == 'B':
            counts['b'] += 1
        elif text[i] == 'c' or text[i] == 'C':
            counts['c'] += 1
        elif text[i] == 'd' or text[i] == 'D':
            counts['d'] += 1
        elif text[i] == 'e' or text[i] == 'E':
            counts['e'] += 1
        elif text[i] == 'f' or text[i] == 'F':
            counts['f'] += 1
        elif text[i] == 'g' or text[i] == 'G':
            counts['g'] += 1
        elif text[i] == 'h' or text[i] == 'H':
            counts['h'] += 1
        elif text[i] == 'i' or text[i] == 'I':
            counts['i'] += 1
        elif text[i] == 'j' or text[i] == 'J':
            counts['j'] += 1
        elif text[i] == 'k' or text[i] == 'K':
            counts['k'] += 1
        elif text[i] == 'l' or text[i] == 'L':
            counts['l'] += 1
        elif text[i] == 'm' or text[i] == 'M':
            counts['m'] += 1
        elif text[i] == 'n' or text[i] == 'N':
            counts['n'] += 1
        elif text[i] == 'o' or text[i] == 'O':
            counts['o'] += 1
        elif text[i] == 'p' or text[i] == 'P':
            counts['p'] += 1
        elif text[i] == 'q' or text[i] == 'Q':
            counts['q'] += 1
        elif text[i] == 'r' or text[i] == 'R':
            counts['r'] += 1
        elif text[i] == 's' or text[i] == 'S':
            counts['s'] += 1
        elif text[i] == 't' or text[i] == 't':
            counts['t'] += 1
        elif text[i] == 'u' or text[i] == 'U':
            counts['u'] += 1
        elif text[i] == 'v' or text[i] == 'V':
            counts['v'] += 1
        elif text[i] == 'w' or text[i] == 'W':
            counts['w'] += 1
        elif text[i] == 'x' or text[i] == 'X':
            counts['x'] += 1
        elif text[i] == 'y' or text[i] == 'Y':
            counts['y'] += 1
        elif text[i] == 'z' or text[i] == 'Z':
            counts['z'] += 1
    return counts


print(count_letter())
