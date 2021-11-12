//
//  main.cpp
//  HW2_LB2_Q05
//
//  Created by cyrain on 2021/10/9.
//

#include <iostream>
#include <iomanip>
int main()
{
    using namespace std;
    int ill = 0, dead = 0;
    double pct = 0.0;
    cin >> ill >> dead;
    pct = (dead / 1.0) / (ill / 1.0);
    pct = pct * 100;
    cout << fixed << setprecision(3) << pct << "%";
    return 0;
}
