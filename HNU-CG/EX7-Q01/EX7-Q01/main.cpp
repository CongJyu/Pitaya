//
//  main.cpp
//  EX7-Q01 飞来飞去
//
//  Created by Rain Chen on 2021/11/20.
//

#include <iostream>
using namespace std;
int main() {
    int T = 0, n = 0, stt = 0, tts = 0;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> n;
        char * ptr = new char [n];
        for (int j = 0; j < n; j++) {
            cin >> ptr[j];
        }
        for (int j = 0; j < n - 1; j++) {
            if (ptr[j] == 'S' && ptr[j + 1] == 'T') {
                stt++;
            } else if (ptr[j] == 'T' && ptr[j + 1] == 'S') {
                tts++;
            } else {
                continue;
            }
        }
        if (stt > tts) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        delete[] ptr;
        stt = 0;
        tts = 0;
    }
    return 0;
}
