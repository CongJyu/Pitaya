// h03p14

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int x[4] = {0};
    for (int &i: x) {
        cin >> i;
    }
    sort(x, x + 4);
    int a = x[3] - x[2];
    int b = x[3] - x[1];
    int c = x[3] - x[0];
    cout << a << " " << b << " " << c << endl;
    return 0;
}
