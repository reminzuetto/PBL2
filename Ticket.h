#pragma once
#include <bits/stdc++.h>
#include "Film.h"

using namespace std;

class Ticket {

    private:
        string FilmName;
        string Date;
        string showtime;
        int NumOfRoom;
        string Seat;
        int Prices;

    public:
        //void Input();
        void Output();
        void setFilmName(const string&);
        string getFilmName();
        void setDate(const string&);
        string getDate();
        void setShowtime(const string&);
        string getShowtime();
        void setNumOfRoom(const int&);
        int getNumOfRoom();
        void setSeat(const string&);
        string getSeat();
        void setPrices(const int&);
        int getPrices();
        Ticket& operator= (const Ticket&);
};