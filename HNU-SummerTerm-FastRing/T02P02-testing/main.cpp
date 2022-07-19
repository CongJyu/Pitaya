// t02p02-testing

#include <iostream>

using namespace std;

int main() {
    int size = 0;
    size = rand() % 20 + 1;
    int *test = new int[size];
    test[size - 1] = 0;
    for (int i = 0; i < size - 1; ++i) {
        test[i] = rand() % 10000 + 1;
    }
    for (int i = 0; i < size; ++i) {
        cout << test[i] << endl;
    }
    return 0;
}
