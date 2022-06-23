// t03p05

#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    string major;
    int score{};
};

bool cmp(const Student &a, const Student &b) {
    if (a.score != b.score) {
        return a.score < b.score;
    } else {
        return a.score > b.score;
    }
}

int main() {
    int n = 0;
    cin >> n;
    auto *rank = new Student[n];
    for (int i = 0; i < n; ++i) {
        cin >> rank[i].name >> rank[i].major >> rank[i].score;
    }
    sort(rank, rank + n, cmp);
    cout << rank[n - 1].name << " " << rank[n - 1].major << endl;
    cout << rank[0].name << " " << rank[0].major << endl;
    return 0;
}
