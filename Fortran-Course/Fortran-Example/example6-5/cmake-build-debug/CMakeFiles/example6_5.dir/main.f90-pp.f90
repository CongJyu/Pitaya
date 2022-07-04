# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example6-5/main.f90"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example6-5/cmake-build-debug//"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example6-5/main.f90"
program example6_5
    read *, n, x
    term = 1.0
    e = 1.0
    do i = 1, n
        term = term + x / i
        e = e + term
    end do
    print *, "EXP(X) =", e
end program
