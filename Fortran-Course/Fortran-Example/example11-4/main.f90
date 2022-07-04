module shuju
    type clerk
        integer num
        character * 6 name
        character * 6 department
        real salary(9)
    end type
end module

subroutine input(a, m, n, path)
    use shuju
    integer m, n
    type(clerk) a(m + n)
    character * (*) path
    open(10, file = path)
    do i = 1, m
        read(10, 100), a(i)
    end do
    close(10)
    100 format(i8, a6, 2x, a6, 2x, 9f10.2)
end subroutine

subroutine wage(a, m, b1, b2, b3, b4)
    use shuju
    real b1, b2, b3, b4
    type(clerk) a(m)
    do i = 1, m
        a(i)%salary(3) = a(i)%salary(1) + a(i)%salary(2)
        a(i)%salary(4) = a(i)%salary(1) * b1
        a(i)%salary(5) = a(i)%salary(1) * b2
        a(i)%salary(6) = a(i)%salary(1) * b3
        a(i)%salary(7) = a(i)%salary(1) * b4
    end do
end subroutine

subroutine tax(a, m)
    use shuju
    type(clerk) a(m)
    real t
    do i = 1, m
        t = a(i).salary(3)
        do j = 4, 7
            t = t - a(i).salary(j)
        end do
        t = t - 3500
        if (t < 0) then
            a(i).salary(8) = 0
        else if (t <= 1500) then
            a(i).salary(8) = t * 0.03
        else if (t <= 4500) then
            a(i).salary(8) = t * 0.1 - 105
        else if (t <= 9000) then
            a(i).salary(8) = t * 0.2 - 555
        else if (t < 35000) then
            a(i).salary(8) = t * 0.25 - 1005
        else if (t < 55000) then
            a(i).salary(8) = t * 0.3 - 2755
        else if (t < 80000) then
            a(i).salary(8) = t * 0.35 - 5505
        else
            a(i).salary(8) = t * 0.45 - 13505
        end if
    end do
end subroutine

subroutine net_wage(a, m)
    use shuju
    type(clerk) a(m)
    do i = 1, m
        a(i).salary(9) = a(i).salary(3)
        do j = 4, 8
            a(i).salary(9) = a(i).salary(9) - a(i).salary(j)
        end do
    end do
end subroutine

subroutine find(a, m, name, jieguo)
    use shuju
    type(clerk) a(m)
    character * (*) name
    logical jieguo
    do i = 1, m
        if (name == a(i).name) then
        jieguo = .true.
        exit
        end if
    end do
    if (i > m) jieguo = .false.
end subroutine

subroutine add(a, m, name, jieguo)
    use shuju
    type(clerk) a(m + 1)
    character * (*), name
    logical jieguo
    integer p
    call find(a, m, name, jieguo)
    if (jieguo == .false.) then
        print *, "请输入新员工工号"
        read *, a(m + 1)%num
        a(m + 1)%name = name
        print *, "请输入新员工的部门"
        read *, a(m + 1)%department
        print *, "请输入新员工的基本工资"
        read *, a(m + 1)%salary(1)
        print *, "请输入新员工的奖金"
        read *, a(m + 1)%salary(2)
    else
        print *, name, "是老员工"
    end if
end subroutine

subroutine delete(a, m, name, jieguo, n, path)
    use shuju
    type(clerk) a(m)
    character * (*), name, path
    logical jieguo
    integer p, n
    n = m
    call find(a, m, name, jieguo)
    if (jieguo == .true.) then
        do i = 1, m
            if (name == a(i)%name) then
            p = i
            exit
            end if
        end do
        if (p < m) then
            a(p : m - 1) = a(p + 1 : m)
            n = n - 1
        else
            n = n - 1
        end if
        print *, name, "已从本单位职工信息中删除"
        open(12, file = path)
        do j = 1, n
            write(12, 20), a(j)
        end do
    else
        print * , name, "不是本单位职工"
    end if
    20 format(i8, a6, 2x, a6, 2x, 9f10.2)
end subroutine

subroutine select(a, m, department, path)
    use shuju
    type(clerk) a(m)
    character * (*), department, path
    open(30, file = path)
    do i = 1, m
        if (a(i)%department == department) then
        write(30, 20), a(i)
        end if
    end do
    20 format(i8, a6, 2x, a6, 2x, 9f10.2)
    close(30)
end subroutine

program example11_4
    use shuju
    type(clerk), allocatable :: xibei(:)
    integer m, n, k
    logical jieguo
    print *, "请输入原有员工人数"
    read *, m
    print *, "请输入新员工人数"
    read *, n
    allocate(xibei(m + n))
    call input(xibei, m, n, "shuju.txt")
    call add(xibei, m, "张小芳", jieguo)
    call add(xibei, m + 1, "梅兰芳", jieguo)
    call wage(xibei, m + n, 0.02, 0.02, 0.01, 0.05)
    call tax(xibei, m + n)
    call net_wage(xibei, m + n)
    open(30, file = "wage_clerk.txt")
    do i = 1, m + n
        write(30, 100), xibei(i)
    end do
    close(30)
    call find(xibei, m + n, "张小芳", jieguo)
    call delete(xibei, m + n, "叶檀", jieguo, k, "shuju_del.txt")
    call select(xibei, k, "广告部", "department_shuju.txt")
    100 format(i8, a6, 2x, a6, 2x, 9f10.2)
end program
