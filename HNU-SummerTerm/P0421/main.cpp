// p0421

#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int ball_score(char a) {
    switch (a) {
        case 'r':
            return 1;
        case 'y':
            return 2;
        case 'g':
            return 3;
        case 'c':
            return 4;
        case 'b':
            return 5;
        case 'p':
            return 6;
        case 'B':
            return 7;
        default:
            return 0;
    }
}

int ball[8];

int ball_num(char a) {
    return ball[ball_score(a)];
}

void init_ball_num() {
    ball[1] = 15;
    for (int i{2}; i <= 7; ++i) {
        ball[i] = 1;
    }
}

int a_100_times{}, b_100_times{};
int a_score{}, b_score{};
int a_hit_score{}, b_hit_score{};

void a_red();

void b_red();

void a_color(char);

void b_color(char);

void a_red() {
    if (ball_num('r') == 0) {
        a_color('r');
        return;
    }
    if (b_hit_score >= 100) {
        b_100_times++;
        b_hit_score = 0;
    }
    string condition;
    getline(cin, condition);
    if (condition == "-1") {
        if (a_hit_score >= 100) {
            a_100_times++;
        }
        a_hit_score = 0;
        b_hit_score = 0;
        cout << a_score << ":" << b_score << endl;
        return;
    }
    if (condition == "NULL") {
        b_score += 4;
        b_hit_score = 0;
        b_red();
    } else if (condition.find(' ') != string::npos) {
        string hit, drop;
        hit = condition.substr(0, condition.find(' '));
        drop = condition.substr(condition.find(' ') + 1, condition.size() - condition.find(' '));
        int flag1{1};
        int maxi1{4};
        for (int i{}; i < hit.size(); ++i) {
            if (hit[i] != 'r') {
                flag1 = 0;
            }
            if (maxi1 < ball_score(hit[i])) {
                maxi1 = ball_score(hit[i]);
            }
        }
        int flag2{1};
        int maxi2{4};
        for (int i{}; i < drop.size(); ++i) {
            if (drop[i] != 'r') {
                if (drop[i] < '0' or drop[i] > '9') {
                    flag2 = 0;
                }
            }
            if (maxi1 < ball_score(drop[i])) {
                maxi2 = ball_score(drop[i]);
            }
        }
        int r_num{};
        if (drop.find('r') != string::npos) {
            int pos{(int) drop.find('r')};
            vector<int> v;
            for (int i{pos + 1}; i < (int) drop.size(); ++i) {
                if (drop[i] >= '0' and drop[i] <= '9') {
                    v.push_back(drop[i] - '0');
                }
                if (v.size() == 1) {
                    r_num += v[0];
                    ball[ball_score('r')] -= r_num;
                }
            }
        }
        if (flag1 == 0 or flag2 == 0) {
            b_score += max(maxi1, maxi2);
            b_hit_score = 0;
            b_red();
        } else {
            a_hit_score += r_num;
            a_score += r_num;
            a_color('f');
        }
    } else {
        int flag{1};
        for (int i{}; i < (int) condition.size(); ++i) {
            if (condition[i] != 'r') {
                flag = 0;
            }
        }
        if (flag == 1) {
            b_hit_score = 0;
            b_red();
        } else {
            int maxi3{4};
            for (int i{}; i < (int) condition.size(); ++i) {
                if (ball_score(condition[i]) > maxi3) {
                    maxi3 = ball_score(condition[i]);
                }
                b_score += maxi3;
                b_hit_score = 0;
                b_red();
            }
        }
    }
}

void a_color(char fa) {
    if (b_hit_score >= 100) {
        b_100_times++;
        b_hit_score = 0;
    }
    string condition;
    getline(cin, condition);
    if (condition == "-1") {
        if (a_hit_score >= 100) {
            a_100_times++;
        }
        a_hit_score = 0;
        b_hit_score = 0;
        cout << a_score << ":" << b_score << endl;
        return;
    }
    if (fa == 'f') {
        if (condition == "NULL") {
            b_score += 4;
            b_hit_score = 0;
            b_red();
        } else if (condition.find(' ') != string::npos) {
            string hit, drop;
            hit = condition.substr(0, condition.find(' '));
            drop = condition.substr(condition.find(' ') + 1, condition.size() - condition.find(' '));
            int r_num{};
            if (drop.find('r') != string::npos) {
                int pos{(int) drop.find('r')};
                vector<int> v;
                for (int i{pos + 1}; i < (int) drop.size(); ++i) {
                    if (drop[i] >= '0' and drop[i] <= '9') {
                        v.push_back(drop[i] - '0');
                    }
                }
                if (v.size() == 1) {
                    r_num += v[0];
                    ball[ball_score('r')] -= r_num;
                } else {
                    r_num += v[0] * 10 + v[1];
                    ball[ball_score('r')] -= r_num;
                }
            }
            int flag1{1};
            int maxi1{4};
            if (hit == "r" or hit.size() > 1) {
                flag1 = 0;
                for (int i{}; i < (int) hit.size(); ++i) {
                    if (ball_score(hit[i]) > maxi1) {
                        maxi1 = ball_score(hit[i]);
                    }
                }
            }
            if (flag1 == 0) {
                for (int i{}; i < (int) drop.size(); ++i) {
                    if (ball_score(drop[i]) > maxi1) {
                        maxi1 = ball_score(drop[i]);
                    }
                }
                b_score += maxi1;
                b_hit_score = 0;
                b_red();
            } else {
                if (drop == hit) {
                    a_hit_score += ball_score(drop[0]);
                    a_score += ball_score(drop[0]);
                    a_red();
                } else {
                    int maxi3{4};
                    for (int i{}; i < (int) hit.size(); ++i) {
                        if (ball_score(hit[i]) > maxi3) {
                            maxi3 = ball_score(hit[i]);
                        }
                    }
                    for (int i{}; i < (int) hit.size(); ++i) {
                        if (ball_score(drop[i]) > maxi3) {
                            maxi3 = ball_score(drop[i]);
                        }
                    }
                    b_score += maxi3;
                    b_hit_score = 0;
                    b_red();
                }
            }
        } else {
            if (condition == "r" or condition.size() > 1) {
                int maxi{4};
                for (int i{}; i < (int) condition.size(); ++i) {
                    if (ball_score(condition[i]) > maxi) {
                        maxi = ball_score(condition[i]);
                    }
                }
                b_score += maxi;
                b_hit_score = 0;
                b_red();
            } else {
                b_hit_score = 0;
                b_red();
            }
        }
    } else {
        string sub{"rygcbpB"};
        string goal{sub.substr(sub.find(fa) + 1, 1)};
        char c_goal{sub[sub.find(fa) + 1]};
        if (condition == "NULL") {
            b_score += 4;
            b_hit_score = 0;
            b_color(fa);
        } else if (condition.find(' ') != string::npos) {
            string hit, drop;
            hit = condition.substr(0, condition.find(' '));
            drop = condition.substr(condition.find(' ') + 1, condition.size() - condition.find(' '));
            if (hit == goal and hit == drop) {
                a_hit_score += ball_score(c_goal);
                a_score += ball_score(c_goal);
                ball[ball_score(c_goal)]--;
                a_color(c_goal);
            } else {
                int maxi3{max(4, ball_score(c_goal))};
                for (int i{}; i < (int) hit.size(); ++i) {
                    if (ball_score(hit[i]) > maxi3) {
                        maxi3 = ball_score(hit[i]);
                    }
                }
                for (int i{}; i < (int) drop.size(); ++i) {
                    if (ball_score(drop[i]) > maxi3) {
                        maxi3 = ball_score(drop[i]);
                    }
                }
                b_score += maxi3;
                b_hit_score = 0;
                b_color(fa);
            }
        } else {
            string hit{condition};
            if (hit == goal) {
                b_hit_score = 0;
                b_color(fa);
            } else {
                int maxi{4};
                for (int i{}; i < (int) hit.size(); ++i) {
                    if (ball_score(hit[i]) > maxi) {
                        maxi = ball_score(hit[i]);
                    }
                }
                b_score += maxi;
                b_hit_score = 0;
                b_color(fa);
            }
        }
    }
}

void b_red() {
    if (ball_num('r') == 0) {
        b_color('r');
        return;
    }
    if (a_hit_score >= 100) {
        a_100_times++;
        a_hit_score = 0;
    }
    string condition;
    getline(cin, condition);
    if (condition == "-1") {
        if (b_hit_score >= 100) {
            b_100_times++;
        }
        a_hit_score = 0;
        b_hit_score = 0;
        cout << a_score << ":" << b_score << endl;
        return;
    }
    if (condition == "-1") {
        if (b_hit_score >= 100) {
            b_100_times++;
        }
        a_hit_score = 0;
        b_hit_score = 0;
        cout << a_score << ":" << b_score << endl;
    }
    if (condition == "NULL") {
        a_score += 4;
        a_hit_score = 0;
        a_red();
    } else if (condition.find(' ') != string::npos) {
        string hit, drop;
        hit = condition.substr(0, condition.find(' '));
        drop = condition.substr(condition.find(' ') + 1, condition.size() - condition.find(' '));
        int flag1{1};
        int maxi1{4};
        for (int i{}; i < (int) hit.size(); ++i) {
            if (hit[i] != 'r') {
                flag1 = 0;
            }
            if (maxi1 < ball_score(hit[i])) {
                maxi1 = ball_score(hit[i]);
            }
        }
        int flag2{1};
        int maxi2{4};
        for (int i{}; i < (int) drop.size(); ++i) {
            if (drop[i] != 'r') {
                if (drop[i] < '0' or drop[i] > '9') {
                    flag2 = 0;
                }
            }
            if (maxi2 < ball_score(drop[i])) {
                maxi2 = ball_score(drop[i]);
            }
        }
        int r_num{};
        if (drop.find('r') != string::npos) {
            int pos{(int) drop.find('r')};
            vector<int> v;
            for (int i{pos + 1}; i < (int) drop.size(); ++i) {
                if (drop[i] >= '0' and drop[i] <= '9') {
                    v.push_back(drop[i] - '0');
                }
            }
            if (v.size() == 1) {
                r_num += v[0];
                ball[ball_score('r')] -= r_num;
            } else {
                r_num += v[0] * 10 + v[1];
                ball[ball_score('r')] -= r_num;
            }
        }
        if (flag1 == 0 and flag2 == 0) {
            a_score += max(maxi1, maxi2);
            a_hit_score = 0;
            a_red();
        } else if (flag1 == 0) {
            a_score += max(maxi1, maxi2);
            a_hit_score = 0;
            a_red();
        } else if (flag2 == 0) {
            a_score += max(maxi1, maxi2);
            a_hit_score = 0;
            a_red();
        } else {
            b_hit_score += r_num;
            b_score += r_num;
            b_color('f');
        }
    } else {
        int flag{1};
        for (int i{}; i < (int) condition.size(); ++i) {
            if (condition[i] != 'r') {
                flag = 0;
            }
        }
        if (flag == 1) {
            a_hit_score = 0;
            a_red();
        } else {
            int maxi3{4};
            for (int i{}; i < (int) condition.size(); ++i) {
                if (ball_score(condition[i]) > maxi3) {
                    maxi3 = ball_score(condition[i]);
                }
            }
            a_score += maxi3;
            a_hit_score = 0;
            a_red();
        }
    }
}

void b_color(char fa) {
    if (a_hit_score >= 100) {
        a_100_times++;
        a_hit_score = 0;
    }
    string condition;
    getline(cin, condition);
    if (condition == "-1") {
        if (b_hit_score >= 100) {
            b_100_times++;
        }
        a_hit_score = 0;
        b_hit_score = 0;
        cout << a_score << ":" << b_score << endl;
        return;
    }
    if (fa == 'f') {
        if (condition == "NULL") {
            a_score += 4;
            a_hit_score = 0;
            a_red();
        } else if (condition.find(' ') != string::npos) {
            string hit, drop;
            hit = condition.substr(0, condition.find(' '));
            drop = condition.substr(condition.find(' ') + 1, condition.size() - condition.find(' '));
            int r_num{};
            if (drop.find('r') != string::npos) {
                int pos{(int) drop.find('r')};
                vector<int> v;
                for (int i{pos + 1}; i < (int) drop.size(); ++i) {
                    if (drop[i] >= '0' and drop[i] <= '9') {
                        v.push_back(drop[i] - '0');
                    }
                }
                if (v.size() == 1) {
                    r_num += v[0];
                    ball[ball_score('r')] -= r_num;
                } else {
                    r_num += v[0] * 10 + v[1];
                    ball[ball_score('r')] -= r_num;
                }
            }
            int flag1{1};
            int maxi1{4};
            if (hit == "r" or hit.size() > 1) {
                flag1 = 0;
                for (int i{}; i < hit.size(); ++i) {
                    if (ball_score(hit[i]) > maxi1) {
                        maxi1 = ball_score(hit[i]);
                    }
                }
            }
            if (flag1 == 0) {
                for (int i{}; i < (int) drop.size(); ++i) {
                    if (ball_score(drop[i]) > maxi1) {
                        maxi1 = ball_score(drop[i]);
                    }
                }
                a_score += maxi1;
                a_hit_score = 0;
                a_red();
            } else {
                if (drop == hit) {
                    b_hit_score += ball_score(drop[0]);
                    b_score += ball_score(drop[0]);
                    b_red();
                } else {
                    int maxi3{4};
                    for (int i{}; i < (int) hit.size(); ++i) {
                        if (ball_score(hit[i]) > maxi3) {
                            maxi3 = ball_score(hit[i]);
                        }
                    }
                    for (int i{}; i < (int) drop.size(); ++i) {
                        if (ball_score(drop[i]) > maxi3) {
                            maxi3 = ball_score(drop[i]);
                        }
                    }
                    a_score += maxi3;
                    a_hit_score = 0;
                    a_red();
                }
            }
        } else {
            if (condition == "r" or condition.size() > 1) {
                int maxi{4};
                for (int i{}; i < (int) condition.size(); ++i) {
                    if (ball_score(condition[i]) > maxi) {
                        maxi = ball_score(condition[i]);
                    }
                }
                a_score += maxi;
                a_hit_score = 0;
                a_red();
            } else {
                a_hit_score = 0;
                a_red();
            }
        }
    } else {
        string sub{"rygcbpB"};
        string goal{sub.substr(sub.find(fa) + 1, 1)};
        char c_goal{sub[sub.find(fa) + 1]};
        if (condition == "NULL") {
            a_score += 4;
            a_hit_score = 0;
            a_color(fa);
        } else if (condition.find(' ') != string::npos) {
            string hit, drop;
            hit = condition.substr(0, condition.find(' '));
            drop = condition.substr(condition.find(' ') + 1, condition.size() - condition.find(' '));
            if (hit == goal and hit == drop) {
                b_hit_score += ball_score(c_goal);
                b_score += ball_score(c_goal);
                ball[ball_score(c_goal)]--;
                b_color(c_goal);
            } else {
                int maxi{max(4, ball_score(c_goal))};
                for (int i{}; i < (int) hit.size(); ++i) {
                    if (ball_score(hit[i]) > maxi) {
                        maxi = ball_score(hit[i]);
                    }
                }
                for (int i{}; i < (int) drop.size(); ++i) {
                    if (ball_score(drop[i]) > maxi) {
                        maxi = ball_score(drop[i]);
                    }
                }
                a_score += maxi;
                a_hit_score = 0;
                a_color(fa);
            }
        } else {
            string hit{condition};
            if (hit == goal) {
                a_hit_score = 0;
                a_color(fa);
            } else {
                int maxi{4};
                for (int i{}; i < (int) hit.size(); ++i) {
                    if (ball_score(hit[i]) > maxi) {
                        maxi = ball_score(hit[i]);
                    }
                }
                a_score += maxi;
                a_hit_score = 0;
                a_color(fa);
            }
        }
    }
}

int main() {
    int t{};
    cin >> t;
    cin.get();
    while (t--) {
        a_score = 0;
        b_score = 0;
        a_hit_score = 0;
        b_hit_score = 0;
        init_ball_num();
        a_red();
    }
    cout << a_100_times << ":" << b_100_times << endl;
    return 0;
}
