#include "Account.h"

void Account::setID(const string& ID) {

    this->ID = ID;

}

string Account::getID() {

    return this->ID;

}

void Account::setPass(const string& Password) {

    this->Password = Password;

}

string Account::getPass() {

    return this->Password;

}

void Account::setCus(const Customer& cus) {

    this->CusInfo = cus;

}

Customer Account::getCus() {

    return this->CusInfo;

}

void Account::Login() {

    cout << "ID : ";
    getline(cin, this->ID);
    cout << "Password : ";
    getline(cin, this->Password);

}

void Account::Register() {

    Customer c;
    cout << "Nhap vao ID cua ban : ";
    getline(cin, this->ID);
    cout << "Nhap vao mat khau cua ban : ";
    getline(cin, this->Password);
    CusInfo.Input();

}

bool Account::operator==(const Account& account) {

    return (this->ID == account.ID && this->Password == account.Password);

}

istream operator>>(istream& is, Account& ac)
{
    getline(is, ac.ID);
    getline(is, ac.Password);
    is >> ac.CusInfo;
    return is;
}