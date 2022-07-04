program homework
    implicit none
    integer age
    real income, tax
    print * , "请输入年龄和年收入："
    read * , age, income
    income = income / 12
    if (age .lt. 50) then
        if (income .lt. 2000) then
            tax = income * 0.05
        else if (income .ge. 2000 .and. income .le. 8000) then
            tax = (income - 2000) * 0.10 + 2000 * 0.05
        else
            tax = (income - 8000) * 0.15 + 6000 * 0.10 + 2000 * 0.05
        endif
    else
        if (income .lt. 2000) then
            tax = income * 0.03
        else if (income .ge. 2000 .and. income .le. 8000) then
            tax = (income - 2000) * 0.07 + 2000 * 0.03
        else
            tax = (income - 8000) * 0.10 + 6000 * 0.07 + 2000 * 0.03
        endif
    endif
    tax = tax * 12
    print * , "应缴纳的税金为：", tax
end program
