//  P_384 月份天数

#include <iostream>

using namespace std;

int main() {
    int year = 0, month = 0;
    while (cin >> year >> month) {
        int day = 31;
        if (month != 2) {
            switch (month) {
                case 4:
                    day = 30;
                    break;
                case 6:
                    day = 30;
                    break;
                case 9:
                    day = 30;
                    break;
                case 11:
                    day = 30;
                    break;
            }
        } else {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                day = 29;
            } else {
                day = 28;
            }
        }
        cout << day << endl;
    }
    return 0;
}
