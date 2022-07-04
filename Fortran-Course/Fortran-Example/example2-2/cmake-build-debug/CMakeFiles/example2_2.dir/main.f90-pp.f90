# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example2-2/main.f90"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example2-2/cmake-build-debug//"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example2-2/main.f90"
program example2_2
    real a, b, c, d, x1, x2
    read *, a, b, c
    if (d >= 0) then
        x1 = (-b + sqrt(d)) / (2 * a)
        x2 = (-b - sqrt(d)) / (2 * a)
        print *, "x1 = ", x1
        print *, "x2 = ", x2
    else
        print *, "该方程无实根."
    end if
end program
