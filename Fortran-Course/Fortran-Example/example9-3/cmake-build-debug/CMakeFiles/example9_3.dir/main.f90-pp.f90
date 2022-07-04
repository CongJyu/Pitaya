# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example9-3/main.f90"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example9-3/cmake-build-debug//"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example9-3/main.f90"
program example9_3
    real a(5), b(5), h(5), d(5)
    diag(x, y) = sqrt(x ** 2 + y ** 2)
    do i = 1, 5
        read *, a(i), b(i), h(i)
    end do
    do i = 1, 5
        c = diag(a(i), b(i))
        d(i) = diag(c, h(i))
    end do
    print 100
    100 format(9x, 'A', 9x, 'B', 9x, 'H', 9x, 'D')
    print 110, (a(i), b(i), h(i), d(i), i = 1, 5)
    110 format(5x, 4f9.3)
end program
