//
//  main.cpp
//  EX3_Q05
//
//  Created by cyrain on 2021/10/10.
//

#include <iostream>
#include <cstdio>
int main()
{
    using namespace std;
    int n = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    int i = 0, sum = 0;
    cin >> n;
    char str;
    for (i = 0; i < n; ++i)
    {
        cin >> str;
        if (str >= '0' && str <= '9')
        {
            n1++;
            int num = 0;
            num = int(str - '0');
            sum = sum + num;
        }
        else if (str >= 'a' && str <= 'z')
        {
            n2++;
        }
        else if (str >= 'A' && str <= 'Z')
        {
            n3++;
        }
        else
        {
            n4++;
        }
    }
    cout << n3 << " " << n2 << " " << n1 << " " << n4 << endl;
    if (n1 != 0)
    {
        cout << sum << endl;
    }
    return 0;
}
