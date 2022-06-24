// t02p15
// compile error when submit

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

struct Person {
    string name;
    vector<string> number;

    bool operator<(const Person &a) const {
        int ret = name.compare(a.name);
        if (ret < 0) {
            return true;
        } else {
            return false;
        }
    }
};

Person p[30];

bool cmp(string &a, string &b) {
    int len_a = (int) a.size();
    int len_b = (int) b.size();
    if (len_a > len_b) {
        return false;
    } else if (len_a < len_b) {
        return true;
    } else {
        for (int i = 0; i < len_a; ++i) {
            if (a[i] - '0' < b[i] - '0') {
                return true;
            } else if (a[i] - '0' > b[i] - '0') {
                return false;
            }
        }
    }
    return false;
}

bool check(const string &a, const string &b) {
    int len_a = (int) a.size();
    int len_b = (int) b.size();
    if (len_a > len_b) {
        return false;
    }
    int delta = len_b - len_a;
    for (int i = 0; i < len_a; ++i) {
        if (a[i] != b[delta + i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 0;
    cin >> n;
    string n_a;
    int cnt = 0, m = 0;
    for (int i = 0; i < n; ++i) {
        cin >> n_a >> cnt;
        int index = 0, flag = 0;
        for (int j = 0; j < m; ++j) {
            if (p[j].name == n_a) {
                index = j;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            index = (m++);
            p[index].name = n_a;
        }
        string num_b;
        while (cnt--) {
            cin >> num_b;
            vector<string>::iterator it;
            int flag_f = 1;
            for (it = p[index].number.begin(); it != p[index].number.end(); ++it) {
                if (num_b == *it || check(num_b, *it)) {
                    flag_f = 0;
                    break;
                }
                if (check(*it, num_b)) {
                    p[index].number.erase(it);
                    p[index].number.push_back(num_b);
                    flag_f = 0;
                    break;
                }
            }
            if (flag_f) {
                p[index].number.push_back(num_b);
            }
        }
    }
    sort(p, p + m);
    cout << m << endl;
    for (int i = 0; i < m; ++i) {
        cout << p[i].name << " " << p[i].number.size();
        sort(p[i].number.begin(), p[i].number.end(), cmp);
        for (auto &j: p[i].number) {
            cout << " " << j;
        }
        cout << endl;
    }
    return 0;
}
