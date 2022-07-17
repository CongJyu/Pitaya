# P2_1 计算三角形的面积
import math

if __name__ == "__main__":
    a = float(input("第一条边长:"))
    b = float(input("第二条边长:"))
    c = float(input("第三条边长:"))
    if a + b <= c or a + c <= b or b + c <= a:
        print("无法构成三角形")
    else:
        p = (a + b + c) / 2
        # 用海伦公式求三角形面积
        area = math.sqrt(p * (p - a) * (p - b) * (p - c))
        print(
            "边长分别为:",
            "%.2f" % a, ",", "%.2f" % b, "和", "%.2f" % c,
            "的三角形面积=", "%.2f" % area
        )
