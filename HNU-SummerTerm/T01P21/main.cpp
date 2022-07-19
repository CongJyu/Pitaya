// t01p21

#include <iostream>
#include <cstring>

using namespace std;

bool judge(int b, const char N[], int n) {
    int num = 0, yu = 0;
    for (int i = 0; i < n; ++i) {
        if (N[i] <= '9') {
            num = N[i] - 48;
        } else {
            num = N[i] - 87;
        }
        yu = (num * b + yu) % (b - 1);
    }
    if (yu == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    // code
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int b = 0;
        char N[10001];
        cin >> b >> N;
        int len = (int) strlen(N);
        char res = '\0';
        for (int j = 0; j < b; ++j) {
            if (j < 10) {
                N[len] = j + 48;
            } else {
                N[len] = j + 87;
            }
            bool flag = false;
            flag = judge(b, N, len + 1);
            if (flag) {
                if (j < 10) {
                    res = j + 48;
                } else {
                    res = j + 87;
                }
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}
