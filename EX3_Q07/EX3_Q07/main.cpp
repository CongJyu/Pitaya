//
//  main.cpp
//  EX3_Q07
//
//  Created by cyrain on 2021/10/10.
//

#include <iostream>

const int t_unlock = 27;
const int t_lock = 23;
const float v_walk = 1.2;
const float v_bike = 3.0;

int walk(int);
int bike(int);
int main()
{
    using namespace std;
    int dis = 0;
    cin >> dis;
    walk(dis);
    bike(dis);
    if (walk(dis) < bike(dis))
    {
        cout << "Walk" << endl;
    }
    else if (walk(dis) > bike(dis))
    {
        cout << "Bike" << endl;
    }
    else
    {
        cout << "All" << endl;
    }
    return 0;
}
int walk(int n)
{
    float out = 0.0;
    out = n / v_walk;
    return out;
}
int bike(int n)
{
    float out = 0.0;
    out = n / v_bike + t_lock + t_unlock;
    return out;
}
