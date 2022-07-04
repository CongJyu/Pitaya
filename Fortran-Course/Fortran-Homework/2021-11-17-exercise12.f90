subroutine getSum()
    ! get the sum of cross elements of a matrix
    integer n, s1, s2, a(100)
    s1 = 0
    s2 = 0
    print * , "输入方阵的大小："
    read * , n
    do i = 1, n
        do j = 1, n
            print * , "输入方阵第", i, "行第", j, "列的数："
            read * , a(j)
        end do
        s1 = s1 + a(i)
        s2 = s2 + a(n - i + 1)
    end do
    print * , "主对角线和为", s1, "副对角线和为", s2
end
! main program
program exercise12
    call getSum()
end program exercise12
