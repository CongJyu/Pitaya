// h02p06

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int x1 = 0, x2 = 0, x3 = 0;
    int y1 = 0, y2 = 0, y3 = 0;
    char punch;
    cin >> punch >> x1 >> punch >> y1 >> punch >> punch;
    cin >> punch >> x2 >> punch >> y2 >> punch >> punch;
    cin >> punch >> x3 >> punch >> y3 >> punch;
    cout << "[" << x1 << "," << y1 << "]" << endl;
    cout << "[" << x2 << "," << y2 << "]" << endl;
    cout << "[" << x3 << "," << y3 << "]" << endl;
    return 0;
}
