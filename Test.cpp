// // #include "Account.h"
// // #include "Vector.cpp"

// // int main() {

// //     Vector <Account> List_Account;
// //     ifstream al;
// //     al.open("AccountList.txt", ios::in);
// //     Account acc;
// //     int countAcc;
// //     al >> countAcc;
// //     for (int i = 0; i < countAcc; i++)
// //     {
// //         al >> acc;
// //         List_Account.push_back(acc);
// //     }

// //     for (int i = 0; i < countAcc; i ++) {

// //         Account temp = List_Account[i].getData();
// //         cout << temp.getID() << " " << temp.getPass() << endl;

// //     }
// //     al.close();
// // }

// #include "Customer.h"

// int main() {

//     Vector <Customer> List_Customer;
//     ifstream cl;
//     cl.open("CustomerList.txt", ios::in);
//     Customer cus;
//     int countCus;
//     cl >> countCus;
//     for (int i = 0; i < countCus; i++) {

//         cl >> cus;
//         List_Customer.push_back(cus);
//         cout << cus.getAmountOfTrade();

//     }

// }