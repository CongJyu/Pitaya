program example8_3_2
    ! pparay
    real pp(6)
    complex (kind=4) lpp
    integer, dimension(500) :: kkj
    data pp, lpp /6 * 0, (8.0, -89)/
    data (kkj(i), i = 1, 100) /100 * 10/, (kkj(i), i = 101, 400) /300 * 0/, &
            (kkj(i), i = 401, 500) /100 * 50/
end program
