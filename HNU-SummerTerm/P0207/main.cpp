// p0207

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, set{};
    while (true) {
        cin >> n;
        set++;
        if (n == 0) {
            break;
        }
        stack<string> down;
        queue<string> up;
        for (int i{}; i < n; ++i) {
            string name;
            cin >> name;
            if (i % 2 == 0) {
                up.push(name);
            } else {
                down.push(name);
            }
        }
        cout << "set-" << set << endl;
        while (!up.empty()) {
            cout << up.front() << endl;
            up.pop();
        }
        while (!down.empty()) {
            cout << down.top() << endl;
            down.pop();
        }
    }
    return 0;
}
