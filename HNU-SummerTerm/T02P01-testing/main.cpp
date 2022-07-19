// t02p01-testing

/*
 * 这是作业二第一题的测试数据生成程序
 * 它将随机产生 1000 个字符长度的包含空格的字符串
 */

#include <iostream>
#include <string>

using namespace std;

string letter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {
    char test[1000];
    for (char &i: test) {
        i = letter[rand() % (letter.length())];
    }
    int times = rand() % 800;
    for (int i = 1; i < times; ++i) {
        int pos = rand() % 998 + 1;
        if (test[pos - 1] != ' ' && test[pos + 1] != ' ') {
            test[pos] = ' ';
        }
    }
    cout << "Start data." << endl;
    for (char i: test) {
        cout << i;
    }
    cout << endl << "End data." << endl;
    return 0;
}
