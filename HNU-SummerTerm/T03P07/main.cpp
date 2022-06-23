// t03p07

#include <iostream>
#include <string>

using namespace std;

string pinyin[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

int main() {
    string in;
    cin >> in;
    int sum = 0;
    for (char i: in) {
        sum += i - '0';
    }
    string sum_out = to_string(sum);
    cout << pinyin[sum_out[0] - '0'];
    for (int i = 1; i < (int) sum_out.length(); ++i) {
        cout << " " << pinyin[sum_out[i] - '0'];
    }
    cout << endl;
    return 0;
}
