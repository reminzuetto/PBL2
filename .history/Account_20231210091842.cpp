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

void Account::Login() {

    cout << "ID : ";
    getline(cin, this->ID);
    cout << "Password : ";
    getline(cin, this->Password);

}

void Account::Register() {

    cout << "Nhap vao ID cua ban : ";
    getline(cin, this->ID);
    cout << "Nhap vao mat khau cua ban : ";
    getline(cin, this->Password);
    cout << "Xac nhan lai mat khau : ";
    string s;
    int count = 1;
    getline(cin, s);
    while (count < 4) {

        getline(cin, s);
        count ++;

    }

    if (count == 4) cout << "Ban nhap sai qua nhieu lan";

}

bool Account::operator==(const Account& account) {

    return (this->ID == account.ID && this->Password == account.Password);

}

istream& operator>>(istream& is, Account& ac)
{
    getline(is, ac.ID);
    getline(is, ac.Password);
    return is;
}
ostream& operator<<(ostream& os, const Account& ac)
{
    os << ac.ID << endl;
    os << ac.Password << endl;
    return os;
}