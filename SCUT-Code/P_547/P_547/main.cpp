//
//  main.cpp
//  P_547 Tutorial 1.4 (Clock Class)
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
using namespace std;

class Clock {
public:
    Clock(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }
    void showin24() {
        cout << hour << ":" << minute << ":" << second;
        cout << endl;
    }
    void showin12() {
        if (hour >= 12) {
            cout << hour - 12 << ":" << minute << ":" << second;
            cout << " p.m." << endl;
        } else {
            cout << hour << ":" << minute << ":" << second;
            cout << " a.m." << endl;
        }
    }
private:
    int hour;
    int minute;
    int second;
};

int main() {
    int hour, minute, second;
    cin >> hour >> minute >> second;
    Clock clock(hour, minute, second);
    clock.showin24();
    clock.showin12();
    return 0;
}
