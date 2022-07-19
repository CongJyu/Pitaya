# encoding utf-8

def main():
    a, b = input().split(" ")
    a = int(a)
    b = int(b)
    # print(a, b)
    q = a // b
    r = a % b
    print(q, r)


if __name__ == "__main__":
    main()
