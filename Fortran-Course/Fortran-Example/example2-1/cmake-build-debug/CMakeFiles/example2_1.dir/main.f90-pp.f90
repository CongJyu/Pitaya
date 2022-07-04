# 1 "/Users/rainchen/CodingArea/Fortran-Example/example2-1/main.f90"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/rainchen/CodingArea/Fortran-Example/example2-1/cmake-build-debug//"
# 1 "/Users/rainchen/CodingArea/Fortran-Example/example2-1/main.f90"
program example2_1
    real a, b, c, ave1, ave2
    read *, a, b, c
    ave1 = (a + b + c) / 3
    ave2 = (a * b * c) ** (1.0 / 3)
    print *, "算术平均值为：", ave1
    print *, "几何平均值为：", ave2
end program example2_1
