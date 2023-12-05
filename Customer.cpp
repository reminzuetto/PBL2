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
ostream& operator<<(ostream& os, const Customer& cus)
{
    os << "Ten: " << cus.Name << endl;
    os << "Tuoi: " << cus.Age << endl;
    os << "So dien thoai: " << cus.PhoneNumber << endl;
    os << "Loai khach hang: ";
    if (cus.TypeOfCus == "1")
        os << "Khach hang thanh vien" << endl;
    else
        os << "Khach hang binh thuong" << endl;
    os << "Lich su giao dich: " << endl;
    for (int i = 0; i < cus.ListOfTrade.size(); i++)
    {
        os << cus.ListOfTrade[i];
    }
    return os;
}
void Input()
{
    cout << "Nhap ten khach hang: ";
    cin >> this->Name;
    cout << "Nhap tuoi khach hang: ";
    cin >> this->Age;
    cout << "Nhap so dien thoai khach hang: ";
    cin >> this->PhoneNumber;
    cout << "Nhap loai khach hang: ";
    cin >> this->TypeOfCus;
}
void Output()
{
    cout << "Ten: " << this->Name << endl;
    cout << "Tuoi: " << this->Age << endl;
    cout << "So dien thoai: " << this->PhoneNumber << endl;
    cout << "Loai khach hang: ";
    if (this->TypeOfCus == 1)
        cout << "Khach hang thanh vien" << endl;
    else
        cout << "Khanh hang binh thuong" << endl;
    cout << "Lich su giao dich: " << endl;
    for (int i = 0; i < this->ListOfTrade.size(); i++)
    {
        cout << this->ListOfTrade[i];
    }
}