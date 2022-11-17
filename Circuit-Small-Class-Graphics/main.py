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


def exercise_1():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True)
        d += elm.Line().left()
        d += elm.Dot()
        d += elm.Line().left()
        d += elm.SourceI().up().label("3A")
        d += elm.Line().right()
        d += elm.Dot()
        d.push()
        d += elm.SourceI().down().label("5A")
        d.pop()
        d += elm.Line().right()
        d += elm.Dot(open=True)
        d.save("/Users/rainchen/Desktop/Exercise1.svg")


def answer_1():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True)
        d += elm.Line().left()
        d += elm.SourceI().up().label("-2A")
        d += elm.Line().right()
        d += elm.Dot(open=True)
        d.save("/Users/rainchen/Desktop/Answer1.svg")


def exercise_2():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d.push()
        d += elm.SourceV().right().label("4V")
        d += elm.Dot(open=True)
        d.pop()
        d += elm.SourceV().down().label("6V")
        d += elm.Line().right()
        d += elm.Dot(open=True)
        d.save("/Users/rainchen/Desktop/Exercise2.svg")


def answer_2():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True)
        d += elm.Line().left()
        d += elm.SourceV().up().label("-2V")
        d += elm.Line().right()
        d += elm.Dot(open=True)
        d.save("/Users/rainchen/Desktop/Answer2.svg")


def exercise_2_1():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True).label("- b")
        d += elm.Line().left()
        d += elm.Dot()
        d.push()
        d += elm.Line().left()
        d += elm.Resistor().up().label("3 Ohm")
        d += elm.Dot()
        d.pop()
        d += elm.SourceV().up().label("5 V")
        d += elm.Line().left()
        d += elm.Resistor().up().label("2 Ohm")
        d += elm.Line().right()
        d += elm.Line().right()
        d += elm.Dot(open=True).label("+ a")
        d.save("/Users/rainchen/Desktop/exercise_2_1.svg")


def exercise_2_1_ans():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True).label("- b")
        d += elm.Line().left()
        d += elm.SourceV().up().label("5 V")
        d += elm.Resistor().up().label("2 Ohm")
        d += elm.Line().right()
        d += elm.Dot(open=True).label("+ a")
        d.save("/Users/rainchen/Desktop/exercise_2_1_ans.svg")


def exercise_2_2():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True).label("- b")
        d += elm.Line().left()
        d += elm.Dot()
        d.push()
        d += elm.Line().left()
        d += elm.SourceI().up().label("5 A")
        d += elm.Resistor().up().label("2 Ohm")
        d += elm.Line().right()
        d += elm.Dot()
        d.pop()
        d += elm.Resistor().up().label("3 Ohm")
        d += elm.Line().up()
        d += elm.Line().right()
        d += elm.Dot(open=True).label("+ a")
        d.save("/Users/rainchen/Desktop/exercise_2_2.svg")


def exercise_2_2_ans():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True).label("- b")
        d += elm.Line().left()
        d += elm.Dot()
        d.push()
        d += elm.Line().left()
        d += elm.SourceI().up().label("5 A")
        d += elm.Line().right()
        d += elm.Dot()
        d.pop()
        d += elm.Resistor().up().label("3 Ohm")
        d += elm.Line().right()
        d += elm.Dot(open=True).label("+ a")
        d.save("/Users/rainchen/Desktop/exercise_2_2_ans.svg")


def source_equal_v():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True).label("-")
        d += elm.Line().left()
        d += elm.Resistor().up().label("R_0")
        d += elm.SourceV().up().label("E")
        d += elm.Line().right()
        d += elm.Dot(open=True).label("+")
        d += elm.Line().right()
        d += elm.Resistor().down().label("R_L")
        d += elm.Line().down()
        d += elm.Line().left()
        d.save("/Users/rainchen/Desktop/source_equal_v.svg")


def source_equal_i():
    elm.style(elm.STYLE_IEC)
    with schemdraw.Drawing() as d:
        d += elm.Dot(open=True).label("-")
        d += elm.Line().left()
        d += elm.Dot()
        d.push()
        d += elm.Line().left()
        d += elm.SourceI().up().label("I_s")
        d += elm.Line().right()
        d += elm.Dot()
        d.pop()
        d += elm.Resistor().up().label("R_0")
        d += elm.Line().right()
        d += elm.Dot(open=True).label("+")
        d += elm.Line().right()
        d += elm.Resistor().down().label("R_L")
        d += elm.Line().left()
        d.save("/Users/rainchen/Desktop/source_equal_i.svg")


def main():
    """
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
    exercise_1()
    exercise_2()
    answer_1()
    answer_2()
    exercise_2_1()
    exercise_2_1_ans()
    exercise_2_2()
    exercise_2_2_ans()
    source_equal_v()
    """
    source_equal_i()


if __name__ == "__main__":
    main()
