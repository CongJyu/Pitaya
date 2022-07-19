// t04p01

#include <iostream>
#include <cmath>

using namespace std;

struct Money {
    int galleon{};
    int sickle{};
    int knut{};
};

void change(Money a, Money b) {
    int total_a = a.galleon * 17 * 29 + a.sickle * 29 + a.knut;
    int total_b = b.galleon * 17 * 29 + b.sickle * 29 + b.knut;
    int change_back = total_b - total_a;
    if (change_back < 0) {
        cout << "-";
    }
    // galleon
    cout << abs(change_back / (17 * 29)) << ".";
    // sickle
    cout << abs((change_back - (change_back / (17 * 29) * (17 * 29))) / 29) << ".";
    // knut
    cout << abs(change_back % 29) << endl;
}

int main() {
    Money x, y;
    char dot;
    cin >> x.galleon >> dot >> x.sickle >> dot >> x.knut;
    cin >> y.galleon >> dot >> y.sickle >> dot >> y.knut;
    change(x, y);
    return 0;
}
