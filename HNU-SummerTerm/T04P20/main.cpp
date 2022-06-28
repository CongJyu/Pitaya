// t04p20

#include <iostream>
#include <algorithm>

using namespace std;

struct Competitor {
    int number{};
    int score{};
    int rank{};
};

bool cmp(Competitor a, Competitor b) {
    if (a.score != b.score) {
        return a.score > b.score;
    }
    return a.score < b.score;
}

int main() {
    int n = 0;
    cin >> n;
    auto *cpt = new Competitor[n];
    for (int i = 0; i < n; ++i) {
        cin >> cpt[i].score;
        cpt[i].number = i;
    }
    sort(cpt, cpt + n, cmp);
    int j = 1;
    cpt[0].rank = 1;
    for (int i = 1; i < n; ++i) {
        if (cpt[i - 1].score != cpt[i].score) {
            j++;
            cpt[i].rank = j;
        } else {
            cpt[i].rank = j;
        }
    }
    /*
    for (int i = 0; i < n; ++i) {
        cout << cpt[i].rank << " ";
    }
     */
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < n; ++k) {
            if (cpt[k].number == i) {
                cout << cpt[k].rank << " ";
                break;
            }
        }
    }
    cout << endl;
    delete[] cpt;
    return 0;
}
