//
//  main.cpp
//  HW3_Q08 数字魔术
//
//  Created by cyrain on 2021/10/16.
//  

#include <iostream>
int main()
{
    using namespace std;
    int x = 0;
    int m = 0, a = 0, b = 0, c = 0;
    cin >> m;
    for (c = 0; c <= 9; c++)
    {
        for (b = 0; b <= 9; b++)
        {
            for (a = 1; a <= 9; a++)
            {
                x = 100 * a + 10 * c + b
                + 100 * b + 10 * a + c
                + 100 * b + 10 * c + a
                + 100 * c + 10 * a + b
                + 100 * c + 10 * b + a;
                if (x == m)
                {
                    cout << 100 * a + 10 * b + c << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
