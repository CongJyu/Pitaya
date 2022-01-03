//
//  main.cpp
//  HW10-Part-01 实现宠物叫声的多态性
//
//  Created by Rain Chen on 2022/1/3.
//

#include <iostream>
#include <string>
using namespace std;
class Pet {
private:
    std::string color;
    int weight;
    int age;
public:
    Pet() {}
    virtual void speak() {}
};

class Cat : public Pet {
public:
    Cat() {}
    virtual void speak() {
        cout << "Cat: miao miao miao..." << endl;
    }
};

class Dog : public Pet {
public:
    Dog() {}
    virtual void speak() {
        cout << "Dog: wang wang wang..." << endl;
    }
};

//void test(Pet & p) {
//    p.speak();
//}

int main(int argc, char ** args) {
    Pet * pet;
    Cat cat;
    Dog dog;
    cat.speak();
    dog.speak();
    return 0;
}
