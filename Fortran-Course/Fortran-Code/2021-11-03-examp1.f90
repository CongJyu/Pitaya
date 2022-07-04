program add 
    integer :: x = 0, y = 0
    do
        x = x + 1
        if (mod(x, 2) == 0) cycle
        if (x > 100) exit
        y = y + x 
    enddo
    print * , y
end
