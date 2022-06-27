// t04p20

#include <iostream>

using namespace std;

int main() {
    int n = 0;  // 选手数量
    cin >> n;
    int *score_of_competitors = new int[n];
    int *rank_of_competitors = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> score_of_competitors[i];
    }

    return 0;
}
