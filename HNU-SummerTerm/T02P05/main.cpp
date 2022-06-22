// t02p05

#include <iostream>

using namespace std;

int main() {
    int day = 0;
    while (cin >> day) {
        int coins = 0;
        int cnt = 1;
        int count_day = 1;
        while (count_day <= day) {
            for (int i = 0; i < cnt; ++i) {
                coins += cnt;
                count_day++;
                if (count_day > day) {
                    break;
                }
            }
            cnt++;
        }
        cout << day << " " << coins << endl;
    }
    return 0;
}
