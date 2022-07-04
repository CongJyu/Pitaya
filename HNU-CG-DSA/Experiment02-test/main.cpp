//  something went wrong in this program
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<char> stl;
    char ch;
    cin >> ch;
    while (ch != '\n') {
        if (ch == '}') {
            char ch1 = stl.top();
            stl.pop();
            if (ch1 != '{') {
                cout << "no" << endl;
                return 0;
            }
        } else if (ch == ']') {
            char ch1 = stl.top();
            stl.pop();
            if (ch1 != '[') {
                cout << "no" << endl;
                return 0;
            }
        } else if (ch == ')') {
            char ch1 = stl.top();
            stl.pop();
            if (ch1 != '(') {
                cout << "no" << endl;
                return 0;
            }
        } else {
            stl.push(ch);
            cout << "lll" << endl;
        }
        cin >> ch;
        cout << "kkk" << endl;
    }
    cout << "yes" << endl;
    return 0;
}
