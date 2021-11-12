//
//  main.cpp
//  HW4_Q05 求1!+2!3!+4!+...+n!
//
//  Created by cyrain on 2021/10/19.
//

#include <iostream>
int main()
{
    using namespace std;
    long long t, n = 1, sum = 0;
    cin >> t;
    for (long long i = 1; i <= t; i++)
    {
        n = n * i;
        sum += n;
    }
    cout << sum << endl;
    return 0;
}
