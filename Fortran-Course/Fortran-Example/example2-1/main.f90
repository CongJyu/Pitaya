program example2_1
    real a, b, c, ave1, ave2
    read *, a, b, c
    ave1 = (a + b + c) / 3
    ave2 = (a * b * c) ** (1.0 / 3)
    print *, "算术平均值为：", ave1
    print *, "几何平均值为：", ave2
end program example2_1
