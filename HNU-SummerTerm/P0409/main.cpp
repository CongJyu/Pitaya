// p0409

#include <iostream>
#include <string>

using namespace std;

bool check(string x) {
    int len{(int) x.length()};
    for (int i{}; i < len / 2; ++i) {
        if (x[i] != x[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        int min_len{n - 1};
        string s;
        cin >> s;
        for (int j{}; j < n - 1; ++j) {
            if (check(s.substr(j))) {
                min_len = j;
                break;
            }
        }
        cout << min_len << endl;
    }
    return 0;
}
