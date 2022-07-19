// t01p20

#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    TreeNode *left{};
    TreeNode *right{};
    char elem{};
};

void sln(string pre, string in, int pre_start, int in_start, int in_end) {
    if (in_start >= in_end) {
        return;
    }
    int index;
    for (index = in_start; index < in_end; ++index) {
        if (in[index] == pre[pre_start]) {
            break;
        }
    }
    sln(pre, in, pre_start + 1, in_start, index);
    sln(pre, in, pre_start + 1 + index - in_start, index + 1, in_end);
    cout << in[index];
}

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    string a, b;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        cin >> a >> b;
        sln(a, b, 0, 0, n);
        cout << endl;
    }
    return 0;
}
