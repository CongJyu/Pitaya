//
//  main.cpp
//  EX11-Q01 文件排版
//
//  Created by Rain Chen on 2021/12/27.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream fin("listin.txt");
    ofstream fout("listout.txt");
    string a;
    string b;
    string c;
    int loc = 0;
    int cnt = 0;
    cin >> loc;
    while (!fin.eof()) {
        getline(fin, a);
        if (a == "") {
            continue;
        }
        for (int i = 0; i < int(a.length()); i++) {
            if (a[i] == '\t') {
                a.replace(i, 1, " ");
            }
        }
        for (int i = 0; ; i++) {
            if (a[i] == ' ') {
                a.replace(i, 1, "");
                i--;
            } else {
                cnt = i;
                break;
            }
        }
        for (; ; cnt++) {
            if (a[cnt] == ' ' && a[cnt + 1] == ' ') {
                a.replace(cnt, 1, "");
                cnt--;
            }
            if (a[cnt] == ':') {
                break;
            }
        }
        b = a.substr(0, cnt);
        c = a.substr(cnt + 1);
        for (int i = 0; ; i++) {
            if (c[i] == ' ') {
                c.replace(i, 1, "");
                i--;
            } else {
                cnt = i;
                break;
            }
        }
        for (; cnt < int(c.length()); cnt++) {
            if (c[cnt] == ' ' && c[cnt + 1] == ' ') {
                c.replace(cnt, 1, "");
                cnt--;
            } else {
                break;
            }
        }
        for (int i = int(c.length() - 1); i > 0; i--) {
            if (c[i] == ' ') {
                c.replace(i, 1, "");
            } else {
                break;
            }
        }
        fout.width(loc - 1);
        fout.setf(ios::left);
        fout.fill(' ');
        fout << b << ": " << c << endl;
    }
    fin.close();
    fout.close();
}
