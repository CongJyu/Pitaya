// p0309

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct College {
    int num{};
    int score{};
};

bool cmp(College a, College b) {
    return a.score > b.score;
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    vector<College> co;
    int j;
    for (int i{}; i < n; ++i) {
        int tmp_num{}, tmp_score{};
        cin >> tmp_num >> tmp_score;
        bool found{false};
        for (j = 0; j < (int) co.size(); ++j) {
            if (co[j].num == tmp_num) {
                found = true;
                break;
            }
        }
        if (found) {
            co.at(j).score += tmp_score;
        } else {
            College in;
            in.num = tmp_num;
            in.score = tmp_score;
            co.push_back(in);
        }
    }
    sort(co.begin(), co.end(), cmp);
    cout << co[0].num << " " << co[0].score << endl;
    return 0;
}
