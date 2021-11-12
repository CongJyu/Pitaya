//
//  main.cpp
//  EX4_Q23 今夕何夕
//
//  Created by cyrain on 2021/10/25.
//

#include <iostream>
using namespace std;
bool answer(int);
void next(int, bool, bool);
int main() {
    bool x, y;
    int n = 0, i, p1;
    char p2;
    cin >> n;
    int year[n];
    int month[n];
    for (i = 0; i < n; i++) {
        cin >> year[i] >> p2 >> month[i] >> p2 >> p1;
    }
    for (i = 0; i < n; i++) {
        y = false;
        x = answer(year[i]);
        if (month[i] <= 2) {
            y = true;
        }
        next(year[i], x, y);
    }
    return 0;
}
bool answer(int year) {
    bool x = 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        x = 1;
    }
    return x;
}
void next(int year, bool x, bool y) {
    int sum = 0;
    int count = 0;
    do {
        if (answer(year + count) == false) {
            if (y == false) {
                if (answer(year + count + 1)) {
                    sum += 366;
                    goto here;
                } else {
                    sum += 365;
                    goto here;
                }
            } else {
                sum += 365;
                goto here;
            }
        } else {
            if (y == false) {
                sum += 365;
                goto here;
            } else {
                sum += 366;
                goto here;
            }
        }
        here:
        count++;
    } while (sum % 7 != 0);
    cout << year + count << endl;
}
