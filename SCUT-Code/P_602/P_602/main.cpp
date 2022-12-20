//
//  main.cpp
//  P_602 Tutorial 6.1 Distance Between Points
//
//  Created by Rain Chen on 2022/1/8.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0;
    while (true) {
        cin >> x1;
        if (x1 == -1) {
            break;
        }
        cin >> y1 >> x2 >> y2;
        double dis = 0.0;
        dis = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        cout << fixed << setprecision(1) << dis << endl;
    }
    return 0;
}
