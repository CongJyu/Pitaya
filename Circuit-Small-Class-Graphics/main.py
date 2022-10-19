# encoding utf-8
# 呢個 project 係用於生成小班課需要用嘅電路圖

import schemdraw
import schemdraw.elements as elm


def ideal_source_v():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True)
        d += elm.Line().left()
        d += elm.SourceV().up().label("Us1")
        d += elm.SourceV().up().label("Us2")
        d += elm.Line().right()
        d += elm.Dot(open=True)
        d.save("/Users/rainchen/Desktop/理想電壓源1.svg")


def ideal_source_v_eq():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True)
        d += elm.Line().left()
        d += elm.SourceV().up().label("Us")
        d += elm.Line().right()
        d += elm.Dot(open=True)
        d.save("/Users/rainchen/Desktop/理想電壓源2.svg")


def main():
    ideal_source_v()
    ideal_source_v_eq()


if __name__ == "__main__":
    main()
