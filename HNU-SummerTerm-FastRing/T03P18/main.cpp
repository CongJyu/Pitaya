// t03p18

#include <iostream>
#include <string>

using namespace std;

int main() {
    string box;
    ios::sync_with_stdio(false);
    while (cin >> box) {
        int counter = 0;
        for (char i : box) {
            if (i == 'B') {
                break;
            } else if (i == '(') {
                counter++;
            } else if (i == ')') {
                counter--;
            }
        }
        cout << counter << endl;
    }
    return 0;
}
