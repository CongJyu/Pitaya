// p0410

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    for (int i{1}; i <= n; ++i) {
        if (to_string(i).find('7') != string::npos) {
            cout << i << endl;
        } else {
            if (i % 7 == 0) {
                cout << i << endl;
            }
        }
    }
    return 0;
}
