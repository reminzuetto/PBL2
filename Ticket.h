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
        double Prices;

    public:
        Ticket();
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
        void setPrices(const double&);
        double getPrices();
        Ticket& operator= (const Ticket&);
        friend istream& operator>>(istream&, Ticket&);
        friend ostream& operator<<(ostream&, Ticket&);
};