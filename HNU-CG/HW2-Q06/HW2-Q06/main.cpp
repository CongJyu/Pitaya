//
//  main.cpp
//  HW2-Q06 炮弹飞行坐标
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <iomanip>
int main() {
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
