program exercise5
    integer n, k
    read * , n, k
    call sop(n, k)
end program exercise5
subroutine sop(n, k)
    do i = 1, n
        call power(i, k)
    end do
end subroutine
subroutine power(i, k)
    integer sum
    do i = 1, k
        sum = sum + i
    end do
end subroutine
! Something wrong with this program
