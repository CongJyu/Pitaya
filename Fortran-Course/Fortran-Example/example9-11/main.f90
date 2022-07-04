program example9_11
    parameter (m = 3, n = 4)
    integer a(m, n), b(n, m)
    print *, "输入一个3 * 4的矩阵："
    do i = 1, m
        read *, (a(i, j), j = 1, n)
    end do
    call tran(a, b, m, n)
    print *, "转置后的矩阵"
    do i = 1, n
        print *, (b(i, j), j = 1, m)
    end do
end program

subroutine tran(a, b, m, n)
    integer a(m, n), b(n, m)
    do i = 1, m
        do j = 1, n
            b(j, i) = a(i, j)
        end do
    end do
end subroutine
