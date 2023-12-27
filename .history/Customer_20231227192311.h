#pragma once
#include <bits/stdc++.h>
#include "Trade.h"

using namespace std;
class Customer {

    private:
        int AmountOfCustomer;
        string ID;
        string Name;
        int Age;
        string PhoneNumber;
        bool TypeOfCus;
        Vector <Trade> ListOfTrade;
    public:
        void Input();
        void Output();
        void setID(const string&);
        string getID();
        void setName(const string&);
        string getName();
        void setAge(const int&);
        int getAge();
        void setPhoneNumber(const string&);
        string getPhoneNumber();
        void setTypeOfCus(const bool&);
        bool getTypeOfCus();
        friend istream& operator>>(istream&, Customer&);
        void BuyTicket(Vector <Film>);
        // Trade getTrade(int) const;
        friend ostream& operator<<(ostream&, const Customer&);
};

