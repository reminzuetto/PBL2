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

void Customer::setAmountOfCus() {

    this->AmountOfCus ++;

}

int Customer::getAmountOfCus() {

    return this->AmountOfCus;

}
void Customer::setID(const string& id) {

    this->ID = id;

}

string Customer::getID() {

    return this->ID;

}

void Customer::BuyTicket(Vector <Film> ListFilm) {

    Trade t;
    t.CreateTrading(ListFilm);
    this->ListOfTrade.push_back(t);

}

void Customer::getTrade() {

    for (int i = 0; i < ListOfTrade.getSize(); i ++) {

        Trade t = ListOfTrade[i].getData();
        t.PrintBill();
        

    }

}
// ostream& operator<<(ostream& os, const Customer& cus)
// {
//     os << "Ten: " << cus.Name << endl;
//     os << "Tuoi: " << cus.Age << endl;
//     os << "So dien thoai: " << cus.PhoneNumber << endl;
//     os << "Loai khach hang: ";
//     if (cus.TypeOfCus == "1")
//         os << "Khach hang thanh vien" << endl;
//     else
//         os << "Khach hang binh thuong" << endl;
//     os << "Lich su giao dich: " << endl;
//     for (int i = 0; i < cus.ListOfTrade.size(); i++)
//     {
//         os << cus.ListOfTrade[i];
//     }
//     return os;
// }
void Customer::Input()
{
    cout << "Nhap ten khach hang: ";
    getline(cin, this->Name);
    cout << "Nhap tuoi khach hang: ";
    cin >> this->Age;
    cout << "Nhap so dien thoai khach hang: ";
    cin.ignore();
    getline(cin, this->PhoneNumber);
    cout << "Quy khach co phai la khach hang thanh vien khong?\nY la co, N la khong. [Y/N] : ";
    char c;
    cin >> c;
    if (c == 'Y') setTypeOfCus(true);
    else setTypeOfCus(false);
}
void Customer::Output()
{
    cout << "Ten khach hang: " << this->Name << endl;
    cout << "Tuoi: " << this->Age << endl;
    cout << "So dien thoai khach hang: " << this->PhoneNumber << endl;
    if (this->TypeOfCus == true)
        cout << "Khach hang thanh vien" << endl;
    else
        cout << "Khanh hang binh thuong" << endl;
    // cout << "Lich su giao dich: " << endl;
    // for (int i = 0; i < this->ListOfTrade.size(); i++)
    // {
    //     cout << this->ListOfTrade[i];
    // }
}
istream& operator>>(istream& is, Customer& c)
{
    string tempid = "", tempname = "", tempphone = "";
    while (tempid == "") {

        getline(is, tempid);

    }
    c.ID = tempid;
    while (tempname == "") {

        getline(is, tempname);

    }
    c.Name = tempname;
    is >> c.Age;
    while (tempphone == "") {

        getline(is, tempphone);

    }
    c.PhoneNumber = tempphone;
    // string s;
    // getline(is, s);
    // if (s == "Membership") c.TypeOfCus = true;
    // else c.TypeOfCus = false;
    is >> c.TypeOfCus;
    is.ignore(numeric_limits<streamsize>::max(), '\n');
    return is;  
}
ostream& operator<<(ostream& os, const Customer& c)
{
    os << c.ID << endl;
    os << c.Name << endl;
    os << c.Age << endl;
    os << c.PhoneNumber << endl;
    // string s;
    // if (c.TypeOfCus == true) s = "Membership";
    // else s = "Normal";
    os << c.TypeOfCus << endl;
    return os;
}