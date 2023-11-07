#include <iostream>
#include <string>
#include "Film.h"
#pragma once

using namespace std;

class Ticket {

    private:
        string ChairNumber;
        int Price;

    public:
        Ticket(string = "", int = 0);
        ~Ticket();
        void setChairNumber(string = "");
        string getChairNumber();
        void setPrice(int = "");
        int getPrice();
        void isAvailable();
};