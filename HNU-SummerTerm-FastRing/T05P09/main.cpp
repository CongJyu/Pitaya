// t05p09

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int *num = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    int sum, max_sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            sum = 0;
            for (int k = 0; k < i; ++k) {
                sum += num[k];
            }
            for (int k = i; k <= j; ++k) {
                sum += 1 - num[k];
            }
            for (int k = j + 1; k < n; ++k) {
                sum += num[k];
            }
            if (sum > max_sum) {
                max_sum = sum;
            }
        }
    }
    cout << max_sum << endl;
    delete[] num;
    return 0;
}
