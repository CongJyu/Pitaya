program main
    parameter (n = 30)
    real dat(n)
    call input(dat, n)
    call sort(dat, n)
    call output(dat, n)
end program main

subroutine input(a, m)    ! 形式参数
    real a(m)    ! 在主程序里声明数组不能出现变量
    read * , a
end subroutine input

subroutine output(a, m)
    real a(m)
    print * , a
end subroutine output

subroutine sort(a, m)
    real a(m), t
    do i = 1, n - 1
        do j = i + 1, n
            if (a(j) > a(i)) then
                t = a(j); a(j) = a(i); a(i) = t
            end if
        end do
    end do
end subroutine sort
