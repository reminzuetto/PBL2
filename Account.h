#pragma once
#include "Customer.h"

class Account {

    private:
        string ID;
        string Password;
        Customer cus;

    public:
        void setID(const string&);
        string getID();
        void setPass(const string&);
        string getPass();
        void Login();
        void Register();
        bool operator==(const Account&);

}