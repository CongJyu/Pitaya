// p0318

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string gift;
    while (cin >> gift) {
        int index{};
        for (int i{}; i < (int) gift.length(); ++i) {
            if (gift[i] == 'B') {
                break;
            } else if (gift[i] == '(') {
                index++;
            } else if (gift[i] == ')') {
                index--;
            }
        }
        cout << index << endl;
    }
    return 0;
}
