//
//  main.cpp
//  Open-11 求平均分
//
//  Created by Rain Chen on 2021/11/20.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n = 0, score = 0, sum = 0;
    double ave = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> score;
        sum += score;
    }
    if (sum % n == 0) {
        ave = sum / n;
        cout << ave << endl;
    } else {
        ave = (sum * 1.0) / n;
        cout << fixed << setprecision(2) << ave << endl;
    }
    return 0;
}
