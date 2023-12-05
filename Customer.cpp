#include <iostream>
#include "Customer.h"

using namespace std;

void Customer::setName(const string& name) {

    this->Name = name;

}

string Customer::getName() {

    return this->Name;

}

void Customer::setAge(const int& age) {

    this->Age = age;

}

int Customer::getAge() {

    return this->Age;

}

void Customer::setPhoneNumber(const string& phone) {

    this->PhoneNumber = phone;

}

string Customer::getPhoneNumber() {

    return this->PhoneNumber;

}

void Customer::setTypeOfCus(const bool& type) {

    this->TypeOfCus = type;

}

bool Customer::getTypeOfCus() {

    return this->TypeOfCus;

}

void Customer::BuyTicket() {

    Trade t;
    t.input();
    this->ListOfTrade.push_back(t);

}

Trade Customer::getTrade(int i) const {

    return this->ListOfTrade[i];

}

ostream& operator<<(ostream& os, const Customer& cus) {

    os << "Name: " << cus.Name << endl;
    os << "Age: " << cus.Age << endl;
    os << "Phone Number: " << cus.PhoneNumber << endl;
    os << "Type of Customer: ";
    if (cus.TypeOfCus == 0)
        os << "Student" << endl;
    else
        os << "Adult" << endl;
    os << "List of Trade: " << endl;
    for (int i = 0; i < cus.ListOfTrade.size(); i++)
    {
        os << cus.ListOfTrade[i];
    }
    return os;

}

void Customer::Input() {

    string name, phone;
    int age;
    char c;
    bool type;
    cout << "Nhap ho ten khach hang : ";
    getline(cin, name);
    setName(name);

    cout << "Nhap tuoi khach hang : ";
    cin >> age;
    setAge(age);

    cout << "Nhap so dien thoai khach hang : ";
    cin.ignore();
    getline(cin, phone);
    setPhoneNumber(phone);

    cout << "Quy khach hang co the thanh vien khong?\nY la co, N la khong. [Y/N] : ";
    cin >> c;
    if (c == 'Y') type = true;
    else type = false;
    setTypeOfCus(type);

}

void Customer::Output() {

    cout << "Ho ten khach hang : " << getName() << endl;

    cout  << "Tuoi khach hang : " << getAge() << endl;

    cout << "So dien thoai khach hang : " << getPhoneNumber() << endl;

    bool type = getTypeOfCus();
    if (type == true) cout << "Membership" << endl;
    else cout << "Normal" << endl;

}