//
//  main.cpp
//  EX2-Q01 支票代码输出
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <iomanip>
int main() {
    using namespace std;
    int num;
    double price;
    cin >> num >> price;
    cout << setw(8) << setfill('0') << num << endl;
    cout << fixed << setprecision(2) << price << endl;
    return 0;
}
