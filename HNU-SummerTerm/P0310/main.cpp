// p0310

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct P {
    int bb{};
    int aa{};
};

bool cmp(P x, P y) {
    return x.bb > y.bb;
}

int main() {
    ios::sync_with_stdio(false);
    int b{}, a{};
    vector<P> para;
    while (true) {
        cin >> b >> a;
        if (b == 0 and a == 0) {
            break;
        }
        bool found{false};
        if (!para.empty()) {
            for (int i{}; i < (int) para.size(); ++i) {
                if (para.at(i).bb == b) {
                    found = true;
                    para.at(i).aa += a;
                }
            }
            if (!found) {
                P tmp;
                tmp.aa = a;
                tmp.bb = b;
                para.push_back(tmp);
            }
        } else {
            P tmp;
            tmp.aa = a;
            tmp.bb = b;
            para.push_back(tmp);
        }
    }
    while (true) {
        cin >> b >> a;
        if (b == 0 and a == 0) {
            break;
        }
        bool found{false};
        if (!para.empty()) {
            for (int i{}; i < (int) para.size(); ++i) {
                if (para.at(i).bb == b) {
                    found = true;
                    para.at(i).aa += a;
                }
            }
            if (!found) {
                P tmp;
                tmp.aa = a;
                tmp.bb = b;
                para.push_back(tmp);
            }
        } else {
            P tmp;
            tmp.aa = a;
            tmp.bb = b;
            para.push_back(tmp);
        }
    }
    sort(para.begin(), para.end(), cmp);
    for (int i{}; i < (int) para.size(); ++i) {
        if (para.at(i).aa != 0) {
            cout << para.at(i).bb << " " << para.at(i).aa << endl;
        }
    }
    return 0;
}
