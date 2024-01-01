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
    cout << "ID : ";
    string tid, tp;
    while (tid == "") {

        getline(cin, tid);

    }
    this->ID = tid;
    cout << "Password : ";
    while (tp == "") {

        getline(cin, tp);

    }
    this->Password = tp;

}

void Account::Register(int* tmp) {

    string tid, tp;
    cout << "Nhap vao ID cua ban : ";
    while (tid == "") {

        getline(cin, tid);

    }
    this->ID = tid;
    cout << "Nhap vao mat khau cua ban : ";
    while (tp == "") {

        getline(cin, tp);

    }
    this->Password = tp;
    cout << "Xac nhan lai mat khau : ";
    string s;
    while (s == "") {

        getline(cin, s);

    }
    if (s != this->Password) {

        int count = 0;
        while (count < 4) {

            cout << "Xac nhan lai mat khau : ";
            s = "";
            while (s == "") {

                getline(cin, s);

            }
            if (s == this->Password) {
                
                *tmp = 1;
                return;
            
            }
            else count ++;

        }

        if (count == 4) {
            
            cout << "Ban nhap sai qua 5 lan. Tao tai khoan that bai" << endl;
            system("pause");
            return;

        }

    }

    else {

        *tmp = 1;
        return;

    }

}

bool Account::operator==(const Account& account) {

    return (this->ID == account.ID && this->Password == account.Password);

}

Account& Account::operator=(const Account& ac) {

    this->ID = ac.ID;
    this->Password = ac.Password;
    return *this;

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