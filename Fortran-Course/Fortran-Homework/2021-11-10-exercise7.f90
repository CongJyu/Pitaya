! 把N个数从大到小排列输出
program exercise7
    implicit none
    integer n, i, j
    real a(10001)
    real temp 
    read * , n
    do i = 1, n 
        read * , a(i)
    end do
    do i = 1, n
        do j = 1, n - i
            if (a(j) < a(j + 1)) then
                temp = a(j)
                a(j) = a(j + 1)
                a(j + 1) = temp
            end if
        end do
    end do
    do i = 1, n
        print * , a(i)
    end do
end program exercise7
