# encoding utf-8
# Q01

# 如下代码用于判断奇偶数

numbers = [15, 33, 56, 4, 82, 5]
even = []
odd = []
while len(numbers) > 0:
    number = numbers.pop()
    if number % 2 == 0:
        even.append(number)
    else:
        odd.append(number)
print("even: ", even)
print("odd: ", odd)
