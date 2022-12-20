// p0319

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s, sr;
    cin >> s;
    int num_a[5000], num_b[5000];
    for (int i{}; i < (int) s.length(); ++i) {
        if (s[i] == 'a' and i == 0) {
            num_a[i] = 1;
            num_b[i] = 0;
        } else if (s[i] == 'b' and i == 0) {
            num_a[i] = 0;
            num_b[i] = 1;
        } else if (s[i] == 'a') {
            num_a[i] = num_a[i - 1] + 1;
            num_b[i] = num_b[i - 1];
        } else if (s[i] == 'b') {
            num_a[i] = num_a[i - 1];
            num_b[i] = num_b[i - 1] + 1;
        }
    }
    int max{};
    for (int i{}; i < (int) s.length(); ++i) {
        for (int j{}; j < i; ++j) {
            int left{num_a[j]};
            int mid{num_b[i] - num_b[j - 1]};
            int right{num_a[(int) s.length() - 1] - num_a[i - 1]};
            int sum{left + mid + right};
            if (sum > max) {
                max = sum;
            }
        }
    }
    cout << max << endl;
    return 0;
}
