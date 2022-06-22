// t02p06

#include <iostream>
#include <cstring>

using namespace std;

long long convert(char a[]) {
    long long result = 0;
    int length = (int) strlen(a);
    long long product = 1;
    for (int i = length - 1; i >= 0; i--) {
        result += (a[i] - 'a') * product;
        product *= 26;
    }
    return result;
}

int main() {
    int n = 0;
    cin >> n;
    while (n--) {
        char a[15];
        char b[15];
        char res[15];
        cin >> a >> b;
        long long A = convert(a);
        long long B = convert(b);
        long long C = A + B;
        int num = 0;
        while (C != 0) {
            res[num++] = (C % 26 + 'a');
            C /= 26;
        }
        for (int i = num - 1; i >= 0; i--) {
            cout << res[i];
        }
        cout << endl;
    }
    return 0;
}
