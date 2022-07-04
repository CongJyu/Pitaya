program main
    character *(5) fname
    dimension mymat(4, 4), mytmat(4, 4)
    integer mymat, mytmat
    open(1, file = 'mat1.txt', status = 'old')
    open(2, file = 'mat2.txt', status = 'new')
    do i = 1, 4
        read(1, 100) (mymat(i, j), j = 1, 4)
    end do
    100 format(4i5)
    do i = 1, 4
        do j = 1, 4
            mytmat(i, j) = mymat(j, i)
        end do
    end do
    do i = 1, 4
        write(2, 100) (mytmat(i, j), j = 1, 4)
    end do
end program main
