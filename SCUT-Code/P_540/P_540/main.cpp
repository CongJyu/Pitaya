//
//  main.cpp
//  P_540 3.13 Invoice Class
//
//  Created by Rain Chen on 2021/12/28.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Invoice {
private:
    string nu;
    string de;
    int co;
    int pr;
public:
    Invoice(string num, string des, int cnt, int pri) {
        if (cnt < 0) {
            cout << "quantity cannot be negative. quantity set to 0." << endl;
            cnt = 0;
        }
        if (pri < 0) {
            cout << "pricePerItem cannot be negative. pricePerItem set to 0." << endl;
            pri = 0;
        }
        nu = num;
        de = des;
        co = cnt;
        pr = pri;
    }
    string getPartNumber() {
        return nu;
    }
    string getPartDescription() {
        return de;
    }
    int getQuantity() {
        return co;
    }
    int getPricePerItem() {
        return pr;
    }
    int getInvoiceAmount() {
        return co * pr;
    }
    void setPartNumber(string n) {
        nu = n;
    }
    void setPartDescription(string n) {
        de = n;
    }
    void setQuantity(int n) {
        if (n < 0) {
            cout << "quantity cannot be negative. quantity set to 0." << endl;
            n = 0;
        }
        co = n;
    }
    void setPricePerItem(int n) {
        if (n < 0) {
            cout << "pricePerItem cannot be negative. pricePerItem set to 0." << endl;
            n = 0;
        }
        pr = n;
    }
};

int main() {
    string number;
    string description;
    int count;
    int price;
    cin >> number >> description >> count >> price;
    Invoice invoice(number, description, count, price);

    // display the invoice data members and calculate the amount
    cout << "Part number: " << invoice.getPartNumber() << endl;
    cout << "Part description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per item: $" << invoice.getPricePerItem() << endl;
    cout << "Invoice amount: $" << invoice.getInvoiceAmount() << endl;

    cin >> number >> description >> count >> price;
    invoice.setPartNumber(number);
    invoice.setPartDescription(description);
    invoice.setQuantity(count); // negative quantity, so quantity set to 0
    invoice.setPricePerItem(price);

    // display the modified invoice data members and calculate new amount
    cout << "Part number: " << invoice.getPartNumber() << endl;
    cout << "Part description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per item: $" << invoice.getPricePerItem() << endl;
    cout << "Invoice amount: $" << invoice.getInvoiceAmount() << endl;
}
