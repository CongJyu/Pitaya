// p0302

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string number;
    cin >> number;
    int cnt[10]{0};
    for (int i{}; i < (int) number.length(); ++i) {
        cnt[number[i] - '0']++;
    }
    for (int i{}; i < 10; ++i) {
        if (cnt[i] != 0) {
            cout << i << ":" << cnt[i] << endl;
        }
    }
    return 0;
}
