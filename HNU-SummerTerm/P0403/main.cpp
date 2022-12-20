// p0403

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        string s;
        cin >> s;
        int ab_cnt{}, ba_cnt{};
        for (int i{1}; i < (int) s.length(); ++i) {
            if (s[i - 1] == 'a' and s[i] == 'b') {
                ab_cnt++;
            } else if (s[i - 1] == 'b' and s[i] == 'a') {
                ba_cnt++;
            }
        }
        cout << ab_cnt - ba_cnt << endl;
    }
    return 0;
}
