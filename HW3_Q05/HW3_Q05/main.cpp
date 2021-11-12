//
//  main.cpp
//  HW3_Q05 求一个数的位数
//
//  Created by cyrain on 2021/10/15.
//

#include <iostream>
int main()
{
    using namespace std;
    int n = 0, num = 1;
    cin >> n;
    for (; ; )
    {
        if (n / 10 != 0)
        {
            num++;
            n = n / 10;
        }
        else
        {
            cout << num << endl;
            break;
        }
    }
    return 0;
}
