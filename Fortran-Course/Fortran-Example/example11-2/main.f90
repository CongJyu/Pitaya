program example11_2
    parameter(n = 500)
    type clerk_record
        integer num
        character * 6 name
        logical sex
        integer age
        integer sal
    end type
    type(clerk_record) cr(n)
    integer number
    open(8, file = 'clerk.txt', status = 'old')
    do i = 1, n
        read(8, 100) cr(i)
    end do
    print *, "Enter a clerk's number: "
    read *, number
    do i = 1, n
        if (number == cr(i) % num) then
            print *, ' 工号 姓名 性别 年龄 工资'
            print 100, cr(i)
            exit
        end if
    end do
    if (i > n) print *, 'Cannot find the clerk!'
    100 format(i8, 3x, a6, 3x, a2, 3x, i2, 3x, i4)
    close(1)
end program
