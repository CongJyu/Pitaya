// p0401

#include <iostream>

using namespace std;

struct Money {
    int gallon{};
    int sickle{};
    int knut{};
};

int main() {
    ios::sync_with_stdio(false);
    Money p, a, change;
    char dot;
    cin >> p.gallon >> dot >> p.sickle >> dot >> p.knut;
    cin >> a.gallon >> dot >> a.sickle >> dot >> a.knut;
    // 比较大小
    bool positive{true};
    if (a.gallon < p.gallon) {
        positive = false;
    } else if (a.gallon == p.gallon) {
        if (a.sickle < p.sickle) {
            positive = false;
        } else if (a.sickle == p.sickle) {
            if (a.knut < p.knut) {
                positive = false;
            }
        }
    }
    if (positive) {
        change.gallon = a.gallon - p.gallon;
        change.sickle = a.sickle - p.sickle;
        change.knut = a.knut - p.knut;
    } else {
        change.gallon = p.gallon - a.gallon;
        change.sickle = p.sickle - a.sickle;
        change.knut = p.knut - a.knut;
    }
    if (change.knut < 0) {
        change.sickle--;
        change.knut += 29;
    }
    if (change.sickle < 0) {
        change.gallon--;
        change.sickle += 17;
    }
    if (!positive) {
        cout << "-";
    }
    cout << change.gallon << dot << change.sickle << dot << change.knut << endl;
    return 0;
}
