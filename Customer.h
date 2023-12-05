#include <bits/stdc++.h>
//#include "Trade.h"
#pragma once

using namespace std;
class Customer {

    private:
        string Name;
        int Age;
        string PhoneNumber;
        bool TypeOfCus;
        Vector <Trade> ListOfTrade;
        
    public:
        void Input();
        void Output();
        void setName(const string&);
        string getName();
        void setAge(const int&);
        int getAge();
        void setPhoneNumber(const string&);
        string getPhoneNumber();
        void setTypeOfCus(const bool&);
        bool getTypeOfCus();
        void BuyTicket();
        Trade getTrade(int) const;
        friend ostream& operator<<(ostream&, const Customer&);
};