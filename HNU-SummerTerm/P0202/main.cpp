// p0202

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        int step{};
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else {
                n = (n * 3 + 1) / 2;
            }
            step++;
        }
        cout << step << endl;
    }
    return 0;
}
