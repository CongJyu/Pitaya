program example8_1
    real :: grade, sum, ave, max
    sum = 0
    max = 0
    do i = 1, 5
        read *, grade
        sum = sum + grade
    end do
    ave = sum / 5
    do i = 1, 5
        read *, grade
        if (grade > max) max = grade
        print *, grade - ave
    end do
    print *, ave
end program
