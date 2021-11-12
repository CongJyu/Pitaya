//
//  main.cpp
//  HW4_Q10 打印等腰三角形
//
//  Created by cyrain on 2021/10/20.
//

#include <iostream>
using namespace std;
int tri(int);
int main()
{
    int n;
    cin >> n;
    tri(n);
    return 0;
}
int tri(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 0; j <= 2 * i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
