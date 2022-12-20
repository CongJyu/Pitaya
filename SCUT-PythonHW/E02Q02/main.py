# encoding utf-8
# E02Q02

def strip(str_input):
    left = 0
    right = len(str_input)

    # 请补全代码
    while str_input[left] == '\n' or str_input[left] == '\t' or str_input[left] == ' ':
        left += 1
    while str_input[right - 1] == '\n' or str_input[right - 1] == '\t' or str_input[right - 1] == ' ':
        right -= 1
    return str_input[left:right]


print(strip('\n\t  a\n b\tc\n'))
