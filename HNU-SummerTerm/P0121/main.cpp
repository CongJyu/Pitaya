// p0121

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

bool judge(int b, string n, int x) {
    int num, l{};
    for (int i{}; i < x; ++i) {
        if (n[i] <= '9') {
            num = n[i] - 48;
        } else {
            num = n[i] - 87;
        }
        l = (num * b + l) % (b - 1);
    }
    if (l == 0) {
        return true;
    } else {
        return false;
    }
}

void solution() {
    int b{};
    char n[10001]{};
    cin >> b >> n;
    int len{(int) strlen(n)};
    char res = '\0';
    for (int j{}; j < b; ++j) {
        if (j < 10) {
            n[len] = (char) (j + 48);
        } else {
            n[len] = (char) (j + 87);
        }
        bool flag{judge(b, n, len + 1)};
        if (flag) {
            if (j < 10) {
                res = (char) (j + 48);
            } else {
                res = (char) (j + 87);
            }
            break;
        }
    }
    cout << res << endl;
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
