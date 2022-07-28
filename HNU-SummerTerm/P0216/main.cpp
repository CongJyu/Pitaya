// p0216

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        // input messages
        cin.ignore();
        vector<char> a, b;
        for (int i{}; i < n; ++i) {
            string s;
            getline(cin, s);
            if ((s.find("good") != string::npos) and (s.find("no") == string::npos)) {
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
        int score_a{}, score_b{};
        for (int i{}; i < ceil((n + 1) / 2); ++i) {
            cout << i + 1 << " ";
        }
        cout << "Score" << endl;
        // team a score
        for (int i{}; i < (int) a.size(); ++i) {
            cout << a.at(i) << " ";
            if (a.at(i) == 'O') {
                score_a++;
            }
        }
        cout << score_a << endl;
        // team b score
        for (int i{}; i < (int) b.size(); ++i) {
            cout << b.at(i) << " ";
            if (b.at(i) == 'O') {
                score_b++;
            }
        }
        cout << score_b << endl;
    }
    return 0;
}
