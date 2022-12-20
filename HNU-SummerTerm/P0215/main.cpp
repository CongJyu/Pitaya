// p0215

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Contact {
    string name;
    string phone_number[200];
    int phone_cnt{};
} c[20];

int check_sub(const string &a, const string &b) {
    string sub_str;
    if (a == b) {
        return 1;
    }
    int len_a{(int) a.length()}, len_b{(int) b.length()};
    if (len_a > len_b) {
        sub_str = a.substr(len_a - len_b);
        if (sub_str == b) {
            return -1;
        }
    } else if (len_a < len_b) {
        sub_str = b.substr(len_b - len_a);
        if (sub_str == a) {
            return 1;
        }
    }
    return 0;
}

int compare_phone(const string &a, const string &b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    } else {
        return a < b;
    }
}

int compare_name(const Contact &a, const Contact &b) {
    return a.name < b.name;
}

int main() {
    ios::sync_with_stdio(false);
    int n{}, j, t, phone_number{}, people_num{}, i;
    string tmp_num, tmp_name;
    cin >> n;
    while (n--) {
        cin >> tmp_name >> phone_number;
        for (i = 0; i < people_num; ++i) {
            if (c[i].name == tmp_name) {
                break;
            }
        }
        if (i == people_num) {
            c[i].name = tmp_name;
            people_num++;
        }
        for (int k{}; k < phone_number; ++k) {
            cin >> tmp_num;
            for (j = 0; j < c[i].phone_cnt; ++j) {
                t = check_sub(tmp_num, c[i].phone_number[j]);
                if (t == 1) {
                    break;
                }
                if (t == -1) {
                    c[i].phone_number[j] = tmp_num;
                    break;
                }
            }
            if (j == c[i].phone_cnt) {
                c[i].phone_number[c[i].phone_cnt] = tmp_num;
                c[i].phone_cnt++;
            }
        }
    }
    cout << people_num << endl;
    sort(c, c + people_num, compare_name);
    for (i = 0; i < people_num; ++i) {
        cout << c[i].name << " " << c[i].phone_cnt << " ";
        sort(c[i].phone_number, c[i].phone_number + c[i].phone_cnt, compare_phone);
        for (j = 0; j < c[i].phone_cnt; ++j) {
            cout << c[i].phone_number[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
