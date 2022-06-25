// t01p04

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    cin.get();
    while (n--) {
        string input;
        getline(cin, input);
        stack<char> out;
        for (char &i: input) {
            if (i == ' ') {
                while (!out.empty()) {
                    cout << out.top();
                    out.pop();
                }
                cout << " ";
                continue;
            }
            out.push(i);
        }
        while (!out.empty()) {
            cout << out.top();
            out.pop();
        }
        cout << endl;
    }
    return 0;
}
