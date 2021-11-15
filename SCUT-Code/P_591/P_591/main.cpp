//
//  main.cpp
//  P_591
//
//  Created by cyrain on 2021/11/4.
//

#include <iostream>
using namespace std;
int main() {
    double usr = 1.0;
    int month = 0;
    int rate = 0;
    char c;
    while (true) {
        cin >> rate;
        if (rate == -1) {
            return 0;
        } else {
            cin >> c;
            while (true) {
                usr += usr * (rate / 100.0);
                month++;
                if (usr >= 2.5) {
                    cout << month << endl;
                    month = 0;
                    usr = 1.0;
                    break;
                } else {
                    continue;
                }
            }
        }
    }
    return 0;
}
