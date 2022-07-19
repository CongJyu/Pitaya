// t03p11

#include <iostream>
#include <string>

using namespace std;

string number[10] = {
        "1100000110",
        "1101100111",
        "0010000010",
        "0101000111",
        "0100100010",
        "0000011011",
        "0000011010",
        "1101000111",
        "1111111111",
        "0101010111"
};

int main() {
    while (true) {
        int a[10] = {0};
        cin >> a[0];
        if (a[0] == -1) {
            break;
        }
        for (int i = 1; i < 10; ++i) {
            cin >> a[i];
        }
        bool flag = true;
        for (int i = 1; i < 10; ++i) {
            if (number[a[i - 1]][a[i]] == '0') {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
