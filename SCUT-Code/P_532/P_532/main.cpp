//
//  main.cpp
//  P_532
//
//  Created by cyrain on 2021/10/26.
//

#include <iostream>
#include <algorithm>
int main() {
    using namespace std;
    int num[3] = {0};
    for (int i = 0; i < 3; i++) {
        cin >> num[i];
    }
    int sum = 0, avg = 0, prd = 0, sml = 0, lar = 0;
    sum = num[0] + num[1] + num[2];
    avg = (num[0] + num[1] + num[2]) / 3;
    prd = num[0] * num[1] * num[2];
    sort(num, num + 2);
    sml = num[0];
    lar = num[2];
    cout << "Sum is " << sum << endl;
    cout << "Average is " << avg << endl;
    cout << "Product is " << prd << endl;
    cout << "Smallest is " << sml << endl;
    cout << "Largest is " << lar << endl;
    return 0;
}
