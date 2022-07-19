// t02p01

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        reverse(s.begin(), s.end());
        int l = 0, r = 0;
        while (r < (int)s.length()) {
            while (r < (int)s.length() && s[r] != ' ') {
                ++r;
            }
            reverse(s.begin() + l, s.begin() + r);
            l = (++r);
        }
        cout << s << endl;
    }
    return 0;
}
