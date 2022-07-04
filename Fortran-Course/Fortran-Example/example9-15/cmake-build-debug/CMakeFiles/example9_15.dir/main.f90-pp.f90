# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example9-15/main.f90"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example9-15/cmake-build-debug//"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example9-15/main.f90"
program example9_15
    read *, n
    call facsub(n, f)
    print *, f
end program

recursive subroutine facsub(n, fac)
    integer n
    if (n < 0) then
        fac = -1
    else if (n == 1 .or. n == 0) then
        fac = 1
    else
        call facsub(n - 1, fac)
        fac = n * fac
    end if
end subroutine
