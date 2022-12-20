//
//  main.cpp
//  P_595 Tutorial 5.3 Calculating Number of Seconds
//
//  Created by Rain Chen on 2021/12/28.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a1, b1, c1, a2, b2, c2;
    while (true) {
        cin >> a1;
        if (a1 == -1) {
            break;
        }
        cin >> b1 >> c1;
        cin >> a2 >> b2 >> c2;
        int time1, time2;
        time1 = a1 * 3600 + b1 * 60 + c1;
        time2 = a2 * 3600 + b2 * 60 + c2;
        cout << abs(time1 - time2) << endl;
    }
    return 0;
}
