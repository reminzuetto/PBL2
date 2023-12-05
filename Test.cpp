#include <iostream>
#include "Account.h"

using namespace std;

int main() {

    Account acc, list_acc;
    acc.Login();

    ifstream file;
    file.open("Account.txt", ios::in);
    bool check = false;

    while(file >> list_acc) {

        if (list_acc == acc) {

            cout << "Dang nhap thanh cong" << endl;
            check = true;
            break;

        }

    }
    
    if (check == false) cout << "Tai khoan khong ton tai" << endl;
    file.close();

} 