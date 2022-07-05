// h03p08

#include <iostream>
#include <algorithm>

using namespace std;

struct Birthday {
    int year{};
    int month{};
    int day{};
    char name{};
};

bool cmp(Birthday x, Birthday y) {
    if (x.year != y.year) {
        return x.year < y.year;
    } else {
        if (x.month != y.month) {
            return x.month < y.month;
        } else {
            if (x.day != y.day) {
                return x.day < y.day;
            }
        }
    }
    return x.year < y.year;
}

int main() {
    ios::sync_with_stdio(false);
    Birthday p[3];
    cin >> p[0].year >> p[0].month >> p[0].day;
    p[0].name = 'A';
    cin >> p[1].year >> p[1].month >> p[1].day;
    p[1].name = 'B';
    cin >> p[2].year >> p[2].month >> p[2].day;
    p[2].name = 'C';
    sort(p, p + 3, cmp);
    for (auto &i: p) {
        cout << i.name;
    }
    cout << endl;
    return 0;
}
