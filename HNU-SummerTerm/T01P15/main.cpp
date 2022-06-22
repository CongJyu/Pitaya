// t01p15

#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

struct Team {
    string name;
    int score{};
    int n_count{};
};

bool cmp(const Team &a, const Team &b) {
    if (a.score == b.score) {
        return a.n_count > b.n_count;
    } else {
        return a.score > b.score;
    }
}

int main() {
    int n = 0;
    cin >> n;
    while (n--) {
        Team team[4];
        string team1, team2, vs;
        int score1, score2;
        map<string, int> mps;
        int remark = 0;
        for (int i = 0; i < 12; ++i) {
            cin >> team1 >> score1 >> vs >> score2 >> team2;
            if (remark < 4 && mps.find(team1) == mps.end()) {
                team[remark].name = team1;
                mps[team1] = remark;
                remark++;
            }
            if (remark < 4 && mps.find(team2) == mps.end()) {
                team[remark].name = team2;
                mps[team2] = remark;
                remark++;
            }
            int n1 = mps[team1], n2 = mps[team2];
            if (score1 != score2) {
                if (score1 > score2) {
                    team[n1].score += 3;
                    team[n1].n_count += abs(score1 - score2);
                    team[n2].n_count -= abs(score1 - score2);
                } else {
                    team[n2].score += 3;
                    team[n2].n_count += abs(score1 - score2);
                    team[n1].n_count -= abs(score1 - score2);
                }
            } else {
                team[n1].score++;
                team[n2].score++;
            }
        }
        sort(team, team + 4, cmp);
        cout << team[0].name << " " << team[1].name << endl;
    }
    return 0;
}
