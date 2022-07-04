# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example11-3/main.f90"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example11-3/cmake-build-debug//"
# 1 "/Users/rainchen/CodingSpace/Fortran-Example/example11-3/main.f90"
program example11_3
    parameter(n = 10)
    type student_record
        integer num, s
        real a(3), ave
    end type
    type(student_record) class(n)
    print 100, "请输入", n, "个学生的学号和成绩"
    do i = 1, n
        read *, class(i) % num, class(i) % a
        class(i) % ave = (class(i) % a(1) + class(i) % a(2) + class(i) % a(3)) / 3.0
    end do
    do i = 1, n
        k = 0
        do j = 1, n
            if (class(j) % ave > class(i) % ave) k = k + 1
        end do
        class(i) % s = k + 1
    end do
    print *, ''
    print *, '按照平均分排名如下：'
    print *, '--------------------------------------'
    print *, '名次   学号   语文   数学   英语   平均成绩'
    do i = 1, n
        do j = 1, n
            if (class(j) % s == i) print 200, class(j) % s, class(j) % num, &
                    class(j) % a, class(j) % ave
        end do
    end do
    100 format(a, i3, a)
    200 format(i5, i10, 4f8.1)
end program
