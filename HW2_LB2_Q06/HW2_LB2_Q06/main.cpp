//
//  main.cpp
//  HW2_LB2_Q06
//
//  Created by cyrain on 2021/10/9.
//

#include <iostream>
#include <iomanip>
int main()
{
    using namespace std;
    const float h = 3000.0;
    const float g = 9.8;
    const float v = 200.0;
    float t = 0.0;
    float x = 0.0, y = 0.0;
    cin >> t;
    x = v * t;
    y = h - (g * t * t) / 2;
    cout << "(";
    cout << x << ",";
    cout << fixed << setprecision(1) << y;
    cout << ")";
    return 0;
}
