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

    string id, pass;
    getline(cin, id);
    setID(this->ID);
    cin.ignore();
    getline(cin, pass);
    setPass(this->Password);

}

void Account::Register() {

    string id, pass;
    getline(cin, id);
    setID(this->ID);
    cin.ignore();
    getline(cin, pass);
    setPass(this->Password);
    this->cus.Input();

}

bool Account::operator==(const Account& account) {

    return (this->ID == account.ID && this->Password == account.ID);

}