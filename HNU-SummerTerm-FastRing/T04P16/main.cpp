// t04p16

#include <iostream>
#include <cstring>
#include <set>

using namespace std;

inline bool solve(const int &ab, const int &ac, const int &bc, int a[]) {
    int sum = ab + ac + bc;
    if (sum % 2 != 0) {
        return false;
    }
    sum /= 2;
    a[2] = sum - ab;
    a[1] = sum - ac;
    a[0] = sum - bc;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    int s[4950], a[100], n, num_count, i, j, k;
    bool is_proper_sln;
    multiset<int>::iterator sum_pos;
    while (cin >> n) {
        memset(s, 0, sizeof(s));
        if (n == 0) {
            break;
        }
        for (i = 0; i < (n - 1) * n / 2; ++i) {
            cin >> s[i];
        }
        for (i = 0; i < (n - 1) * n / 2; ++i) {
            memset(a, 0, sizeof(a));
            if (!solve(s[0], s[1], s[i], a)) {
                continue;
            }
            is_proper_sln = true;
            multiset<int> sum{s[i]};
            num_count = 3;
            for (j = 2; j < (n - 1) * n / 2; ++j) {
                sum_pos = sum.find(s[j]);
                if (num_count == n) {
                    if (sum_pos == sum.end()) {
                        is_proper_sln = false;
                        break;
                    }
                }
                if (sum_pos != sum.end()) {
                    sum.erase(sum_pos);
                    continue;
                }
                a[num_count] = s[j] - a[0];
                if (a[num_count] <= 0) {
                    break;
                }
                for (k = 1; k < num_count; ++k) {
                    sum.insert(a[num_count] + a[k]);
                }
                num_count++;
            }
            if (num_count == n && is_proper_sln) {
                break;
            }
        }
        for (i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
