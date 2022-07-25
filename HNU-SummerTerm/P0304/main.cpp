// p0304

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, w{};
    cin >> n >> w;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    int people{}, origin;
    bool ok{true};
    int max_people{};
    for (int i{}; i < n; ++i) {
        people += a[i];
        if (people > w) {
            ok = false;
            break;
        }
        if (max_people < people) {
            max_people = people;
        }
    }
    if (!ok) {
        origin = 0;
    } else {
        origin = w - max_people + 1;
    }
    cout << origin << endl;
    delete[] a;
    return 0;
}
