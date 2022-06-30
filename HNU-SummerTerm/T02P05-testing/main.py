# encoding utf-8

# t02p05-testing
# this is the testing data generator

import random


def main():
    group_number = int(random.random() * 30)
    for i in range(group_number):
        test_data = int(random.random() * 10000)
        print(test_data)


if __name__ == "__main__":
    main()
