//
//  main.cpp
//  HW2_LB2_Q03
//
//  Created by cyrain on 2021/10/9.
//

#include <iostream>
#include <iomanip>
int main()
{
    using namespace std;
    double x = 0, a = 0, b = 0, c = 0, d = 0;
    double out = 0;
    cin >> x >> a >> b >> c >> d;
    out = a * x * x * x
        + b * x * x
        + c * x
        + d;
    cout << fixed << setprecision(7) << out;
    return 0;
}
