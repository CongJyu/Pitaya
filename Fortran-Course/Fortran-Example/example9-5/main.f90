program example9_5
    n = 3;
    ! 利用公式计算y的值，公式中调用了f函数
    y = (f(n) + f(n + 1) + f(n + 2)) / (f(n + 3) + f(n + 4))
    print *, y
end program

function f(x)
    integer x
    f = 0
    ! 通过循环求等差序列的和值
    do i = 1, x
        f = f + 1
    end do
end
