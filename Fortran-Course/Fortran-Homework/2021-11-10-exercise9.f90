! 数据检索。设有N个数，找出其中值为X的数，记录其位置
program exercise9
    implicit none
    integer n, x, i
    real num(1001)
    read * , n
    read * , x
    do i = 1, n
        read * , num(i)
    end do
    do i = 1, n
        if (num(i) == x) then
            print * , num(i), i
        end if
    end do
end program exercise9
