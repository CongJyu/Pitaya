// t03p10

#include <iostream>

using namespace std;

int num[200000] = {0};  // 用数组位置表示负数的时候把整个数组的 0 位置向正方向移动一半长度

int main() {
    int input_left = 0, input_right = 0;
    // the first
    while (true) {
        cin >> input_left >> input_right;
        if (input_left == 0 && input_right == 0) {
            break;
        }
        num[input_left + 100000] += input_right;
    }
    // the second
    while (true) {
        cin >> input_left >> input_right;
        if (input_left == 0 && input_right == 0) {
            break;
        }
        num[input_left + 100000] += input_right;
    }
    for (int i = 200000 - 1; i >= 0; --i) {
        if (num[i] != 0) {
            cout << i - 100000 << " " << num[i] << endl;
        }
    }
    return 0;
}
