// h03p07

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double distance = 0;
    cin >> distance;
    double time_walk, time_ride;
    time_walk = distance / 1.2;
    time_ride = distance / 3 + 27 + 23;
    if (time_walk > time_ride) {
        cout << "Bike" << endl;
    } else if (time_ride > time_walk) {
        cout << "Walk" << endl;
    } else if (time_ride == time_walk) {
        cout << "All" << endl;
    }
    return 0;
}
