#include <iostream>
#include "Account.h"

using namespace std;

int main() {

    Account acc;
    acc.Login();

    ifstream file("Account.txt", ios_base::in);

    Account list_acc;
    bool check = false;

    while(!file.eof()) {

        string ID, pass;
        getline(file, ID);
        getline(file, pass);
        list_acc.setID(ID);
        list_acc.setPass(pass);
        if (list_acc == acc) {

            cout << "Dang nhap thanh cong";
            check = true;
            break;

        }

    }
    
    if (check == false) cout << "Tai khoan khong ton tai";

} 