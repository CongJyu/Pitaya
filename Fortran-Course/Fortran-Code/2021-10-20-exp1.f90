program test
    implicit none
    real x, y
    read * , x
    y = x ** 3 + sin(x) * sin(x) + log(x ** 4 + 1)
    print *, y
end program
