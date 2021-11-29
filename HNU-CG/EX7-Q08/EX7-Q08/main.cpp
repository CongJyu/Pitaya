//
//  main.cpp
//  EX7-Q08 字符串左删除
//
//  Created by Rain Chen on 2021/11/23.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    string m, n, a, b, k;
    int sum, p, q, t;
    cin >> m >> n;
    p = (int)m.length();
    q = (int)n.length();
    if (m == n) {
        cout << "0" << endl;
    } else {
        if (p < q) {
            t = p;
            p = q;
            q = t;
            k = m;
            m = n;
            n = k;
        }
        a = m;
        for (int i = 0; i < p; i++) {
            b = n;
            a = a.erase(0, 1);
            if (b == a) {
                sum = p + q - ((int)b.length()) * 2;
                cout << sum << endl;
                return 0;
            }
            for (int j = 0; j < q; j++) {
                if (b == a) {
                    sum = p + q - ((int)b.length()) * 2;
                    cout << sum << endl;
                    return 0;
                }
                b = b.erase(0, 1);
                if (b == a) {
                    sum = p + q - ((int)b.length()) * 2;
                    cout << sum << endl;
                    return 0;
                }
            }
        }
    }
}
