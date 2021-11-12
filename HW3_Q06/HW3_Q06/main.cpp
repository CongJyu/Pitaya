//
//  main.cpp
//  HW3_Q06 湖南省阶梯电费
//
//  Created by cyrain on 2021/10/16.
//

#include <iostream>
int main()
{
    using namespace std;
    int month = 0, kw = 0;
    float fee = 0;
    cin >> month >> kw;
    if (kw <= 180)
    {
        fee = kw * 0.588;
    }
    else
    {
        if (month == 1 || month == 2 || month == 6 || month == 7 || month == 8 || month == 12)
        {
            if (kw > 180 && kw <= 450)
            {
                fee = 180 * 0.588 + (kw - 180) * 0.638;
            }
            else if (kw > 450)
            {
                fee = 180 * 0.588 + (450 - 180) * 0.638 + (kw - 450) * 0.888;
            }
        }
        else
        {
            if (kw > 180 && kw <= 350)
            {
                fee = 180 * 0.588 + (kw - 180) * 0.638;
            }
            else
            {
                fee = 180 * 0.588 + (350 -180) * 0.638 + (kw - 350) * 0.888;
            }
        }
    }
    cout << fee << endl;
    return 0;
}
