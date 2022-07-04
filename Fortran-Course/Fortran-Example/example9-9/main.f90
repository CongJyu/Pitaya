subroutine fcount(n, s)
    s = 0
    do i = 1, n
        s = s + 1.0 / i
    end do
end subroutine

program example9_9
    call fcount(50, s1)
    call fcount(100, s2)
    call fcount(150, s3)
    call fcount(200, s4)
    s = s1 + s2 + s3 + s4
    print *, "s =", s
end program
