// t03p21

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    stack<string> fore;
    stack<string> back;
    string opt;
    string current = "http://www.game.org/";
    while (cin >> opt) {
        if (opt == "QUIT") {
            break;
        } else if (opt == "VISIT") {
            // visit
            back.push(current);
            cin >> current;
            cout << current << endl;
            while (!fore.empty()) {
                fore.pop();
            }
        } else if (opt == "FORWARD") {
            // forward
            if (!fore.empty()) {
                back.push(current);
                current = fore.top();
                cout << current << endl;
                fore.pop();
            } else {
                cout << "Ignored" << endl;
            }
        } else if (opt == "BACK") {
            // back
            if (!back.empty()) {
                fore.push(current);
                current = back.top();
                cout << current << endl;
                back.pop();
            } else {
                cout << "Ignored" << endl;
            }
        }
    }
    return 0;
}
