program example2_2
    real a, b, c, d, x1, x2
    read *, a, b, c
    if (d >= 0) then
        x1 = (-b + sqrt(d)) / (2 * a)
        x2 = (-b - sqrt(d)) / (2 * a)
        print *, "x1 = ", x1
        print *, "x2 = ", x2
    else
        print *, "该方程无实根."
    end if
end program
