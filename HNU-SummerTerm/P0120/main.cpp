// p0120

#include <iostream>
#include <string>

using namespace std;

//struct TreeNode {
//    TreeNode *left{};
//    TreeNode *right{};
//    char elem{};
//};

void solution(string pre, string in, int pre_start, int in_start, int in_end) {
    if (in_start >= in_end) {
        return;
    }
    int index;
    for (index = in_start; index < in_end; ++index) {
        if (in[index] == pre[pre_start]) {
            break;
        }
    }
    solution(pre, in, pre_start + 1, in_start, index);
    solution(pre, in, pre_start + 1 + index - in_start, index + 1, in_end);
    cout << in[index];
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    string a, b;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        cin >> a >> b;
        solution(a, b, 0, 0, n);
        cout << endl;
    }
}
