! 计算三角形面积的子程序
real function tri_area(x, y, z)
    real x, y, z, t
    if (x + y > z .and. y + z > x .and. x + z > y) then
        t = (x + y + z) / 2
        tri_area = sqrt(t * (t - x) * (t - y) * (t - z))
    else
        print *, "数据不合理，无法构成三角形."
    end if
end function tri_area

program example9_1
    ! 解决问题 1 的主程序
    real a, b, c, t, area, price, value1
    area = 0
    ! 循环中通过调用函数 tri_area 计算三角形面积
    do i = 1, 4
        read *, a, b, c
        area = area + tri_area(a, b, c)
    end do
    area = area / 666.67
    print *, "六边形土地 ABCDEF 的面积是：", area, "亩"
    read *, price
    value1 = price * area
    print *, "六边形土地 ABCDEF 的价值：", value1, "万元"
end program
