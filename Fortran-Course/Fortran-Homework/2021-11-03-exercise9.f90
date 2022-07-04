program exercise
    integer :: N = 2
    integer :: fac = 0
    do j = 1, 10000
        do i = 1, j + 2
            if (mod(N, i) == 0) then
                fac = fac + N / i 
            end if
        enddo
        if (N == (fac - N)) then
            print * , N 
        end if
        N = N + 1
        fac = 0
    enddo
end program
