// h03p05

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;  // number of the character
    cin >> n;
    char input;
    int number = 0, lower_case = 0, upper_case = 0, other = 0;
    int sum = 0;
    while (n--) {
        cin >> input;
        if (input >= '0' && input <= '9') {
            number++;
            sum += input - '0';
        } else if (input >= 'a' && input <= 'z') {
            lower_case++;
        } else if (input >= 'A' && input <= 'Z') {
            upper_case++;
        } else {
            other++;
        }
    }
    cout << upper_case << " " << lower_case << " " << number << " " << other << endl;
    if (sum != 0) {
        cout << sum << endl;
    }
    return 0;
}
