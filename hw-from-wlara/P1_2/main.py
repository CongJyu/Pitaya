# 摄氏温度和华氏温度转换

c_input = float(input("请输入摄氏温度:"))  # 输入摄氏温度
c_out = round(c_input, 2)
f_out = round(c_input * 1.8 + 32, 2)
print(
    "摄氏温度:", c_out,
    "华氏温度:", f_out
)

f_input = float(input("请输入华氏温度:"))
c_out = round((f_input - 32) / 1.8, 2)
f_out = round(f_input, 2)
print(
    "华氏温度:", f_out,
    "摄氏温度:", c_out
)
