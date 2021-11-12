//
//  main.cpp
//  EX3_Q15
//
//  Created by cyrain on 2021/10/12.
//

#include <iostream>
#include <iomanip>
int main()
{
    using namespace std;
    double x = 0.0, y = 0.0;
    cin >> x;
    if (x > 2 && x <= 10)
    {
        y = x * (x + 2);
    }
    else if (x > -1 && x <= 2)
    {
        y = 2 * x;
    }
    else if (x <= -1)
    {
        y = x - 1;
    }
    cout << fixed << setprecision(6) << y << endl;
    return 0;
}
