#pragma once
#include <bits/stdc++.h>
#include "Trade.h"

using namespace std;
class Customer {

    private:
        string ID;
        string Name;
        int Age;
        string PhoneNumber;
        bool TypeOfCus;
        int AmountOfCus;
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
        void setAmountOfCus();
        int getAmountOfCus();
        friend istream& operator>>(istream&, Customer&);
        void BuyTicket(Vector <Film>);
        void getTrade();
        friend ostream& operator<<(ostream&, const Customer&);
};

