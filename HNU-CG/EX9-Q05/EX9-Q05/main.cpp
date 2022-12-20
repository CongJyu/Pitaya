//
//  main.cpp
//  EX9-Q05 看电影
//
//  Created by Rain Chen on 2021/12/7.
//

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Scientist {
public:
    int lang;
};

class Mv {
public:
    int hao;
    int fc = 0;
    int bj = 0;
    int voi = 0;
    int sub = 0;
    int b(int sci) {
        if (voi == sci) {
            return 2;
        }
        if (sub == sci) {
            return 1;
        } else {
            return 0;
        }
    }
};

int main() {
    int n = 0;
    cin >> n;
    Scientist * a = new Scientist [n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].lang;
    }
    int m = 0;
    cin >> m;
    Mv * b = new Mv [m];
    for (int i = 0; i < m; i++) {
        cin >> b[i].voi;
        b[i].hao = i + 1;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i].b(a[j].lang) == 2) {
                b[i].fc++;
            }
            if (b[i].b(a[j].lang) == 1) {
                b[i].bj++;
            }
        }
    }
    int max = 1;
    for (int i = 1; i < m; i++) {
        if (b[i].fc > b[max - 1].fc) {
            max = b[i].hao;
        } else if (b[i].fc == b[max - 1].fc) {
            if (b[i].bj >= b[max - 1].bj && b[i].bj != 0) {
                max = b[i].hao;
            } else if (b[i].bj < b[max - 1].bj) {
                max = b[max - 1].hao;
            }
        }
    }
    if (max == 0 || (b[max - 1].fc == 0 && b[max - 1].bj == 0)) {
        cout << "unsatisfied" << endl;
        return 0;
    }
    int * c = new int [m];
    c[0] = max;
    int u = 0;
    for (int i = 0; i < m; i++) {
        if (i != max - 1) {
            if (b[max - 1].fc == b[i].fc && b[max - 1].bj == b[i].bj) {
                u++;
                c[u] = i + 1;
            }
        }
    }
    for (int i = 0; i <= u; i++) {
        cout << c[i] << " ";
    }
    delete[] b;
    delete[] a;
    delete[] c;
    cout << endl;
    return 0;
}
