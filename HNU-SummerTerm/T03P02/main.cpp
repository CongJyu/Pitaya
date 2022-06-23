// t03p02

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string input;
    cin >> input;
    sort(input.begin(), input.end());
    int cnt = 1;
    cout << input[0] << ":";
    if ((int) input.length() == 1) {
        cout << 1 << endl;
    }
    for (int i = 1; i < (int) input.length(); ++i) {
        if (input[i] != input[i - 1]) {
            cout << cnt << endl;
            cout << input[i] << ":";
            cnt = 1;
        }
        if (input[i] == input[i - 1]) {
            cnt++;
        }
        if (i == (int) input.length() - 1) {
            cout << cnt << endl;
            cnt = 0;
        }
    }
    return 0;
}
