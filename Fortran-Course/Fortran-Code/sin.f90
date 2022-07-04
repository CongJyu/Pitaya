program sin
    parameter (PI = 3.1415926)
    real X, F, SINE 
    integer :: I = 1
    read * , X 
    X = X * PI / 180
    SINE = X 
    F = X 
    do while (abs(F) > 1.0E-6)
        I = I + 1
        F = - X * X / ((2 * I - 2) * (2 * I - 1)) * F 
        SINE = SINE + F 
    enddo
    print 10, SINE 
10  format(F4.2)
end program
