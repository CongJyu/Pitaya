# encoding utf-8
# Final Q01
# 倍数求和

def main():
    sum_val = 0
    for i in range(10, 100000):
        if i % 5 == 0 or i % 7 == 0:
            sum_val += i
    print(sum_val)


if __name__ == "__main__":
    main()
