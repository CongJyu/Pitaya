// t04p03

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    while (true) {
        int n = 0;
        cin >> n;
        if (n == 0) {
            break;
        }
        char *str = new char[n];
        for (int i = 0; i < n; ++i) {
            cin >> str[i];
        }
        int ab_num = 0, ba_num = 0;
        for (int i = 1; i < n; ++i) {
            if (str[i - 1] == 'a' && str[i] == 'b') {
                ab_num++;
            } else if (str[i - 1] == 'b' && str[i] == 'a') {
                ba_num++;
            }
        }
        cout << ab_num - ba_num << endl;
        delete[] str;
    }
    return 0;
}
