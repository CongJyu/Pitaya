// p0308

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string str_wanted, str_in_shop;
    cin >> str_in_shop >> str_wanted;
    int bleeds_shop[200]{0}, bleeds_wanted[200]{0};
    for (int i{}; i < (int) str_in_shop.length(); ++i) {
        bleeds_shop[str_in_shop[i]]++;
    }
    for (int i{}; i < (int) str_wanted.length(); ++i) {
        bleeds_wanted[str_wanted[i]]++;
    }
    int flag{}, delta{};
    for (int i{}; i < 200; ++i) {
        if (bleeds_shop[i] < bleeds_wanted[i]) {
            cout << "No ";
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << "Yes ";
    }
    if (flag == 0) {
        for (int i{}; i < 200; ++i) {
            delta += abs(bleeds_shop[i] - bleeds_wanted[i]);
        }
    } else {
        for (int i{}; i < 200; ++i) {
            if (bleeds_wanted[i] > bleeds_shop[i]) {
                delta += abs(bleeds_shop[i] - bleeds_wanted[i]);
            }
        }
    }
    cout << delta << endl;
    return 0;
}
