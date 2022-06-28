// t03p08

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string str_wanted, str_in_shop;
    cin >> str_in_shop >> str_wanted;
    int bleeds_shop[200] = {0};
    int bleeds_want[200] = {0};
    for (char i: str_in_shop) {
        bleeds_shop[i]++;
    }
    for (char i: str_wanted) {
        bleeds_want[i]++;
    }
    int flag = 0;
    int delta = 0;
    for (int i = 0; i < 200; ++i) {
        if (bleeds_shop[i] < bleeds_want[i]) {
            cout << "No" << " ";
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << "Yes" << " ";
    }
    if (flag == 0) {
        for (int i = 0; i < 200; ++i) {
            delta += abs(bleeds_shop[i] - bleeds_want[i]);
        }
    } else {
        for (int i = 0; i < 200; ++i) {
            if (bleeds_want[i] > bleeds_shop[i]) {
                delta += abs(bleeds_shop[i] - bleeds_want[i]);
            }
        }
    }
    cout << delta << endl;
    return 0;
}
