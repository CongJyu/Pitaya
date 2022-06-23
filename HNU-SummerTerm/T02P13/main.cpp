// t02p13

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    auto *ori = new string[n];
    for (int i = 0; i < n; ++i) {
        cin >> ori[i];
        for (char &j: ori[i]) {
            if (j == 'A' || j == 'B' || j == 'C') {
                j = '2';
            } else if (j == 'D' || j == 'E' || j == 'F') {
                j = '3';
            } else if (j == 'G' || j == 'H' || j == 'I') {
                j = '4';
            } else if (j == 'J' || j == 'K' || j == 'L') {
                j = '5';
            } else if (j == 'M' || j == 'N' || j == 'O') {
                j = '6';
            } else if (j == 'P' || j == 'R' || j == 'S') {
                j = '7';
            } else if (j == 'T' || j == 'U' || j == 'V') {
                j = '8';
            } else if (j == 'W' || j == 'X' || j == 'Y') {
                j = '9';
            }
        }
    }
    /*
    for (int i = 0; i < n; ++i) {
        cout << ori[i] << endl;
    }
     */
    return 0;
}
