// t03p15

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string card_in_hand;
    cin >> card_in_hand;
    sort(card_in_hand.begin(), card_in_hand.end());
    string card_in_cp;
    bool will_i_win = false;
    int num[10] = {0};
    for (char i: card_in_hand) {
        num[i - '0']++;
    }
    while (cin >> card_in_cp) {
        if ((int) card_in_cp.length() < 5) {
            for (int i = card_in_hand.at(0) - '0' + 1; i < 10; ++i) {
                if (num[i] > (int) card_in_cp.length()) {
                    will_i_win = true;
                    cout << "YES" << " ";
                }
            }
        } else {
            for (int i = card_in_cp.at(0) - '0' + 1; i < 6; ++i) {
                if (num[i] != 0 && num[i + 1] != 0 && num[i + 2] != 0 && num[i + 3] != 0 && num[i + 4] != 0) {
                    will_i_win = true;
                }
            }
        }
        cout << "NO" << endl;
    }
    return 0;
}
