// t02p13

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

struct Phone {
    string num;
    int sum{};
};

bool cmp(const Phone &a, const Phone &b) {
    return a.num < b.num;
}

char shadowing(char ch) {
    char c = '\0';
    if (ch == 'A' || ch == 'B' || ch == 'C') {
        c = '2';
    } else if (ch == 'D' || ch == 'E' || ch == 'F') {
        c = '3';
    } else if (ch == 'G' || ch == 'H' || ch == 'I') {
        c = '4';
    } else if (ch == 'J' || ch == 'K' || ch == 'L') {
        c = '5';
    } else if (ch == 'M' || ch == 'N' || ch == 'O') {
        c = '6';
    } else if (ch == 'P' || ch == 'R' || ch == 'S') {
        c = '7';
    } else if (ch == 'T' || ch == 'U' || ch == 'V') {
        c = '8';
    } else if (ch == 'W' || ch == 'X' || ch == 'Y') {
        c = '9';
    }
    return c;
}

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int t = 0;
    Phone p[100];
    while (n--) {
        string s;
        cin >> s;
        char str1[20];
        strcpy(str1, s.c_str());
        int len = (int) strlen(str1);
        char str2[8];
        int j = 0;
        for (int i = 0; i < len; ++i) {
            if (str1[i] >= '0' && str1[i] <= '9') {
                str2[j] = str1[i];
            } else if (str1[i] >= 'A' && str1[i] < 'Z') {
                str2[j] = shadowing(str1[i]);
            } else {
                continue;
            }
            j++;
            if (j == 3) {
                str2[j] = '-';
                j++;
            }
        }
        str2[j] = '\0';
        string str3(str2);
        if (t != 0) {
            bool b = false;
            for (int k = 0; k < t; ++k) {
                if (str3 == p[k].num) {
                    p[k].sum++;
                    b = true;
                    break;
                }
            }
            if (!b) {
                p[t].num = str3;
                p[t].sum = 1;
                t++;
            }
        } else {
            p[t].num = str3;
            p[t].sum = 1;
            t++;
        }
    }
    sort(p, p + t, cmp);
    for (int i = 0; i < t; ++i) {
        if (p[i].sum > 1) {
            cout << p[i].num << " " << p[i].sum << endl;
        }
    }
    return 0;
}
