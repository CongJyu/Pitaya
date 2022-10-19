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
        d.save("/Users/rainchen/Desktop/理想電壓源串連1.svg")


def ideal_source_v_eq():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True)
        d += elm.Line().left()
        d += elm.SourceV().up().label("Us")
        d += elm.Line().right()
        d += elm.Dot(open=True)
        d.save("/Users/rainchen/Desktop/理想電壓源串連2.svg")


def ideal_source_v2():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True)
        d += elm.Line().left()
        d += elm.Dot()
        d.push()
        d += elm.SourceV().up().label("5V")
        d.pop()
        d += elm.Line().left()
        d += elm.SourceV().up().label("5V")
        d += elm.Line().right()
        d += elm.Dot()
        d += elm.Arrow().right()
        d += elm.Dot(open=True)
        d.save("/Users/rainchen/Desktop/理想電壓源並連1.svg")


def ideal_source_v2_eq():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True)
        d += elm.Line().left()
        d += elm.SourceV().up().label("5V")
        d += elm.Arrow().right()
        d += elm.Dot(open=True)
        d.save("/Users/rainchen/Desktop/理想電壓源並連2.svg")


def ideal_source_v2_ar():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True)
        d += elm.Line().left()
        d += elm.Dot()
        d.push()
        d += elm.SourceV().up().label("5V")
        d.pop()
        d += elm.Line().left()
        d += elm.Resistor().up().label("任\n意\n元\n件")
        d += elm.Line().right()
        d += elm.Dot()
        d += elm.Arrow().right()
        d += elm.Dot(open=True)
        d.save("/Users/rainchen/Desktop/理想電壓源並連任意元件.svg")


def ideal_source_i():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True)
        d += elm.Line().left()
        d += elm.Dot()
        d.push()
        d += elm.SourceI().up().label("Is1")
        d.pop()
        d += elm.Line().left()
        d += elm.SourceI().up().label("Is2")
        d += elm.Line().right()
        d += elm.Dot()
        d += elm.Arrow().right()
        d += elm.Dot(open=True)
        d.save("/Users/rainchen/Desktop/理想電流源並連1.svg")


def ideal_source_i_eq():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True)
        d += elm.Line().left()
        d += elm.SourceI().up().label("Is")
        d += elm.Arrow().right()
        d += elm.Dot(open=True)
        d.save("/Users/rainchen/Desktop/理想電流源並連2.svg")


def ideal_source_i2():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True)
        d += elm.SourceI().right().label("Is1")
        d += elm.SourceI().right().label("Is2")
        d += elm.SourceI().right().label("Is3")
        d += elm.Arrow().right()
        d += elm.Dot(open=True)
        d.save("/Users/rainchen/Desktop/理想電流源串連1.svg")


def ideal_source_i2_eq():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True)
        d += elm.SourceI().right().label("Is")
        d += elm.Arrow().right()
        d += elm.Dot(open=True)
        d.save("/Users/rainchen/Desktop/理想電流源串連2.svg")


def ideal_source_i2_ar():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True)
        d += elm.SourceI().right().label("Is1")
        d += elm.Resistor().right().label("任意元件")
        d += elm.Arrow().right()
        d += elm.Dot(open=True)
        d.save("/Users/rainchen/Desktop/理想電流源串連任意元件.svg")


def main():
    ideal_source_v()
    ideal_source_v_eq()
    ideal_source_v2()
    ideal_source_v2_eq()
    ideal_source_v2_ar()
    ideal_source_i()
    ideal_source_i_eq()
    ideal_source_i2()
    ideal_source_i2_eq()
    ideal_source_i2_ar()


if __name__ == "__main__":
    main()
