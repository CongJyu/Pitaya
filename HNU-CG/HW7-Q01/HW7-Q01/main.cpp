//
//  main.cpp
//  HW7-Q01 武将排位
//
//  Created by Rain Chen on 2021/11/30.
//

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
class Wujiang {
public:
    string name;
    int body;
    int iq;
    int power;
};

bool cmp1(Wujiang a, Wujiang b) {
    return a.body > b.body;
}
bool cmp2(Wujiang a, Wujiang b) {
    return a.iq > b.iq;
}
bool cmp3(Wujiang a, Wujiang b) {
    return a.power > b.power;
}

int main() {
    Wujiang gen[100];
    int i = 0;
    string tmp;
    while (1) {
        cin >> tmp;
        if (tmp == "#") {
            break;
        } else {
            gen[i].name = tmp;
            cin >> gen[i].body >> gen[i].power >> gen[i].iq;
        }
        i++;
    }
    int n = 0;
    cin >> n;
    switch (n) {
        case 1: sort(gen, gen + i, cmp1);
            break;
        case 2: sort(gen, gen + i, cmp2);
            break;
        case 3: sort(gen, gen + i, cmp3);
            break;
    }
    for (int j = 0; j < i; j++) {
        cout << gen[j].name << " "
        << gen[j].body << " "
        << gen[j].power << " "
        << gen[j].iq << endl;
    }
    return 0;
}
