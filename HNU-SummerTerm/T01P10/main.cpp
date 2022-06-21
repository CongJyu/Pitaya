// t01p10

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

string to_bin(int num) {
    string bin_result;
    while (num > 0) {
        bin_result = to_string(num % 2) + bin_result;
        num /= 2;
    }
    return bin_result;
}

int main() {
    int n = 0;
    cin >> n;
    while (n--) {
        int a = 0, b = 0, c = 0, d = 0;
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        // cout << a << b << c << d << endl;
        string bin_a = to_bin(a);
        string bin_b = to_bin(b);
        string bin_c = to_bin(c);
        string bin_d = to_bin(d);
        int num = 0;
        for (char i : bin_a) {
            if (i == '1') {
                num++;
            }
        }
        for (char i : bin_b) {
            if (i == '1') {
                num++;
            }
        }
        for (char i : bin_c) {
            if (i == '1') {
                num++;
            }
        }
        for (char i : bin_d) {
            if (i == '1') {
                num++;
            }
        }
        cout << num << endl;
    }
    return 0;
}
