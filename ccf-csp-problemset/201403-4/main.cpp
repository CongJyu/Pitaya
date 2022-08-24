// ccf-csp 201403-4

#include <iostream>

using namespace std;

struct Router {
    int x;
    int y;
};

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{}, k{}, r{};
    cin >> n >> m >> k >> r;
    Router *rt{new Router[n]};
    for (int i{}; i < n; ++i) {
        cin >> rt[i].x >> rt[i].y;
    }
    // no idea
    return 0;
}
