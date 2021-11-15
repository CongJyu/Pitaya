//
//  main.cpp
//  EX4-Q02 爬虫
//
//  Created by cyrain on 2021/10/18.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 1, u = 0, d = 0;
    int out[100] = {0};
    int time = 0;
    int distance = 0;
    int i = 0;
    int counter = 0;
    while (n != 0) {
        cin >> n >> u >> d;
        distance = u;
        while (0 == 0) {
            if (distance < n) {
                distance = distance + u - d;
                time += 2;
            } else {
                time++;
                break;
            }
        }
        if (n != 0) {
            out[i] = time;
            i++;
            time = 0;
            counter++;
        } else {
            break;
        }
    }
    for (i = 0; i < counter; i++) {
        cout << out[i] << endl;
    }
    return 0;
}
