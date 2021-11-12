//
//  main.cpp
//  HW4_Q06 求多少种可能性
//
//  Created by cyrain on 2021/10/19.
//

#include <iostream>
int main()
{
    using namespace std;
    long long x;
    cin >> x;
    long long szb = 0, kmj, cdf;
    long long total, counter = 0;
    for (szb = 0; szb < 1000; szb++)
    {
        for (kmj = 0; kmj < 1000; kmj++)
        {
            for (cdf = 0; cdf < 1000; cdf++)
            {
                total = 5 * szb + 3 * kmj + cdf;
                if (total == x)
                    counter++;
            }
        }
    }
    cout << counter << endl;
    return 0;
}
