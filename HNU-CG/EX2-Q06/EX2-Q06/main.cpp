//
//  main.cpp
//  EX2-Q06 温度表达转化
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <iomanip>
int main() {
    using namespace std;
    double ctemp, ftemp;
    cin >> ftemp;
    ctemp = 5 * (ftemp - 32) / 9;
    cout << fixed << setprecision(5) << ctemp << endl;
    return 0;
}
