// t02p07

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int counter = 1;
    while (true) {
        int n = 0;
        cin >> n;
        if (n == 0) {
            break;
        }
        // auto *name = new string[n];
        queue<string> up;
        stack<string> down;
        for (int i = 0; i < n; ++i) {
            string tmp;
            cin >> tmp;
            if (i % 2 == 0) {
                up.push(tmp);
            } else {
                down.push(tmp);
            }
        }
        cout << "set-" << counter << endl;
        counter++;
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
