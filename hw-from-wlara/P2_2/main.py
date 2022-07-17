# P2_2 解方程
import math

if __name__ == "__main__":
    # 输入各项系数
    a = float(input("二次项系数="))
    b = float(input("一次项系数="))
    c = float(input("常数项="))
    print("三个系数分别为:", "%.2f" % a, ",", "%.2f" % b, "和", "%.2f" % c)
    delta = b ** 2 - 4 * a * c
    if a == 0:
        print("不是二次方程")  # 不是二次方程
    elif delta == 0:
        root = (- b / (2 * a))
        print("两个重根为:", "%.2f" % root)  # 二重实根
    elif delta > 0:
        root1 = (- b + math.sqrt(delta)) / (2 * a)
        root2 = (- b - math.sqrt(delta)) / (2 * a)
        print("两个相异实根分别为:", "%.2f" % root1, "和", "%.2f" % root2)  # 相异实根
    else:
        re = (- b) / (2 * a)
        im_root1 = math.sqrt(abs(delta)) / (2 * a)
        im_root2 = - math.sqrt(abs(delta)) / (2 * a)
        print(
            "两个共轭复根分别为:", "%.2f" % re, "+", "%.2f" % im_root1, "j",
            "和", "%.2f" % re, "+", "%.2f" % im_root2, "j"
        )  # 共轭复根
