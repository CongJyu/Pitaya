//
//  main.cpp
//  HW7-Part-01 结构成员访问
//
//  Created by Rain Chen on 2021/12/12.
//

#include <iostream>
using namespace std;

struct Weather {
    double temp;
    double wind;
};

int main() {
    Weather today;
    cin >> today.temp >> today.wind;
    cout << "Temp=" << today.temp << endl;
    cout << "Wind=" << today.wind << endl;
    return 0;
}
