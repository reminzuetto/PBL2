#include <iostream>
#include <string>
#include "Date.h"
#pragma once

using namespace std;

class Ticket {

    private:
        string ChairNumber;
        int Prices;
        Film film;
        Date date;
        Showtime showtime;
        Room room;

    public:
        void input();
        void output();
        void setChairNumber(string = "");
        string getChairNumber();
        void setPrices(int = "");
        int getPrices();
        void setDate();
        Date getDate();
        void setFilm();
        Film getFilm();
        void setShowtime();
        Showtime getShowtime();
        void setRoom();
        Room getRoom();
};