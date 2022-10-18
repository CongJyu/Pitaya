# encoding utf-8
# Final Q02

def is_prime(x):
    for i in range(2, x):
        if x % i == 0:
            return False
    return True


def main():
    count = 0
    prime_number = []
    for i in range(50, 999):
        if is_prime(i):
            count += 1
            prime_number.append(i)
    print("count =", count)
    print(prime_number)


if __name__ == "__main__":
    main()
