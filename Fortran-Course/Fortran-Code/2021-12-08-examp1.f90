program examp1
    type student_score
        integer num
        character * 6 name
        real chin, math, eng, ave
    end type
    type(student_score) s1, s2, s3
    s1 = student_score(200901, '张伟', 78.0, 81.0, 69.0, 0)
    s2 = student_score(200902, '李丽', 85.0, 77.0, 80.5, 0)
    s3 = student_score(200903, '赵徳', 80.0, 92.0, 79.0, 0)
    s1 % ave = (s1 % chin + s1 % math + s1 % eng) / 3.0
    s2 % ave = (s2 % chin + s2 % math + s2 % eng) / 3.0
    s3 % ave = (s3 % chin + s3 % math + s3 % eng) / 3.0
    print * , '   学号   姓名   语文   数学   英语   平均成绩'
    print 10, s1
    print 10, s2
    print 10, s3
    10 format(2x, i6, 3x, a4, 4(3x, f4.1))
end program examp1
