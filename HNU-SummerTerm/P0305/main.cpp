// p0305

#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    string code;
    int score{};
};

bool cmp(const Student &a, const Student &b) {
    return a.score > b.score;
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    Student *s{new Student[n]};
    for (int i{}; i < n; ++i) {
        cin >> s[i].name >> s[i].code >> s[i].score;
    }
    sort(s, s + n, cmp);
    cout << s[0].name << " " << s[0].code << endl;
    cout << s[n - 1].name << " " << s[n - 1].code << endl;
    delete[] s;
    return 0;
}
