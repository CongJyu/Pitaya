// ccf-csp 201403-2

#include <iostream>

using namespace std;

struct Window {
    int x1{}, y1{};
    int x2{}, y2{};
};

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    Window *w{new Window[n]};
    for (int i{}; i < n; ++i) {
        cin >> w[i].x1 >> w[i].y1 >> w[i].x2 >> w[i].y2;
    }
    return 0;
}
