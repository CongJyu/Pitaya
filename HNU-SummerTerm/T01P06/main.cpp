// t01p06

#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(const int *a, const int *b) {
    if (a[1] != b[1]) {
        return a[1] > b[1];
    } else {
        return a[0] > b[0];
    }
}

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    char **a = new char *[m];
    for (int i = 0; i < m; i++) {
        a[i] = new char[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int bind = 2;
    int **disorder = new int *[m];
    for (int i = 0; i < m; i++) {
        disorder[i] = new int[bind];
    }
    for (int i = 0; i < m; i++) {
        disorder[i][1] = i;
    }
    for (int i = 0; i < m; i++) {
        for (int tag1 = 0; tag1 < n; tag1++) {
            for (int tag2 = tag1 + 1; tag2 < n; tag2++) {
                if (a[i][tag1] > a[i][tag2]) {
                    disorder[i][0]++;
                }
            }
        }
    }
    sort(disorder, disorder + m, cmp);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[disorder[i][1]][j];
        }
        cout << endl;
    }
    return 0;
}
