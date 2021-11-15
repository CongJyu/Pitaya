//
//  main.cpp
//  HW2-Q05 新冠疫情死亡率
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <iomanip>
int main() {
    using namespace std;
    int ill = 0, dead = 0;
    double pct = 0.0;
    cin >> ill >> dead;
    pct = (dead / 1.0) / (ill / 1.0);
    pct = pct * 100;
    cout << fixed << setprecision(3) << pct << "%";
    return 0;
}
