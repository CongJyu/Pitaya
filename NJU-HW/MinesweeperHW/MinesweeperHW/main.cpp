//
//  main.cpp
//  MinesweeperHW 经典扫雷游戏
//
//  Created by Rain Chen on 2021/11/20.
//

#include <iostream>
using namespace std;
char a[101][101];
int main() {
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 'o') {
                int cnt = 48;
                if (a[i - 1][j] == '*') cnt++;
                if (a[i][j - 1] == '*') cnt++;
                if (a[i + 1][j] == '*') cnt++;
                if (a[i][j + 1] == '*') cnt++;
                if (a[i - 1][j - 1] == '*') cnt++;
                if (a[i + 1][j + 1] == '*') cnt++;
                if (a[i - 1][j + 1] == '*') cnt++;
                if (a[i + 1][j - 1] == '*') cnt++;
                a[i][j] = (char)cnt;
            }
        }
    }
    int edl = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (edl % n == 0 && edl != 0) {
                cout << endl;
            }
            cout << a[i][j];
            edl++;
        }
    }
    return 0;
}
