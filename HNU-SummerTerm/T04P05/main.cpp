// t04p05

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int cash_num = 0;
    while (n != 0) {
        if (n >= 100) {
            n -= 100;
            cash_num++;
        } else if (n >= 20 && n < 100) {
            n -= 20;
            cash_num++;
        } else if (n >= 10 && n < 20) {
            n -= 10;
            cash_num++;
        } else if (n >= 5 && n < 10) {
            n -= 5;
            cash_num++;
        } else if (n >= 1 && n < 5) {
            n--;
            cash_num++;
        }
    }
    cout << cash_num << endl;
    return 0;
}
