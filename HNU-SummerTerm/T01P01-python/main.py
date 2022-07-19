# encoding utf-8
# t01p01

def main():
    while True:
        n = int(input())
        if n == 0:
            break
        a = list(map(int, input().split()))
        c = [0] * 999999  # 用于存储数字 i 的重复个数
        for i in range(n):
            c[int(a[i])] = c[int(a[i])] + 1
        max_num = 0
        result = 0
        for i in range(999999):
            if int(c[i]) > max_num:
                max_num = int(c[i])
                result = int(i)
        print(result)


if __name__ == "__main__":
    main()
