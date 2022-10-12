# 1 "/Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example6-4/main.f90"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example6-4/cmake-build-debug//"
# 1 "/Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example6-4/main.f90"
program example6_4
    integer fact, sum
    read *, n
    fact = 1
    sum = 0
    do i = 1, n
        fact = fact * i
        sum = sum + fact
    end do
    print *, sum
end program
