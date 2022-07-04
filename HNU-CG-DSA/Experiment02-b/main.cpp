//  实验二 b

#include <iostream>
#include <stack>

using namespace std;

bool left_brackets(char c) {
    return (c == '(' || c == '[' || c == '{');
}
bool right_brackets(char c) {
    return (c == ')' || c == ']' || c == '}');
}
bool judge(char a, char b) {
    return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
}

int main() {
    stack<char> brackets;
    string input;
    cin >> input;
    for (char & i : input) {
        if (left_brackets(i)) {
            brackets.push(i);
        } else if (right_brackets(i)) {
            if (!brackets.empty() && judge(brackets.top(), i)) {
                brackets.pop();
            } else {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    if (!brackets.empty()) {
        cout << "no" << endl;
    } else {
        cout << "yes" << endl;
    }
    return 0;
}
