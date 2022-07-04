program example2_3
    print *, "n = ", 5, "n! = ", fac(5)
    print *, "n = ", 7, "n! = ", fac(7)
    print *, "n = ", 10, "n! = ", fac(10)
end program

function fac(n)
    integer n
    fac = 1
    do i = 1, n
        fac = fac * i
    end do
end function fac
