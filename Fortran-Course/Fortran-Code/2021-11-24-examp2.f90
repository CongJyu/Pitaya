program exam2
    integer a, c(3)
    data c/3 * 0/
    a = 100
    call sub(a, c(2))
    print * , 'A =', a, 'C(2) =', c(2)
end program exam2

subroutine sub(x, a)
    integer x, a
    a = 2 * x
    x = 2 * a
end subroutine sub
