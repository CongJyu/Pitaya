# encoding utf-8
# E07Q03

import pandas as pd


def main():
    ser = pd.Series(['fInD', 'yoUR', 'KNEE'])
    for i in range(ser.Series.size()):
        if 'a' <= ser.Series[i - 1][0] <= 'z':
            ser.Series[i - 1][0] += 48
        if 'A' <= ser.Series[i - 1][0] <= 'Z':
            ser.Series[i - 1][1] -= 48
    print(ser)


if __name__ == "__main__":
    main()
