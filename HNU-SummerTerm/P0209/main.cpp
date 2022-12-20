// p0209

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    char alice, bob;
    int alice_win{}, bob_win{}, equal{};
    int alice_c{}, alice_b{}, alice_j{};
    int bob_c{}, bob_b{}, bob_j{};
    while (n--) {
        cin >> alice >> bob;
        if (alice == 'C' and bob == 'J') {
            alice_win++;
            alice_c++;
        } else if (alice == 'C' and bob == 'B') {
            bob_win++;
            bob_b++;
        } else if (alice == 'B' and bob == 'C') {
            alice_win++;
            alice_b++;
        } else if (alice == 'B' and bob == 'J') {
            bob_win++;
            bob_j++;
        } else if (alice == 'J' and bob == 'B') {
            alice_win++;
            alice_j++;
        } else if (alice == 'J' and bob == 'C') {
            bob_win++;
            bob_c++;
        } else if (alice == bob) {
            equal++;
        }
    }
    cout << alice_win << " " << equal << " " << bob_win << endl;
    cout << bob_win << " " << equal << " " << alice_win << endl;
    if (alice_c <= alice_b) {
        if (alice_j <= alice_b) {
            cout << "B" << " ";
        } else {
            cout << "J" << " ";
        }
    } else {
        if (alice_j <= alice_c) {
            cout << "C" << " ";
        } else {
            cout << "J" << " ";
        }
    }
    if (bob_c <= bob_b) {
        if (bob_j <= bob_b) {
            cout << "B" << endl;
        } else {
            cout << "J" << endl;
        }
    } else {
        if (bob_j <= bob_c) {
            cout << "C" << endl;
        } else {
            cout << "J" << endl;
        }
    }
    return 0;
}
