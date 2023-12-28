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

    system("cls");
    cin.ignore();
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
    string i = "", p = "";
    while (i == "") {
        
        getline(is, i);

    }
    ac.setID(i);

    while (p == "") {
    
        getline(is, p);

    }
    ac.setPass(p);
    return is;
}
ostream& operator<<(ostream& os, Account& ac)
{
    string i, p;
    i = ac.getID();
    p = ac.getPass();
    os << i << endl;
    os << p << endl;
    return os;
}