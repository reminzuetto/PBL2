#include <bits/stdc++.h>
#include "Trade.h"
#pragma once

using namespace std;
class Customer {

    protected:
        string Name;
        int Age;
        string PhoneNumber;
        bool TypeOfCus;
        List <Trade> ListOfTrade;
        
    public:
        void input();
        void output();
        void setName();
        string getName();
        void setAge();
        int getAge();
        void setPhoneNumber();
        string getPhoneNumber();
        void setTypeOfCus();
        bool getTypeOfCus();
        void BuyTicket();
        Trade getTrade();
};