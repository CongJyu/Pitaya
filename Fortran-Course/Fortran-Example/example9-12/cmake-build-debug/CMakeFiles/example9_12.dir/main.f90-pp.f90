# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example9-12/main.f90"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example9-12/cmake-build-debug//"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example9-12/main.f90"
program example9_12
    external func
    intrinsic sin
    call exf(func)
    call exf(sin)
end program

subroutine exf(f)
    print *, f(1.0)
end subroutine

function func(x)
    func = x ** 3 + 2 * x + 4
end function
