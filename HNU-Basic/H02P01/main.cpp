// h02p01

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n = 0, x = 0, y = 0;
    cin >> n >> x >> y;
    int apple_left = n - (int) ceil(y * (1.0) / x);
    if (apple_left <= 0) {
        apple_left = 0;
    }
    cout << apple_left << endl;
    return 0;
}
