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
        int AmountOfTrade;
        Vector <Trade> ListOfTrade;
        
    public:
        Customer();
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
        void setAmountOfTrade(const int&);
        int getAmountOfTrade();
        friend istream& operator>>(istream&, Customer&);
        void BuyTicket(Vector <Film>);
        void getTrade();
        friend ostream& operator<<(ostream&, Customer&);
        bool operator== (const Customer&);
        Customer& operator=(const Customer&);
};

