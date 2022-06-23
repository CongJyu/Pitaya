# encoding utf-8
# 网络信息爬取——全球疫情数据爬取

# 首先导入 requests 库
import requests
from lxml import etree
import csv
import pandas as pd
import matplotlib.pyplot as plt

# 请求的 url
url = "https://www.bitpush.news/covid19/"
# 请求头信息
headers = {
    "user-agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) "
                  "Chrome/95.0.4638.69 Safari/537.36 "
}
# 使用 requests 模块发起 GET 请求
response = requests.get(url, headers=headers)
# 获取请求的返回结果
html = response.text
# print(html)

parse = etree.HTMLParser(encoding="utf-8")
doc = etree.HTML(html)

country = doc.xpath('//div[@class="table_container"]//tbody/tr/td/span/text()')
person = doc.xpath('//div[@class="table_container"]//tbody/tr/td[2]/text()')
death = doc.xpath('//div[@class="table_container"]//tbody/tr/td[3]/text()')
# 使用列表推导式
death = [x.replace(",", "") for x in death]
# 打包数据
message = list(zip(country, person, death))
print(message)

with open("content.csv", "w") as f:
    w = csv.writer(f)
    w.writerows(message)

# 读取数据
df = pd.read_csv("content.csv", names=["country", "person", "death"])
df.head()
print(df.head())
df.info()

# 由于第一行是全球的数据总和，我们先将其删除
df1 = df.drop(0).head(10)
print(df1)

# 设置中文显示
plt.rcParams['font.sans-serif'] = ['SimHei']
plt.rcParams['figure.figsize'] = (10, 5)  # 设置figure_size尺寸

# x轴坐标
x = df1["country"].values
# y轴坐标
y = df1["death"].values
# 绘制柱状图
plt.bar(x, y)
# 设置x轴名称
plt.xlabel("国家", fontsize=14)
# 设置x轴名称
plt.ylabel("死亡人数", fontsize=14)
plt.show()
