// t01p05

#include <iostream>
#include <string>

using namespace std;

int main() {
    int m = 0, n = 0;
    cin >> m >> n;
    for (int i = 1; i <= m; ++i) {
        string s = to_string(i);
        string tar = to_string(n);
        if ((i % n == 0) || (s.find(tar) != string::npos)) {
            cout << i << " ";
        }
    }
    return 0;
}
