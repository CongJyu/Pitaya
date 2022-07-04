program examp2
    integer A, B, C, MAX
    print * , "请输入三个整数"
    read * , A, B, C
    MAX = A
    if (B > MAX) MAX = B 
    if (C > MAX) MAX = C 
    print * , MAX 
end 
