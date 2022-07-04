program exercise
    integer :: number = 0
    integer A
    integer B
    integer C
    integer :: CNT = 0
    do i = 0, 500
        C = mod(number, 10)
        B = mod(number / 10, 10)
        A = number / 100
        if (mod(B + C, 10) == A) then
            print * , number 
            CNT = CNT + 1
        end if
        number = number + 1
    enddo
    print * , "个数为：", CNT
end program
