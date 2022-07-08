// h03p10

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int w = 0, s = 0;
    cin >> w >> s;
    double cost = 0;
    if (s < 250) {
        cost = w * s;
    } else if (s >= 250 && s < 500) {
        cost = s * w * 0.98;
    } else if (s >= 500 && s < 1000) {
        cost = s * w * 0.95;
    } else if (s >= 1000 && s < 2000) {
        cost = s * w * 0.92;
    } else if (s >= 2000 && s < 3000) {
        cost = s * w * 0.9;
    } else if (s >= 3000) {
        cost = s * w * 0.85;
    }
    cout << cost << endl;
    return 0;
}
