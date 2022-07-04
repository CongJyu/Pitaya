# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example6-3/main.f90"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example6-3/cmake-build-debug//"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example6-3/main.f90"
program example6_3
    integer sum
    read *, n
    sum = 0
    do i = 1, n, 1
        sum = sum + i
    end do
    print *, sum
end program
