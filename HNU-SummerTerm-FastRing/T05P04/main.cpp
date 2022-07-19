// t05p04

#include <algorithm>
#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;

bool visited[200001];
vector<int> G[200001]; //图的邻接表

int main() {
    ios::sync_with_stdio(false);
    int temp, tempFrom, tempTo, n, currPos, childNum;
    vector<int>::iterator it;
    queue<int> reqSeq, visitSeq; //请求访问顺序，实际访问顺序
    set<int> childSet;
    cin >> n;
    for (int i = 1; i < n; ++i) {
        cin >> tempFrom >> tempTo;
        G[tempFrom].push_back(tempTo);
        G[tempTo].push_back(tempFrom);
    }
    for (int i = 0; i < n; i++) {
        cin >> temp;
        reqSeq.emplace(temp);
    }
    visitSeq.push(1);
    reqSeq.pop();
    while (!visitSeq.empty()) {
        currPos = visitSeq.front();
        visitSeq.pop();
        if (visited[currPos]) {
            continue;
        }
        visited[currPos] = true;
        for (it = G[currPos].begin(); it != G[currPos].end(); it++) {
            if (!visited[*it]) {
                childSet.emplace(*it);
            }
        }
        childNum = (int) childSet.size();
        for (int i = 0; i < childNum; i++) {
            auto it = childSet.find(reqSeq.front());
            if (it == childSet.end()) {
                cout << "No" << endl;
                return 0;
            }
            visitSeq.emplace(reqSeq.front());
            reqSeq.pop();
        }
        childSet.clear();
    }
    cout << "Yes" << endl;
    return 0;
}
