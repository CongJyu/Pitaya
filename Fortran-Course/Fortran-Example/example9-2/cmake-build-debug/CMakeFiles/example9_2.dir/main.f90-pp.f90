# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example9-2/main.f90"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example9-2/cmake-build-debug//"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example9-2/main.f90"
program example9_2
    real x
    do i = 1, 5, 1
        read *, x
        print 10, "当 x =", x, " 时函数 y = x^2 + x + 1 的值为", x ** 2 + x + 1
    end do
    10 format(a, f4.1, a, f6.1)
end program
