// p0213

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Telephone {
    string tel;
    int cnt{};
};

bool cmp(const Telephone &x, const Telephone &y) {
    return x.tel < y.tel;
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    vector<Telephone> t;
    while (n--) {
        string input, phone_num;
        cin >> input;
        for (int i{}; i < (int) input.length(); ++i) {
            if (input[i] >= '0' and input[i] <= '9') {
                phone_num += input[i];
            } else {
                // mapping
                if (input[i] == 'A' or input[i] == 'B' or input[i] == 'C') {
                    phone_num += '2';
                } else if (input[i] == 'D' or input[i] == 'E' or input[i] == 'F') {
                    phone_num += '3';
                } else if (input[i] == 'G' or input[i] == 'H' or input[i] == 'I') {
                    phone_num += '4';
                } else if (input[i] == 'J' or input[i] == 'K' or input[i] == 'L') {
                    phone_num += '5';
                } else if (input[i] == 'M' or input[i] == 'N' or input[i] == 'O') {
                    phone_num += '6';
                } else if (input[i] == 'P' or input[i] == 'R' or input[i] == 'S') {
                    phone_num += '7';
                } else if (input[i] == 'T' or input[i] == 'U' or input[i] == 'V') {
                    phone_num += '8';
                } else if (input[i] == 'W' or input[i] == 'X' or input[i] == 'Y') {
                    phone_num += '9';
                }
            }
            if (phone_num.length() == 3) {
                phone_num += '-';
            }
        }
        if (!t.empty()) {
            bool found{false};
            for (int i{}; i < (int) t.size(); ++i) {
                if (t.at(i).tel == phone_num) {
                    t.at(i).cnt++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                Telephone tmp;
                tmp.tel = phone_num;
                tmp.cnt++;
                t.push_back(tmp);
            }
        } else {
            Telephone tmp;
            tmp.tel = phone_num;
            tmp.cnt++;
            t.push_back(tmp);
        }
    }
    sort(t.begin(), t.end(), cmp);
    for (int i{}; i < (int) t.size(); ++i) {
        if (t.at(i).cnt > 1) {
            cout << t.at(i).tel << " " << t.at(i).cnt << endl;
        }
    }
    return 0;
}
