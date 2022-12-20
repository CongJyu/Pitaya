// h02p04

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    char colum;
    cin >> a >> colum >> b >> colum >> c;
    cin >> d >> colum >> e >> colum >> f;
    int time_hour, time_minute, time_second;
    time_hour = d - a;
    time_minute = e - b;
    if (time_minute < 0) {
        time_hour--;
        time_minute += 60;
    }
    time_second = f - c;
    if (time_second < 0) {
        time_minute--;
        time_second += 60;
    }
    cout << time_hour << ":";
    cout << setw(2) << setfill('0') << time_minute;
    cout << ":" << setw(2) << setfill('0') << time_second << endl;
    return 0;
}
