// t02p16

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    // input
    int n = 0;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        cin.ignore();
        vector<char> a, b;
        for (int i = 0; i < n; ++i) {
            string s;
            getline(cin, s);
            if ((s.find("good") != string::npos) && (s.find("no") == string::npos)) {
                // yes
                if (i % 2 == 0) {
                    a.push_back('O');
                } else {
                    b.push_back('O');
                }
            } else if (s.find("no") != string::npos) {
                // no
                if (i % 2 == 0) {
                    a.push_back('X');
                } else {
                    b.push_back('X');
                }
            }
        }
        if (n % 2 == 1) {
            b.push_back('-');
        }
        // output
        int score_a = 0, score_b = 0;
        for (int i = 0; i < ceil((n + 1)/ 2); ++i) {
            cout << i + 1 << " ";
        }
        cout << "Score" << endl;
        // team a score
        for (char i : a) {
            cout << i << " ";
            if (i == 'O') {
                score_a++;
            }
        }
        cout << score_a << endl;
        // team b score
        for (char i : b) {
            cout << i << " ";
            if (i == 'O') {
                score_b++;
            }
        }
        cout << score_b << endl;
    }
    return 0;
}
