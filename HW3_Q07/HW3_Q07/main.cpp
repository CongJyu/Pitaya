//
//  main.cpp
//  HW3_Q07 判断水仙花数
//
//  Created by cyrain on 2021/10/16.
//

#include <iostream>
int main()
{
    using namespace std;
    int n = 0, cons = 0;
    cin >> n;
    int a = 0, b = 0, c = 0;
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;
    cons = a * a * a + b * b * b + c * c * c;
    if (cons == n)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
