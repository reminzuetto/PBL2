#pragma once
#include "Room.h"

using namespace std;

class Showtime {

    private:
        int AmountOfShowtime;
        Vector<string> Time;
        Vector<int> Prices;
        Vector<Room> room;

    public:
        Showtime();
        void Input();
        void Output();
        Vector <string> getDate();
        void setAmountOfShowtime(const int&);
        int getAmountOfShowtime();
        Vector<string> getTime();
        Vector<int> getPrices();
        Vector<Room> getRoom();
        //Showtime SelectShowtime(Vector<Showtime>, int*);
        Showtime& operator=(const Showtime&);
        friend istream& operator>>(istream&, Showtime&);
        friend ostream& operator<<(ostream&, Showtime&);
        void doc();
};
