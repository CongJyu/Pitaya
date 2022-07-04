program examp1
    integer N
    real A, B, X, H, F0, S, SI
    read (*, *) N, A, B
    X = A
        H = (B - A) / N
        F0 = 1.0 + exp(X)
        S = 0.0
        do I = 1, N
            SI = F0 * H
            S = S + SI
            X = X + H
            F0 = 1.0 + exp(X)
        enddo
        write (*, 100) N, A, B, S
    100 format (1X, 'N = ', I4, 3X, 'A = ', F10.3, 3X, 'B = ', F10.3 / 1X, 'S = ', F15.8)
    ! pause
end program
