//
//  main.cpp
//  HW2-Q01 计算分数的浮点数值
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <iomanip>
int main() {
    using namespace std;
    int a = 0, b = 0;
    double out = 0.0;
    cin >> a >> b;
    out = (a / 1.0) / (b / 1.0);
    cout << fixed << setprecision(9) << out << endl;
    return 0;
}
