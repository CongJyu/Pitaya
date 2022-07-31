// p0315

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string card;
    cin >> card;
    int c[10]{0};
    for (int i{}; i < (int) card.length(); ++i) {
        c[card[i] - '0']++;
    }
    string opponent;
    while (cin >> opponent) {
        // 判断能否打过对手的牌
        // 整理自己手中的牌
        sort(card.begin(), card.end());
        int card_number{(int) opponent.length()};
        if (card_number == 1) {
            // 对手出一张牌
            bool ok{false};
            for (int i{opponent[0] - '0' + 1}; i < 10; ++i) {
                if (c[i] > 0) {
                    cout << "YES";
                    ok = true;
                    break;
                }
            }
            if (ok) {
                for (int i{opponent[0] - '0' + 1}; i < 10; ++i) {
                    if (c[i] > 0) {
                        cout << " " << i;
                    }
                }
            } else {
                cout << "NO";
            }
            cout << endl;
        } else if (card_number == 2) {
            // 对手出两张牌
            bool ok{false};
            for (int i{opponent[0] - '0' + 1}; i < 10; ++i) {
                if (c[i] > 1) {
                    cout << "YES";
                    ok = true;
                    break;
                }
            }
            if (ok) {
                for (int i{opponent[0] - '0' + 1}; i < 10; ++i) {
                    if (c[i] > 1) {
                        cout << " " << i << i;
                    }
                }
            } else {
                cout << "NO";
            }
            cout << endl;
        } else if (card_number == 3) {
            // 对手出三张牌
            bool ok{false};
            for (int i{opponent[0] - '0' + 1}; i < 10; ++i) {
                if (c[i] > 2) {
                    cout << "YES";
                    ok = true;
                    break;
                }
            }
            if (ok) {
                for (int i{opponent[0] - '0' + 1}; i < 10; ++i) {
                    if (c[i] > 2) {
                        cout << " " << i << i << i;
                    }
                }
            } else {
                cout << "NO";
            }
            cout << endl;
        } else if (card_number == 4) {
            // 对手出四张牌
            bool ok{false};
            for (int i{opponent[0] - '0' + 1}; i < 10; ++i) {
                if (c[i] > 3) {
                    cout << "YES";
                    ok = true;
                    break;
                }
            }
            if (ok) {
                for (int i{opponent[0] - '0' + 1}; i < 10; ++i) {
                    if (c[i] > 3) {
                        cout << " " << i << i << i << i;
                    }
                }
            } else {
                cout << "NO";
            }
            cout << endl;
        } else {
            // 对手出五张牌
            string self_card, ori{opponent};
            for (int i{1}; i < 10; ++i) {
                if (c[i] > 0) {
                    self_card += (char) (i + '0');
                }
            }
            clog << self_card << endl;
            vector<string> out;
            bool ok{false};
            while (opponent <= "56789") {
                for (int i{}; i < 5; ++i) {
                    opponent[i]++;
                }
                if (self_card.find(opponent) != string::npos) {
                    out.push_back(opponent);
                    ok = true;
                }
            }
            if (ok) {
                cout << "YES";
                for (int i{}; i < (int) out.size(); ++i) {
                    cout << " " << out.at(i);
                }
            } else {
                cout << "NO";
            }
            cout << endl;
        }
    }
    return 0;
}
