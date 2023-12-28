// #include "Account.h"
// #include "Vector.cpp"

// int main() {

//     Vector <Account> List_Account;
//     ifstream al;
//     al.open("AccountList.txt", ios::in);
//     Account acc;
//     int countAcc;
//     al >> countAcc;
//     for (int i = 0; i < countAcc; i++)
//     {
//         al >> acc;
//         List_Account.push_back(acc);
//     }

//     for (int i = 0; i < countAcc; i ++) {

//         Account temp = List_Account[i].getData();
//         cout << temp.getID() << " " << temp.getPass() << endl;

//     }
//     al.close();
// }