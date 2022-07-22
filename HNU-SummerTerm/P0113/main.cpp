// p0113

#include <iostream>
#include <string>

using namespace std;

long long oct_to_ten(string x) {
    long long len{(long long) x.length()}, result{};
    long long fac{1};
    for (int i{}; i < len; ++i) {
        for (int j{}; j < len - i - 1; ++j) {
            fac *= 8;
        }
        result += (int) (x[i] - '0') * fac;
        fac = 1;
    }
    return result;
}

void solution() {
    string mile;
    cin >> mile;
    for (int i{}; i < (int) mile.length(); ++i) {
        if (mile[i] >= '3' and mile[i] <= '8') {
            mile[i]--;
        } else if (mile[i] >= '8') {
            mile[i] -= 2;
        }
    }
    cout << oct_to_ten(mile) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
