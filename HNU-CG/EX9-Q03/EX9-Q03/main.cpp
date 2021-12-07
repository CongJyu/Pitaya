//
//  main.cpp
//  EX9-Q03 招聘
//
//  Created by Rain Chen on 2021/12/6.
//

#include <iostream>
using namespace std;
struct Pj {
    int a[100];
};
int main() {
    int n, i, j, k, s = 0, t;
    cin >> n;
    Pj pj[4];
    for (j = 1; j <= 3; j++) {
        for (i = 1; i <= n; i++) {
            cin >> pj[j].a[i];
        }
    }
    for (i = 1; i <= n; i++) {
        t = 0;
        for (j = 1; j <= n; j++) {
            if (i == j) continue;
            for (k = 1; k <= 3; k++) {
                if (pj[k].a[i] >= pj[k].a[j]) break;
                if (k == 3) {
                    s++;
                    t = 1;
                }
            }
            if (t == 1) {
                break;
            }
        }
    }
    cout << s << endl;
    return 0;
}
