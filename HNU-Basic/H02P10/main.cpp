// h02p10

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double first = 0, second = 0;
    cin >> first >> second;
    double first_left = first / 3;
    double second_left = second / 4;
    cout << fixed << setprecision(2) << first_left + second_left << endl;
    return 0;
}
