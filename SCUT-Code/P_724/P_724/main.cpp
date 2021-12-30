//
//  main.cpp
//  P_724 ACM赛制介绍
//
//  Created by Rain Chen on 2021/12/28.
//

#include <iostream>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    int * t = new int [n];
    int * s = new int [n];
    for (int i = 0; i < n; i++) {
        cin >> t[i] >> s[i];
    }
    int time = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] != 0) {
            time += t[i] + (s[i] - 1) * 20;
        } else {
            time = time;
        }
    }
    delete [] t;
    delete [] s;
    cout << time << endl;
    return 0;
}
