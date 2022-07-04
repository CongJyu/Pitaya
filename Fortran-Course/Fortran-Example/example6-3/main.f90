program example6_3
    integer sum
    read *, n
    sum = 0
    do i = 1, n, 1
        sum = sum + i
    end do
    print *, sum
end program
