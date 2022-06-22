// t01p13

#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (char & i : s) {
            switch (i) {
                case '4':
                    i = '3';
                    break;
                case '5':
                    i = '4';
                    break;
                case '6':
                    i = '5';
                    break;
                case '7':
                    i = '6';
                    break;
                case '9':
                    i = '7';
                    break;
                default:
                    break;
            }
        }
        stringstream ss;
        ss.clear();
        int a;
        ss << oct << s;
        ss >> a;
        cout << a << endl;
    }
    return 0;
}
