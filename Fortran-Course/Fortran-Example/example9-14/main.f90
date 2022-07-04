program example9_14
    read *, n
    print *, factorial(n)
end program

recursive function factorial(n) result(fac)
    integer n
    if (n < 0) then
        fac = -1
    else if (n == 1 .or. n == 0) then
        fac = 1
    else
        fac = n * factorial(n - 1)
    end if
end function
