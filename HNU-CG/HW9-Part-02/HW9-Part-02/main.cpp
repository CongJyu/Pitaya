//
//  main.cpp
//  HW9-Part-02 “Book”的实现
//
//  Created by Rain Chen on 2021/12/23.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Book {
public:
    Book();
    void setInfo();
    void show();
private:
    float price;
    string shelf_id;
};

Book::Book() {
    price = 0;
    shelf_id = "";
}

void Book::setInfo() {
    shelf_id = new char[30];
    getline(cin, shelf_id);
    cin >> price;
    cin.get();
}

void Book::show() {
    cout << left << "Shelf_ID: "
        << setfill(' ') << setw(18)
        << shelf_id << "Price: " << price
        << endl;
}

int main() {
    int n;
    cin >> n;
    cin.get();
    Book library[n];
    for (int i = 0; i < n; i++) {
        library[i].setInfo();
    }
    for (int i = 0; i < n; i++) {
        library[i].show();
    }
    return 0;
}
