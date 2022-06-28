// t03p04
// wrong answer

#include <iostream>

using namespace std;

int main() {
    int n = 0, w = 0;
    cin >> n >> w;
    int *a = new int[n];
    int number_of_people_on_bus = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        number_of_people_on_bus += a[i];
        if (number_of_people_on_bus > w) {
            cout << 0 << endl;
            return 0;
        }
    }
    cout << number_of_people_on_bus << endl;
    return 0;
}
