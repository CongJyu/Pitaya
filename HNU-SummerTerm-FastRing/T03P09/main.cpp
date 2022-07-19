// t03p09

#include <iostream>
#include <algorithm>
// #include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    /*
    map<int, int> digger;
    while (n--) {
        int num = 0, score = 0;
        cin >> num >> score;
        digger.insert(pair<int, int>(num, score));
    }
    int result_num = 0, result_score = 0;
    map<int, int>::iterator it;
    for (it = digger.begin(); it != digger.end(); ++it) {
        if (it->second > result_score) {
            result_num = it->first;
        }
    }
    cout << result_num << " " << result_score << endl;
     */
    int tmp_school = 0, tmp_score = 0, max_score_school = 0;
    int score[1000001] = {0};
    while (n--) {
        cin >> tmp_school >> tmp_score;
        score[tmp_school] += tmp_score;
        if (score[tmp_school] > score[max_score_school]) {
            max_score_school = tmp_school;
        }
    }
    cout << max_score_school << " " << score[max_score_school] << endl;
    return 0;
}
