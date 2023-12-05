#include <iostream>
#include "Customer.h"

using namespace std;

Customer::Customer()
{}
Customer::~Customer()
{}
void Customer::setname(string name)
{
    this->Name = name;
}
string Customer::getname() const
{
    return this->Name;
}
void Customer::setage(int age)
{
    this->Age = age;
}
int Customer::getage() const
{
    return this->Age;
}
void Customer::setPhoneNumber(string phone)
{
    this->PhoneNumber = phone;
}
string Customer::getPhoneNumber() const
{
    return this->PhoneNumber;
}
void Customer::setTypeOfCus(bool type)
{
    this->TypeOfCus = type;
}
bool Customer::getTypeOfCus() const
{
    return this->TypeOfCus;
}
void Customer::BuyTicket()
{
    Trade t;
    t.input();
    this->ListOfTrade.push_back(t);
}
Trade Customer::getTrade(int i) const
{
    return this->ListOfTrade[i];
}
ostream& operator<<(ostream& os, const Customer& cus)
{
    os << "Name: " << cus.Name << endl;
    os << "Age: " << cus.Age << endl;
    os << "Phone Number: " << cus.PhoneNumber << endl;
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
    cout << "Type of Customer: ";
    if (this->TypeOfCus == 0)
        cout << "Student" << endl;
    else
        cout << "Adult" << endl;
    cout << "List of Trade: " << endl;
    for (int i = 0; i < this->ListOfTrade.size(); i++)
    {
        cout << this->ListOfTrade[i];
    }
}