// p0104

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    cin.get();
    while (n--) {
        string s;
        getline(cin, s);
        stack<char> out;
        for (int i{}; i < (int) s.length(); ++i) {
            if (s[i] != ' ') {
                out.push(s[i]);
            } else {
                while (!out.empty()) {
                    cout << out.top();
                    out.pop();
                }
                cout << " ";
            }
        }
        while (!out.empty()) {
            cout << out.top();
            out.pop();
        }
        cout << endl;
    }
    return 0;
}
