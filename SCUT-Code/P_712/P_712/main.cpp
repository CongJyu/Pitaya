//
//  main.cpp
//  P_712 传奇ID
//
//  Created by Rain Chen on 2021/12/28.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
    long long n = 0;
    cin >> n;
    long long a = 0;
    long long b = 0;
    long long l = 0;
    long long e = 0;
    long long r = 0;
    long long t = 0;
    long long x = 0;
    long long w = 0;
    long long z = 0;
    for (long long i = 0; i < n; i++) {
        char id[20] = {'\0'};
        cin >> id;
        for (long long j = 0; j < 20; j++) {
            char cmp = id[j];
            switch (cmp) {
                case 'a':
                    a++;
                    break;
                case 'b':
                    b++;
                    break;
                case 'l':
                    l++;
                    break;
                case 'e':
                    e++;
                    break;
                case 'r':
                    r++;
                    break;
                case 't':
                    t++;
                    break;
                case 'x':
                    x++;
                    break;
                case 'w':
                    w++;
                    break;
                case 'z':
                    z++;
                    break;
                default:
                    break;
            }
        }
    }
    if (a > 0 && b > 0 && l > 0 &&
        e > 0 && r > 0 && t > 0 &&
        x > 0 && w > 0 && z > 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
