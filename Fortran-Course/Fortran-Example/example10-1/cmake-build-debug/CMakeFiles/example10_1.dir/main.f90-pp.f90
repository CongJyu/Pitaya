# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example10-1/main.f90"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example10-1/cmake-build-debug//"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example10-1/main.f90"
program example10_1
    parameter(n = 10)
    dimension name(n), s(n)
    character name * 10
    open(1, file = 'stu1.txt', form = 'formatted')
    do i = 1, n
        read(1, 20) name(i), s(i)
    end do
    20 format(a10, f5.1)
    close(1)
    open(2, file = 'stu2.txt', form = 'formatted')
    do i = 1, n
        if (s(i) >= 60) write(2, 20) name(i), s(i)
    end do
    close(2)
end program
