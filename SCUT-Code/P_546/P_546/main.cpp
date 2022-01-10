//
//  main.cpp
//  P_546 Tutorial 1.3 (Animal Class)
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Animal {
public:
    Animal(string n, int a, string e) {
        name = n;
        age = a;
        extra = e;
    }
    string showName() {
        return name;
    }
    int showAge() {
        return age;
    }
    string showExtra() {
        return extra;
    }
    void setName(string n) {
        name = n;
    }
    void setAge(int n) {
        age = n;
    }
    void setExtra(string n) {
        extra = n;
    }
private:
    string name;
    int age;
    string extra;
};

int main() {
    int age;
    string name, extra;
    cin >> name >> age >> extra;
    Animal animal(name, age, extra);
    cout << animal.showName() << endl;
    cout << animal.showAge() << endl;
    cout << animal.showExtra() << endl;
    cin >> name >> age >> extra;
    animal.setAge(age);
    animal.setName(name);
    animal.setExtra(extra);
    cout << animal.showName() << endl;
    cout << animal.showAge() << endl;
    cout << animal.showExtra() << endl;
    return 0;
}
