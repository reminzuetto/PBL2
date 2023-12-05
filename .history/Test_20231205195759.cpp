#include <iostream>
#include "Account.h"

using namespace std;

int main() {

    Account acc,listacc;
    acc.Login();
    ifstream file;
    file.open("Account.txt", ios::in);
    bool check = false;
    while (file >> listacc) {
        listacc.doc(file);
        if (acc == listacc) {
            check = true;
            cout << "Dang nhap thanh cong";
            break;
        }
    }
    if (check == false) cout << "Tai khoan khong ton tai";

} 