# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example6-6/main.f90"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example6-6/cmake-build-debug//"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example6-6/main.f90"
program example6_6
    ! 水仙花数
    integer n, n1, n2, n3
    do n = 100, 999
        n1 = n / 100
        n2 = mod(n / 10, 10)
        n3 = mod(n, 10)
        if (n1 ** 3 + n2 ** 3 + n3 ** 3 == n) then
            print *, n, "是水仙花数."
        end if
    end do
end program
