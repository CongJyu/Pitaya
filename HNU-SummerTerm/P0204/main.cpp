// p0204

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a{}, b{};
    while (cin >> a >> b) {
        int a_fac_sum{}, b_fac_sum{};
        for (int i{1}; i < a; ++i) {
            if (a % i == 0) {
                a_fac_sum += i;
            }
        }
        for (int i{1}; i < b; ++i) {
            if (b % i == 0) {
                b_fac_sum += i;
            }
        }
        if (a == b_fac_sum and b == a_fac_sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
