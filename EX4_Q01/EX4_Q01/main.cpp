//
//  main.cpp
//  EX4_Q01 数小木块
//
//  Created by cyrain on 2021/10/18.
//

#include <iostream>
int main()
{
    using namespace std;
//  1 3 6 10 15 21 27 34 ...
    int n = 0;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            i = i + j;
            sum = sum + i;
        }
    }
    cout << sum << endl;
    return 0;
}
