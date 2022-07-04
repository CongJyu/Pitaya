program example6_4
    integer fact, sum
    read *, n
    fact = 1
    sum = 0
    do i = 1, n
        fact = fact * i
        sum = sum + fact
    end do
    print *, sum
end program
