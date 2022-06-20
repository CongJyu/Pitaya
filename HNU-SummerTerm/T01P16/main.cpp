// t01p16

#include <iostream>
#include <stack>

using namespace std;

bool judge() {
    string s;
    cin >> s;
    stack<char> st;
    for (char &i: s) {
        if (i == '(' || i == '[' || i == '{' || i == '<') {
            st.push(i);
        } else {
            if (st.empty()) {
                return false;
            }
            char match;
            if (i == ')') {
                match = '(';
            } else if (i == ']') {
                match = '[';
            } else if (i == '}') {
                match = '{';
            } else {
                match = '<';
            }
            char c = st.top();
            st.pop();
            if (c != match) {
                return false;
            }
        }
    }
    if (!st.empty()) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int n = 0;
    cin >> n;
    while (n--) {
        if (judge()) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
