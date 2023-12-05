#pragma once
#include "Customer.h"

class Account {

    private:
        string ID;
        string Password;
        Customer CusInfo;

    public:
        void setID(const string&);
        string getID();
        void setPass(const string&);
        string getPass();
        Customer getCusInfo();
        void Login();
        void Register();
        bool operator==(const Account&);

}