// t02p13

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    auto *original = new string[n];
    for (int i = 0; i < n; ++i) {
        cin >> original[i];
    }
    vector<vector<char> > set;
    vector<char> telephone;
    set.clear();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < (int) original[i].length(); ++j) {
            telephone.clear();
            if (original[i][j] >= '0' && original[i][j] <= '9') {
                telephone.push_back(original[i][j]);
            } else if (original[i][j] == 'A' || original[i][j] == 'B' || original[i][j] == 'C') {
                telephone.push_back('2');
            } else if (original[i][j] == 'D' || original[i][j] == 'E' || original[i][j] == 'F') {
                telephone.push_back('3');
            } else if (original[i][j] == 'G' || original[i][j] == 'H' || original[i][j] == 'I') {
                telephone.push_back('4');
            } else if (original[i][j] == 'J' || original[i][j] == 'K' || original[i][j] == 'L') {
                telephone.push_back('5');
            } else if (original[i][j] == 'M' || original[i][j] == 'N' || original[i][j] == 'O') {
                telephone.push_back('6');
            } else if (original[i][j] == 'P' || original[i][j] == 'R' || original[i][j] == 'S') {
                telephone.push_back('7');
            } else if (original[i][j] == 'T' || original[i][j] == 'U' || original[i][j] == 'V') {
                telephone.push_back('8');
            } else if (original[i][j] == 'W' || original[i][j] == 'X' || original[i][j] == 'Y') {
                telephone.push_back('9');
            }
        }
        set.push_back(telephone);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < telephone.size(); ++j) {
            cout << set[i][j];
        }
        cout << endl;
    }
    return 0;
}
