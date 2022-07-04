program flower
    implicit none
    integer N, N1, N2, N3
    do N = 100, 999
        N1 = N / 100
        N2 = mod(N / 10, 10)
        N3 = mod(N, 10)
        if (N1 ** 3 + N2 ** 3 + N3 ** 3 == N) then
            print * , N, "是水仙花数"
        end if
    end do
end program
