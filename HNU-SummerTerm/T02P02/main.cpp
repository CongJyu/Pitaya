// t02p02

#include <iostream>

using namespace std;

int main() {
    while (true) {
        int n = 0;
        cin >> n;
        if (n == 0) {
            break;
        }
        int counter = 0;
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
                counter++;
            } else {
                n = 3 * n + 1;
                n /= 2;
                counter++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}
