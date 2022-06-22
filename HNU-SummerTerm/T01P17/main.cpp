// t01p17

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

struct Team {
    string name;
    int score{};
    int net_num{};
    int num{};
};

bool compare_in(const Team &right, const Team &left) {
    if (right.score != left.score) {
        return right.score > left.score;
    } else if (right.net_num != left.net_num) {
        return right.net_num > left.net_num;
    } else if (right.num != left.num) {
        return right.num > left.num;
    }
    return false;
}

bool compare_out(const Team &right, const Team &left) {
    return right.name < left.name;
}

// 垃圾代码，卷什么卷！
int main() {
    int n = 0;
    cin >> n;
    Team *t = new Team[n];
    for (int i = 0; i < n; ++i) {
        cin >> t[i].name;
    }
    string match_vs, match_score, name1, name2;
    string num_m1, num_m2;
    stringstream ss;
    int pos, num1 = 0, num2 = 0;
    for (int i = 0; i < n * (n - 1) / 2; ++i) {
        cin >> match_vs >> match_score;
        pos = 0;
        while (match_vs[pos] != '-') {
            pos++;
        }
        name1 = match_vs.substr(0, pos);
        name2 = match_vs.substr(pos + 1, 30);
        pos = 0;
        while (match_score[pos] != ':') {
            pos++;
        }
        num_m1 = match_score.substr(0, pos);
        num_m2 = match_score.substr(pos + 1, 30);
        ss << num_m1;
        ss >> num1;
        ss.clear();
        ss << num_m2;
        ss >> num2;
        ss.clear();
        for (int j = 0; j < n; ++j) {
            if (t[j].name == name1) {
                t[j].net_num = t[j].net_num + num1 - num2;
                t[j].num = t[j].num + num1;
                if (num1 > num2) {
                    t[j].score = t[j].score + 3;
                } else if (num1 == num2) {
                    t[j].score = t[j].score + 1;
                }
            }
            if (t[j].name == name2) {
                t[j].net_num = t[j].net_num + num2 - num1;
                t[j].num = t[j].num + num2;
                if (num2 > num1) {
                    t[j].score = t[j].score + 3;
                } else if (num2 == num1) {
                    t[j].score = t[j].score + 1;
                }
            }
        }
    }
    sort(t, t + n, compare_in);
    sort(t, t + n / 2, compare_out);
    for (int i = 0; i < n / 2; ++i) {
        cout << t[i].name << endl;
    }
    return 0;
}
