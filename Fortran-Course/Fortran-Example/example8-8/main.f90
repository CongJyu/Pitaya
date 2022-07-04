program example8_8
    integer n, aver
    integer, allocatable :: a(:)
    print *, "输入学生数："
    read *, n
    allocate(a(n))
    print *, "输入学生成绩："
    do i = 1, n
        read *, a(i)
    end do
    aver = 0
    do i = 1, n
        aver = aver + a(i)
    end do
    aver = aver / n
    print *, "aver =", aver
    deallocate(a)
end program
