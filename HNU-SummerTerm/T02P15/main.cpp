// t02p15
// compile error when submit

/*
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
 */

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;
struct contact {
    string name;
    string phonenum[200];
    int phoneCount = 0;
} c[20];

int checkSub(const string &a, const string &b) {
    string subStr;
    if (a == b) {
        return 1;
    }
    int lenA = (int) a.length(), lenB = (int) b.length();
    if (lenA > lenB) {
        subStr = a.substr(lenA - lenB);
        if (subStr == b) {
            return -1;
        }
    } else if (lenA < lenB) {
        subStr = b.substr(lenB - lenA);
        if (subStr == a) {
            return 1;
        }
    }
    return 0;
}

int compPhone(const string &a, const string &b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    return a < b;
}

int compName(const contact &a, const contact &b) {
    return a.name < b.name;
}

int main() {
    int n, j, phoneN, t, peopleN = 0, i;
    string numTemp, nameTemp;
    scanf("%d", &n);
    for (int k = 0; k < n; k++) {
        cin >> nameTemp >> phoneN;
        for (i = 0; i < peopleN; i++) {
            if (c[i].name == nameTemp) {
                break;
            }
        }
        if (i == peopleN) {
            c[i].name = nameTemp;
            peopleN++;
        }
        for (int k = 0; k < phoneN; k++) {
            cin >> numTemp;
            for (j = 0; j < c[i].phoneCount; j++) {
                t = checkSub(numTemp, c[i].phonenum[j]);
                if (t == 1) {
                    break;
                }
                if (t == -1) {
                    c[i].phonenum[j] = numTemp;
                    break;
                }
            }
            if (j == c[i].phoneCount) {
                c[i].phonenum[c[i].phoneCount] = numTemp;
                c[i].phoneCount++;
            }
        }
    }
    printf("%d\n", peopleN);
    sort(c, c + peopleN, compName);
    for (int i = 0; i < peopleN; i++) {
        cout << c[i].name << ' ' << c[i].phoneCount << ' ';
        sort(c[i].phonenum, c[i].phonenum + c[i].phoneCount, compPhone);
        for (j = 0; j < c[i].phoneCount; j++) {
            cout << c[i].phonenum[j] << ' ';
        }
        putchar('\n');
    }
    return 0;
}
