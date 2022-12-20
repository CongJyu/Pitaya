//
//  main.cpp
//  Open-07 最小时间差
//
//  Created by Rain Chen on 2021/11/20.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    int h = 0, m = 0, time = 0;
    char c;
    long long delta = 0, min = 24 * 60;
    int * ptr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> h >> c >> m;
        time = 60 * h + m;
        ptr[i] = time;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            delta = abs(ptr[i] - ptr[j]);
            if (delta >= 12 * 60) {
                delta = 24 * 60 - delta;
            }
            if (delta < min) {
                min = delta;
            }
        }
    }
    cout << min << endl;
    return 0;
}
