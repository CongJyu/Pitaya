program fileopen
    open(10, file = "a.txt", form = "formatted", &
    access = "sequential")
    write(10, 100) 911
    write(10, 200) "Welcome"
    open(11, file = "b.txt", form = "formatted", &
    access = "direct", recl = 10)
    write(11, 100, rec = 1) 911
    write(11, 200, rec = 2) "Welcome"
    100 format(1x, i5)    ! 1x代表一个空格 i5表示一个整数，占字符位数为5
    200 format(1x, a15)    ! a表示字符型数据 15表示占15个字符
end program fileopen

! old 已经存在的老文件
! new 表示指定的文件尚不存在
! scratch 表示草稿文件，关闭文件或程序中断的时候会自动删除
! replace 替代同名文件
! unknown 由计算机来规定文件的状态
