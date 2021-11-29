//
//  main.cpp
//  EX7-Q10 小希练打字
//
//  Created by Rain Chen on 2021/11/28.
//

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct word {
    int book = 0;
    string s;
};
char direction(char x) {
    if (x >= 'h' && x <= 'p') {
        return 'r';
    } else if (x == 'u' || x == 'y' || x == 'U' || x == 'Y') {
        return 'r';
    } else if (x >= 'H' && x <= 'P') {
        return 'r';
    } else {
        return 'l';
    }
}
int timeword(word x) {
    int T = 2;
    int len = (int)x.s.length();
    for (int i = 1; i < len; i++) {
        if (direction(x.s[i]) == direction(x.s[i - 1])) {
            T += 4;
        } else {
            T += 2;
        }
    }
    if (x.book == 1) {
        T /= 2;
    }
    return T;
}
int main() {
    int n = 0;    //  The number of the words input
    cin >> n;
    int t = 0;
    word w[n];
    for (int i = 0; i < n; i++) {
        cin >> w[i].s;
        for (int j = 0; j < i; j++) {
            if (w[j].s == w[i].s) {
                w[i].book = 1;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        t += timeword(w[i]);
    }
    cout << t << endl;
    return 0;
}
