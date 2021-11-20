//
//  main.cpp
//  EX4-Q21 懒惰的松雅
//
//  Created by cyrain on 2021/10/25.
//

#include <iostream>
#include <cstring>
int main() {
    using namespace std;
    int x;
    cin >> x;    //  按钮每次延迟x分钟
    int hh, mm;
    cin >> hh >> mm;    //  起床时间
    string hs, ms;    //  起床时间字符串
    int times = 0;    //  按按钮次数
    hs = to_string(hh);
    ms = to_string(mm);
    if (hs.find("7") != string::npos || ms.find("7") != string::npos) {
        times = 0;
    } else {
        while (1) {
            mm -= x;
            if (mm < 0) {
                hh--;
                mm += 60;
            }
            if (hh < 0) {
                hh += 24;
            }
            ms = to_string(mm);
            hs = to_string(hh);
            if (ms.find("7") != string::npos
                || hs.find("7") != string::npos) {
                times++;
                break;
            } else {
                times++;
            }
        }
    }
    cout << times << endl;
    return 0;
}

