// t02p09

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    char *alpha = new char[n];
    char *beta = new char[n];
    for (int i = 0; i < n; ++i) {
        cin >> alpha[i] >> beta[i];
    }
    int alpha_win = 0, beta_win = 0, eqa = 0;
    int a_c = 0, a_b = 0, a_j = 0, b_c = 0, b_b = 0, b_j = 0;
    for (int i = 0; i < n; ++i) {
        if (alpha[i] == 'C' && beta[i] == 'J') {
            alpha_win++;
            a_c++;
        } else if (alpha[i] == 'C' && beta[i] == 'B') {
            beta_win++;
            b_b++;
        } else if (alpha[i] == 'J' && beta[i] == 'B') {
            alpha_win++;
            a_j++;
        } else if (alpha[i] == 'J' && beta[i] == 'C') {
            beta_win++;
            b_c++;
        } else if (alpha[i] == 'B' && beta[i] == 'J') {
            beta_win++;
            b_j++;
        } else if (alpha[i] == 'B' && beta[i] == 'C') {
            alpha_win++;
            a_b++;
        } else if (alpha[i] == beta[i]) {
            eqa++;
        }
    }
    cout << alpha_win << " " << eqa << " " << beta_win << endl;
    cout << beta_win << " " << eqa << " " << alpha_win << endl;
    if (a_c <= a_b) {
        if (a_j <= a_b) {
            cout << "B" << " ";
        } else {
            cout << "J" << " ";
        }
    } else {
        cout << "C" << " ";
    }
    if (b_c <= b_b) {
        if (b_j <= b_b) {
            cout << "B";
        } else {
            cout << "J";
        }
    } else {
        cout << "C";
    }
    return 0;
}
