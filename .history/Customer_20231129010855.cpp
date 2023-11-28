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
    os << "Type of Customer: ";
    if (cus.TypeOfCus == 0)
        os << "Student" << endl;
    else
        os << "Adult" << endl;
    os << "Total Price: " << cus.TotalPrice << endl;
    os << "List of Trade: " << endl;
    for (int i = 0; i < cus.ListOfTrade.size(); i++)
    {
        os << cus.ListOfTrade[i];
    }
    return os;
}