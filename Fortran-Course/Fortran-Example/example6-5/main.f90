program example6_5
    read *, n, x
    term = 1.0
    e = 1.0
    do i = 1, n
        term = term + x / i
        e = e + term
    end do
    print *, "EXP(X) =", e
end program
