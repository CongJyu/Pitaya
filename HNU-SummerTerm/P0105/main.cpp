// p0105

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int m{}, n{};
    cin >> m >> n;
    for (int i{1}; i <= m; ++i) {
        string ti = to_string(i);
        string tn = to_string(n);
        if (ti.find(tn) != string::npos) {
            cout << i << " ";
        } else {
            if (i % n == 0) {
                cout << i << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
