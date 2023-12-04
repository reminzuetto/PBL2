#pragma once
#include <bits/stdc++.h>
#include "Film.h"

using namespace std;

class Ticket {

    private:
        Film FilmName;
        Showtime showtime;
        Room room;
        string Seat;
        int Prices;

    public:
        void input();
        void output();
        void setFilm();
        Film getFilm();
        void setShowtime();
        Showtime getShowtime();
        void setRoom();
        Room getRoom();
        void setSeat(string = "");
        string getSeat();
        void setPrices(int = "");
        int getPrices();
};