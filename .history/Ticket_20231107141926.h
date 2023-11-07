#include <iostream>
#include <string>
#include "Film.h"
#pragma once

using namespace std;

class Ticket {

    private:
        string ChairNumber;
        int Price;
        Film 
    public:
        Ticket(string = "", int = 0);
        ~Ticker();
        void setChairNumber();
        string getChairNumber();
        void setPrice();
        int getPrice();
        void isAvailable();
};