# encoding utf-8

# this is the testing data generator for t02p03

import random


def main():
    number = int(random.random() * 100)
    print(number)
    for i in range(number):
        test_data = int(random.random() * 1000)
        print(test_data, end=" ")


if __name__ == "__main__":
    main()
