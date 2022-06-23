# encoding utf-8
# 获取美国内地区疫情统计数据

# 导入各种包和库
import matplotlib.font_manager
import requests
from lxml import etree
import csv
import pandas as pd
import matplotlib.pyplot as plt


# main process
def main():
    # 请求 url
    url = "https://www.bitpush.news/covid19/"
    # 请求 header 信息
    headers = {
        "user-agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) "
                      "Chrome/95.0.4638.69 Safari/537.36 "
    }
    # 用 requests 发起 GET 请求，并获取请求的返回结果
    html = requests.get(url, headers=headers).text
    # print(html)
    # 创建一个 lxml 对象，encoding utf-8
    etree.HTMLParser(encoding="utf-8")
    # 解析结果
    doc = etree.HTML(html)

    # XML process
    # 地区
    state = doc.xpath('(//div[@class="table_container"])[2]//tbody/tr/td/span/text()')
    # 确诊人数
    person = doc.xpath('(//div[@class="table_container"])[2]//tbody/tr/td[2]/text()')
    # 去除逗号
    person = [x.replace(",", "") for x in person]
    # 死亡人数
    death = doc.xpath('(//div[@class="table_container"])[2]//tbody/tr/td[3]/text()')
    # 去除逗号
    death = [x.replace(",", "") for x in death]

    # 打包数据
    message = list(zip(state, person, death))
    print(message)

    # file process
    with open("content.csv", "w") as f:
        w = csv.writer(f)
        w.writerows(message)
    # 读取数据
    df = pd.read_csv("content.csv", names=["state", "person", "death"])
    print(df.head(15))
    df_show = df.head(15)

    # graph process
    # 设置中文显示
    # 此处 macOS 没有「SimHei」字体，所以使用其他字体
    # print(matplotlib.font_manager.fontManager.ttflist)
    plt.rcParams['font.sans-serif'] = ['SimHei']
    plt.rcParams['figure.figsize'] = (10, 5)  # 设置figure_size尺寸

    # x轴坐标
    x = df_show["state"].values
    # y轴坐标
    y = df_show["death"].values
    # 绘制柱状图
    plt.bar(x, y)
    # 设置x轴名称
    plt.xlabel("美国各州", fontsize=14)
    # 设置x轴名称
    plt.ylabel("死亡人数", fontsize=14)
    plt.show()


if __name__ == "__main__":
    main()
