// #include <iostream>
// #include "Account.h"
// #include "Vector.cpp"

// using namespace std;

// int main() {

//     Account acc;
//     Vector <Account> list_acc;
//     acc.Login();

//     ifstream file;
//     file.open("AccountList.txt", ios::in);
//     Account temp;

//     while(file >> temp) {

//         list_acc.push_back(temp);

//     }
//     bool check = false;
//     for (int i = 0; i < list_acc.getSize(); i ++) {

//         if (acc == list_acc[i].getData()) {

//             cout << "Dang nhap thanh cong";
//             check = true;
//             break;

//         }

//     }

//     file.close();

// } 