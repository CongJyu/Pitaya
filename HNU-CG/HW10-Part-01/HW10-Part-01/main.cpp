//
//  main.cpp
//  HW10-Part-01 实现宠物叫声的多态性
//
//  Created by Rain Chen on 2021/12/21.
//

#include <iostream>
#include <string>

using namespace std;

class Pet {
public:
    std::string color;
    int weight;
    int age;
public:
    //  write something
    virtual void speak();
};

class Cat:public Pet {
    //  write somthing
};

class Dog:public Pet {
    //  write something
};

int main() {
    Pet * pet;
    Cat cat;
    Dog dog;
    
}
