# encoding utf-8
# E07Q01

# /Users/rainchen/Documents/课程学习讲义/大学讲义/华南理工大学/Python程序设计/第七次作业资料/Q1

from PIL import Image
import numpy as np


def main():
    pixel_mat = np.array(
        Image.open("/Users/rainchen/Documents/课程学习讲义/大学讲义/华南理工大学/Python程序设计/第七次作业资料/Q1/bird.jpg")
    )
    # print(pixel_mat)
    # 原圖片
    img = Image.fromarray(pixel_mat)
    img.show()
    # sort 之後
    pixel_mat.sort()
    img = Image.fromarray(pixel_mat)
    img.show()
    # transpose 之後
    pixel_mat.transpose((0, 1, 2))
    img = Image.fromarray(pixel_mat)
    img.show()
    # 反相
    pixel_mat = 255 - pixel_mat
    img = Image.fromarray(pixel_mat)
    img.show()


if __name__ == "__main__":
    main()
