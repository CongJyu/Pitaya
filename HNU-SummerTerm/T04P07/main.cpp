// t04p07

#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int current_max_length = 1, wait_to_be_compared = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i - 1] < a[i]) {
            if (current_max_length > wait_to_be_compared) {
                wait_to_be_compared = current_max_length;
            }
            current_max_length++;
        } else {
            current_max_length = 1;
        }
        if (current_max_length > wait_to_be_compared) {
            wait_to_be_compared = current_max_length;
        }
    }
    int the_max_length = wait_to_be_compared;
    cout << the_max_length << endl;
    delete[] a;
    return 0;
}
