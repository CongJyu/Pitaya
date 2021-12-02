//
//  main.cpp
//  HW7-Q01 武将排位
//
//  Created by Rain Chen on 2021/11/30.
//

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct Wujiang {
    string name;
    int body;
    int power;
    int iq;
};
int main() {
    Wujiang gen;
    string tmp;
    cin >> tmp;
    if (tmp == "#") {
        return 0;
    } else {
        cin >> gen.body >> gen.power >> gen.iq;
    }
}
