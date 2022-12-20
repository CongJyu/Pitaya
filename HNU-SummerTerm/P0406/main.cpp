// p0406

#include <iostream>
#include <string>

using namespace std;

int wi[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char check[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

int main() {
    ios::sync_with_stdio(false);
    string id;
    while (true) {
        cin >> id;
        if (id == "-1") {
            break;
        }
        int s{};
        for (int i{}; i < 17; ++i) {
            s += (id[i] - '0') * wi[i];
        }
        int y{s % 11};
        if (check[y] == id[17]) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
