# encoding utf-8
# ccf-csp 201912-5

u = [
    int(314882150829468584),
    int(427197303358170108),
    int(1022292690726729920),
    int(1698479428772363217),
    int(2006101093849356424)
]
mod = 2009731336725594113


def f(x):
    x = x % mod
    x = x % 2019
    # print("test x: ", x)
    return x


def main():
    n, q = input().split()
    n = int(n)
    q = int(q)
    a = list(range(n))
    for i in range(n):
        a[i] = a[i] + 1
    # print("test: ", a)
    for i in range(q):
        ll, rr = input().split()
        ll = int(ll) - 1
        rr = int(rr) - 1
        s = 0
        for j in range(rr - ll + 1):
            s = f(a[ll + j]) + s
        t = s % 5
        for j in range(rr - ll + 1):
            a[ll + j] = u[t] * a[ll + j]
        # print("test: ", a)
        print(s)


if __name__ == "__main__":
    main()
