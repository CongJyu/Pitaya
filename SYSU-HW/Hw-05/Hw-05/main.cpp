//
//  main.cpp
//  Hw-05
//
//  Created by Rain Chen on 2021/11/20.
//

//  火锅店打折
//#include <iostream>
#include <stdio.h>
//using namespace std;
int main() {
    char name[100];
//    cout << "Enter your name in English: ";
    printf("Enter your name in English: \r\n");
    int i = 0;
    while ((name[i] = getchar()) != '\n') {
        i++;
    }
//    cin.getline(name, 100);
    for (int i = 0; i < 100; i++) {
        if ((name[i] == 84 || name[i] == 116)
        && name[i + 1] == 101
        && name[i + 2] == 110
        && name[i + 3] == 103) {
//            cout << "Yes." << endl;
            printf("Yes.\r\n");
            return 0;
        } else if ((name[i] == 81 || name[i] == 113)
        && name[i + 1] == 105
        && name[i + 2] == 97
        && name[i + 3] == 110
        && name[i + 4] == 103) {
//            cout << "Yes." << endl;
            printf("Yes.\r\n");
            return 0;
        } else {
            continue;
        }
    }
//    cout << "No." << endl;
    printf("No.\r\n");
    return 0;
}
