// p0205

#include <iostream>

using namespace std;

void get_coin(int n) {
    int total_coin{}, day{}, cycle{};
    while (day < n) {
        for (int i{}; i < cycle; ++i) {
            total_coin += cycle;
            day++;
            if (day >= n) {
                break;
            }
        }
        cycle++;
    }
    cout << n << " " << total_coin << endl;
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    while (cin >> n) {
        get_coin(n);
    }
    return 0;
}
