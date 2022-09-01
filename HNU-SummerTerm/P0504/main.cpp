// p0504

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>

using namespace std;

bool visited[200001];
vector<int> g[200001];  // 图的邻接表

int main() {
    ios::sync_with_stdio(false);
    int temp{}, temp_from{}, temp_to{}, n{}, curr_pos, child_num;
    vector<int>::iterator it;
    queue<int> req_seq, visit_seq;  // 请求访问顺序和实际访问顺序
    set<int> child_set;
    cin >> n;
    for (int i{1}; i < n; ++i) {
        cin >> temp_from >> temp_to;
        g[temp_from].push_back(temp_to);
        g[temp_to].push_back(temp_from);
    }
    for (int i{}; i < n; ++i) {
        cin >> temp;
        req_seq.emplace(temp);
    }
    visit_seq.push(1);
    req_seq.pop();
    while (!visit_seq.empty()) {
        curr_pos = visit_seq.front();
        visit_seq.pop();
        if (visited[curr_pos]) {
            continue;
        }
        visited[curr_pos] = true;
        for (it = g[curr_pos].begin(); it != g[curr_pos].end(); ++it) {
            if (!visited[*it]) {
                child_set.emplace(*it);
            }
        }
        child_num = (int) child_set.size();
        for (int i{}; i < child_num; ++i) {
            auto it = child_set.find(req_seq.front());
            if (it == child_set.end()) {
                cout << "No" << endl;
                return 0;
            }
            visit_seq.emplace(req_seq.front());
            req_seq.pop();
        }
        child_set.clear();
    }
    cout << "Yes" << endl;
    return 0;
}
