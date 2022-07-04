program exercise6
    ! read an existing file: ex6.txt
    implicit none
    character (len = 20) :: filename
    character (len = 80) :: msg
    integer :: nvals = 0
    integer :: status1, status2
    real :: value
    write(*, *) "Please enter input file name"
    read(*, *) filename
    write(*, 1000) filename
    ! input filename
    1000 format("The input file name is: ", a)
    ! open file: filename(ex6.txt)
    open(unit = 3, file = filename, status = "old", action = "read", iostat = status1, iomsg = msg)
    openif:if(status1 == 0) then
        readloop:do
            read(3, *, iostat = status2) value
            if (status2 /= 0) exit
            nvals = nvals + 1
            write(*, 1010) nvals, value
            1010 format("Line", i6, " :Value = ", f10.4)
        end do readloop
        readif:if (status2 > 0) then
            write(*, 1020) nvals + 1
            1020 format("An error occurred reading line ", i6, "values in the file.")
        end if readif
    else openif
        write(*, 1040) status1
        1040 format("Error open file: IOSTAT = ", i6)
        write(*, 1050) trim(msg)
        1050 format(a)
    end if openif
    ! close the file: ex6.txt
    close(unit = 3)
end program exercise6
