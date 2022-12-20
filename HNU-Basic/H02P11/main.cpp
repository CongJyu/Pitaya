// h02p11

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int mi, yd, ft, in;
    mi = n / (1760 * 3 * 12);
    yd = (n - mi * 1760 * 3 * 12) / (3 * 12);
    ft = (n - mi * 1760 * 3 * 12 - yd * 3 * 12) / 12;
    in = n % 12;
    if (mi != 0) {
        cout << mi << " mi ";
    }
    if (yd != 0) {
        cout << yd << " yd ";
    }
    if (ft != 0) {
        cout << ft << " ft ";
    }
    if (in != 0) {
        cout << in << " in";
    }
    cout << endl;
    return 0;
}
