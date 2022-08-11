// ccf-csp 201403-2
// no idea

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    cin >> n >> m;
    int *x1{new int[n]}, *x2{new int[n]}, *y1{new int[n]}, *y2{new int[n]}, *z{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        z[i] = i;
    }
    while (m--) {
        int click_x{}, click_y{};
        cin >> click_x >> click_y;
        bool activate_windows{false};
        int window{-1};
        for (int i{}; i < n; ++i) {
            if (click_x >= x1[i] and click_x <= x2[i] and click_y >= y1[i] and click_y <= y2[i]) {
                window = i + 1;
                clog << i << endl;
                activate_windows = true;
            }
        }
        if (activate_windows) {
            cout << window << endl;
        } else {
            cout << "IGNORED" << endl;
        }
    }
    delete[] x1;
    delete[] x2;
    delete[] y1;
    delete[] y2;
    return 0;
}
