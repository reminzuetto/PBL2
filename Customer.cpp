#include <iostream>
#include "Customer.h"

using namespace std;

Customer::Customer() {

    this->ID = "";
    this->Name = "";
    this->Age = 0;
    this->PhoneNumber = "";
    this->TypeOfCus = false;
    this->AmountOfTrade = 0;
    Vector<Trade> temptrade;
    this->ListOfTrade = temptrade;

}

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

void Customer::setAmountOfTrade(const int& amount) {

    this->AmountOfTrade = amount;

}

int Customer::getAmountOfTrade() {

    return this->AmountOfTrade;

}
void Customer::setID(const string& id) {

    this->ID = id;

}

string Customer::getID() {

    return this->ID;

}

void Customer::BuyTicket(Vector <Film> ListFilm) {

    Trade t;
    bool type = this->TypeOfCus;
    t.CreateTrading(ListFilm, type);
    if (type == true) cout << "Vi quy khach la khach hang thanh vien nen se duoc giam gia 20%" << endl;
    this->ListOfTrade.push_back(t);
    this->AmountOfTrade ++;
    cout << "Dat ve thanh cong" << endl;
    system("pause");

}

void Customer::PrintTrade() {

    system("cls");
    for (int i = 0; i < this->AmountOfTrade; i ++) {

        Trade t = this->ListOfTrade[i].getData();
        t.PrintBill();
        

    }

}

Vector <Trade> Customer::getTrade() {

    return this->ListOfTrade;

}

void Customer::setTrade(Vector<Trade> T) {

    this->ListOfTrade = T;

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
    string tname, tphone;
    cout << "Nhap ten khach hang: ";
    while (tname == "") {

        getline(cin, tname);

    }
    this->Name = tname;
    bool check = false;
    while (check == false)
    {
        int age;
        cout << "Nhap tuoi khach hang: ";
        cin >> age;
        if (cin.fail())
        {
            cout << "Dinh dang khong hop le, vui long nhap lai." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            if (age < 0)
            {
                cout << "Tuoi khong duoc nho hon 0. Vui long nhap lai." << endl;
            }
            else
            {
                this->Age = age;
                check = true;
            }
        }
    }
    
    while (tphone == "") {

        cout << "Nhap so dien thoai khach hang: ";
        cin.ignore();
        getline(cin, tphone);
        for (int i = 0; i < tphone.length(); i ++) {

            if (tphone[0] == '+' || ((int)tphone[i] >= 48 && (int)tphone[i] <= 57) ) {

                continue;

            }

            else {

                cout << "Dinh dang khong hop le, vui long nhap lai." << endl;
                tphone = "";
                break;

            }

        }

    }
    this->PhoneNumber = tphone;
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
    string temptype = "";
    while (temptype == "") {

        getline(is, temptype);

    }
    if (temptype == "Membership") c.TypeOfCus = true;
    else c.TypeOfCus = false;
    is >> c.AmountOfTrade;
    if (c.AmountOfTrade != 0) {

        string s = "GiaoDich/" + tempid + ".txt";
        ifstream tr;
        tr.open(s, ios::in);
        Vector <Trade> ltrade;
        for (int l = 0; l < c.AmountOfTrade; l ++) {

            Trade t;
            tr >> t;
            ltrade.push_back(t);

        }
        c.ListOfTrade = ltrade;
        tr.close();

    }
    return is;  
}
ostream& operator<<(ostream& os, Customer& c)
{
    os << c.ID << endl;
    os << c.Name << endl;
    os << c.Age << endl;
    os << c.PhoneNumber << endl;
    string s;
    if (c.TypeOfCus == true) s = "Membership";
    else s = "Normal";
    os << s << endl;
    os << c.AmountOfTrade << endl;
    if (c.AmountOfTrade != 0) {

        string s = "GiaoDich/" + c.ID + ".txt";
        ofstream tr;
        tr.open(s, ios::out);
        for (int i = 0; i < c.AmountOfTrade; i ++) {

            Trade t = c.ListOfTrade[i].getData();
            tr << t;

        }

    }
    return os;
}

bool Customer::operator==(const Customer& cus) {

    return ( this->ID == cus.ID && this->Name == cus.Name && this->Age == cus.Age && this->PhoneNumber == cus.PhoneNumber && this->TypeOfCus == cus.TypeOfCus);

}

Customer& Customer::operator=(const Customer& cus) {

    this->ID = cus.ID;
    this->Name = cus.Name;
    this->Age = cus.Age;
    this->PhoneNumber = cus.PhoneNumber;
    this->TypeOfCus = cus.TypeOfCus;
    this->AmountOfTrade = cus.AmountOfTrade;
    this->ListOfTrade = cus.ListOfTrade;

    return *this;

}

void Customer::edit() {
    system("cls");
    cout << "1. Ten\n2. Tuoi\n3. So dien thoai\n4. Loai khach hang\n";
    int choice;
    string s;
    cout << "Moi ban chon thong tin can thay doi : ";
    cin >> choice;
    cin.ignore();
    switch (choice)
    {
    case 1:
        cout << "Nhap ten moi: ";
        getline(cin, this->Name);
        break;
    case 2: {
        bool check = false;
        while (check == false)
        {
            int age;
            cout << "Nhap tuoi moi: ";
            cin >> age;
            if (cin.fail())
            {
                cout << "Sai dinh dang. Vui long nhap lai." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else
            {
                if (age < 0)
                {
                    cout << "Tuoi khong duoc nho hon 0. Vui long nhap lai." << endl;
                }
                else
                {
                    this->Age = age;
                    check = true;
                }
            }
        }
        break;
    }
    case 3: {
        string tphone = "";
        while (tphone == "") {

            cout << "Nhap so dien thoai moi: ";
            cin.ignore();
            getline(cin, tphone);
            for (int i = 0; i < tphone.length(); i ++) {

                if (tphone[0] == '+' || ((int)tphone[i] >= 48 && (int)tphone[i] <= 57) ) {

                    continue;

                }

                else {

                    cout << "Dinh dang khong hop le, vui long nhap lai." << endl;
                    tphone = "";
                    break;

                }

            }

        }
        this->PhoneNumber = tphone;
        break;
    }
    case 4:
        cout << "Nhap loai khach hang moi: ";
        cin.ignore();
        getline(cin, s);
        if (s == "Membership") this->TypeOfCus = true;
        else this->TypeOfCus = false;
        break;
    default: break;                
    }
} 

