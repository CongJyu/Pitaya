// p0116

#include <iostream>
#include <stack>

using namespace std;

void solution() {
    string brackets;
    cin >> brackets;
    stack<char> br;
    bool ok{true};
    for (int i{}; i < (int) brackets.length(); ++i) {
        if (brackets[i] == '<') {
            br.push('>');
        } else if (brackets[i] == '(') {
            br.push(')');
        } else if (brackets[i] == '[') {
            br.push(']');
        } else if (brackets[i] == '{') {
            br.push('}');
        } else if (brackets[i] == '>' or brackets[i] == ')' or brackets[i] == ']' or brackets[i] == '}') {
            if (!br.empty()) {
                if (brackets[i] != br.top()) {
                    ok = false;
                    break;
                } else {
                    br.pop();
                }
            } else if (br.empty()) {
                ok = false;
                break;
            }
        }
    }
    if (!br.empty()) {
        ok = false;
    }
    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
