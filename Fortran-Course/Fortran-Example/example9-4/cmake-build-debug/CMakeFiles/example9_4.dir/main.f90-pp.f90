# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example9-4/main.f90"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example9-4/cmake-build-debug//"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example9-4/main.f90"
program example9_4
    logical work
    f(a) = alog(a + sqrt(1 + a * a))
    fun(a, h) = (f(a + h) - f(a - h)) / (2.0 * h)
    read *, r
    print *, 'R = ', r
    n = 0
    x0 = 0.0
    work = .true.
    do while(work .and. n <= 15)
        h = 1.0 / 2.0 ** n
        x = fun(r, h)
        if (abs(x - x0) < 1e-5) work = .false.
        x0 = x
        n = n + 1
    end do
    if (n <= 15) then
        print *, 'The values of difference quotient is: ', x
    else
        print *, 'N > 15'
    end if
end program
