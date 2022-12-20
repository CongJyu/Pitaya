# encoding utf-8
# E04Q01

ls = ['a', 'b', 'c']


def cycle(times):
    for i in range(times):
        if i > 2:
            i = i % 3
        print(ls[i])


def main():
    cycle(10)


if __name__ == "__main__":
    main()
