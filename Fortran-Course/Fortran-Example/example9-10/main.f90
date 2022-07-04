program example9_10
    parameter (n = 10)
    integer a(n)
    read *, iseed
    do i = 1, n
        a(i) = int(ran(iseed) * 100)
    end do
    print *, "排序前的数组："
    ! print "(<n> i4)", (a(i), i = 1, n)
    call sort(n, a)
    print *, "排序后的数组："
    ! print "(<n> i4)", (a(i), i = 1, n)
end program

subroutine sort(n, a)
    integer a(n), t
    do i = 1, n - 1
        do j = 1, n - 1
            if (a(j) > a(j + 1)) then
                t = a(j)
                a(j) = a(j + 1)
                a(j + 1) = t
            end if
        end do
    end do
end subroutine

! hnu_stu
! hnu_Hsy

! stu01 ~ stu20
