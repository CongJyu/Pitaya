// p0219

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Item {
    string ori_name;
    string conv_name;
    int quote{};
};

bool cmp(const Item &a, const Item &b) {
    return a.quote > b.quote;
}

int main() {
    ios::sync_with_stdio(false);
    while (true) {
        int n{};
        cin >> n;
        if (n == 0) {
            break;
        }
        Item *item_t{new Item[n]};
        for (int i{}; i < n; ++i) {
            cin.get();
            string s;
            getline(cin, s);
            item_t[i].ori_name = s;
            cin >> item_t[i].quote;
            int length{(int) item_t[i].ori_name.length()};
            char ch[250];
            for (int j{}; j < length; ++j) {
                if (item_t[i].ori_name[j] >= 'A' and item_t[i].ori_name[j] <= 'Z') {
                    ch[j] = (char) (item_t[i].ori_name[j] + 32);
                } else {
                    ch[j] = (char) (item_t[i].ori_name[j]);
                }
            }
            ch[length] = '\0';
            item_t[i].conv_name = ch;
        }
        int m{};
        cin >> m;
        cin.get();
        for (int i{}; i < m; ++i) {
            string s;
            getline(cin, s);
            int length{(int) s.length()};
            int u{}, v{};
            char ch[20];
            string str[10];
            for (int j{}; j < length; ++j) {
                if (s[j] >= 'A' and s[j] <= 'Z') {
                    s[j] += 32;
                }
                if (s[j] == ' ') {
                    ch[u] = '\0';
                    str[v++] = ch;
                    u = 0;
                    continue;
                }
                ch[u++] = s[j];
                if (j == length - 1) {
                    ch[u] = '\0';
                    str[v++] = ch;
                }
            }
            Item res[60];
            int t{};
            for (int j{}; j < n; ++j) {
                int o{};
                for (int k{}; k < v; ++k) {
                    int l{(int) str[k].length()};
                    int pos{(int) item_t[j].conv_name.find(str[k])};
                    if (pos != -1) {
                        string::iterator it = item_t[j].conv_name.begin() + pos + l;
                        if (*it == ' ' or *it == '\0') {
                            o++;
                        }
                    }
                }
                if (o == v) {
                    res[t++] = item_t[j];
                }
            }
            if (t == 0) {
                cout << endl << "***" << endl;
                continue;
            }
            sort(res, res + t, cmp);
            for (int j{}; j < t; ++j) {
                cout << res[j].ori_name << endl;
            }
            cout << "***" << endl;
        }
        cout << "---" << endl;
    }
    return 0;
}
