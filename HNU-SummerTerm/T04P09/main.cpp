// t04p09

#include <iostream>
#include <string>

using namespace std;

bool check(string x) {
    int len = (int) x.length();
    for (int i = 0; i < len / 2; ++i) {
        if (x[i] != x[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 0;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        int min_length = n - 1;
        string s;
        cin >> s;
        for (int j = 0; j < n - 1; ++j) {
            if (check(s.substr(j))) {
                min_length = j;
                break;
            }
        }
        cout << min_length << endl;
    }
    return 0;
}
