//
//  main.cpp
//  HW4_Q01 不吉利的日期
//
//  Created by cyrain on 2021/10/19.
//

#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int w;    //  一月一日的星期
    int i, j;
    int sum_day;    //  每个月的天数
    int k_friday;    //  当前月份的周五
    cin >> w;
        k_friday = w;
        for (i=1; i < 13; i++)
        {
            sum_day = 1;
            for (j=0; j < month[i]; j++)
            {
                sum_day = sum_day + 1;
                k_friday = k_friday + 1;
                if (k_friday > 7)
                {
                    k_friday = 1;
                }
                if(k_friday == 5 && sum_day == 13)
                {
                    cout << i << " ";
                }
            }
        }
    return 0;
}
