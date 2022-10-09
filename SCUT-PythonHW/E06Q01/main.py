# encoding utf-8
# E06Q01
import csv

with open("/Users/rainchen/Documents/课程学习讲义/大学讲义/华南理工大学/Python程序设计/第六次作业资料/Q1/data.csv", "rt", encoding="utf-8") as f:
    next(f)
    reader1 = csv.reader(f)
    all_things = [row for row in reader1]
    kind = [col[1] for col in all_things]
    kind2 = [col[2] for col in all_things]
    print("种类1：", kind)
    print("种类2：", kind2)
