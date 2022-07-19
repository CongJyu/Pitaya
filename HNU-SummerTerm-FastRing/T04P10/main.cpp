// t04p10

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        string s = to_string(i);
        if (s.find('7') != string::npos) {
            cout << i << endl;
            continue;
        } else {
            if (i % 7 == 0) {
                cout << i << endl;
                continue;
            }
        }
    }
    return 0;
}
