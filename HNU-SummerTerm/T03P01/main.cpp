// t03p01

#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    int na = 0, nb = 0;
    cin >> a >> na >> b >> nb;
    int cnt_a = 0, cnt_b = 0;
    for (char i: a) {
        if (i - '0' == na) {
            cnt_a++;
        }
    }
    for (char i: b) {
        if (i - '0' == nb) {
            cnt_b++;
        }
    }
    int new_a = 0, new_b = 0;
    for (int i = 0; i < cnt_a; ++i) {
        int fac = 1;
        for (int j = 0; j < i; ++j) {
            fac *= 10;
        }
        new_a += na * fac;
    }
    for (int i = 0; i < cnt_b; ++i) {
        int fac = 1;
        for (int j = 0; j < i; ++j) {
            fac *= 10;
        }
        new_b += nb * fac;
    }
    int result = new_a + new_b;
    cout << result << endl;
    return 0;
}
