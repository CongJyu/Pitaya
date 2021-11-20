//
//  main.cpp
//  P_558
//
//  Created by cyrain on 2021/10/17.
//

#include <iostream>
#include <algorithm>

int a[100] = {0};

void large(int);
int main()
{
    for (int i = 0; i <= 100; ++i)
    {
        std::cin >> a[i];
        if (a[i] < 0)
        {
            break;
        }
    }
    for (int j = 0; j <= 100; j += 10)
    {
        if (a[j] > 0)
        {
            large(j);
        }
    }
    return 0;
}

void large(int n)
{
    using namespace std;
    sort(a + n, a + n + 10);
    cout << "Largest is " << a[n + 9] << endl;
    cout << "Second largest is " << a[n + 8] << endl;
}
