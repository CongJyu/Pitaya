program exercise3
    implicit none
    integer i
    integer maxS
    integer minS
    real aveS
    real :: sumS = 0
    type clerk
        integer number
        character * 10 name
        integer age
        character * 10 position
        integer salary
    end type
    type(clerk) :: record(10)
    open(1, file = "clerk-record.txt")
    do i = 1, 10
        read(1, *) record(i) % number, record(i) % name, record(i) % age,&
        record(i) % position, record(i) % salary
    end do
    maxS = record(1) % salary
    minS = record(1) % salary
    do i = 1, 10
        if (maxS < record(i) % salary) then
            maxS = record(i) % salary
        else
            maxS = maxS
        end if
    end do
    do i = 1, 10
        if (minS > record(i) % salary) then
            minS = record(i) % salary
        else
            minS = minS
        end if
    end do
    do i = 1, 10
        if (record(i) % salary == maxS) then
            print * , "HIGHEST:", record(i) % number, record(i) % name, record(i) % age,&
            record(i) % position, record(i) % salary
        end if
        if (record(i) % salary == minS) then
            print * , "LOWEST:", record(i) % number, record(i) % name, record(i) % age,&
            record(i) % position, record(i) % salary
        end if
    end do
    do i = 1, 10
        sumS = sumS + record(i) % salary
    end do
    print * , "SUM:", sumS
    aveS = sumS / 10
    print * , "AVERAGE:", aveS
end program exercise3
