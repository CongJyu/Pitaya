# encoding utf-8
# Q02

score = int(input())
if 90 <= score <= 100:
    print("A")
elif 80 <= score < 90:
    print("B")
elif 70 <= score < 80:
    print("C")
elif 0 <= score < 70:
    print("D")
else:
    print("Error")
