//
//  main.cpp
//  EX4_Q03 牛友
//
//  Created by cyrain on 2021/10/18.
//

#include <iostream>
int main()
{
    using namespace std;
    int n, m, n1 = 0, m1 = 0;
    cin >> n;
    n--;
    do
    {
        n++;
        n1 = 0;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
                n1 += i;
        }
        m = n1;
        m1 = 0;
        for (int i = 1; i < m; i++)
        {
            if (m % i == 0)
                m1 += i;
        }
    } while (m1 != n);
    cout << n << " " << m << endl;
    return 0;
}
