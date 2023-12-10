#pragma once
#include <bits/stdc++.h>

using namespace std;
class Account {

    private:
        string ID;
        string Password;

    public:
        void setID(const string&);
        string getID();
        void setPass(const string&);
        string getPass();
        void Login();
        void Register();
        bool operator==(const Account&);
        friend istream& operator>>(istream&, Account& );
        friend ostream& operator<<(ostream&, Account& );
};
