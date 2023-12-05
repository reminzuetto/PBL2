#pragma once
#include "Room.h"
#include "Vector.cpp"

using namespace std;

class Showtime {

    private:
        string Date;
        int AmountOfShowtime;
        Vector<string> Time;
        Vector<int> Prices;
        Vector<Room> room;

    public:
        void Input();
        void Output();
        void setDate(const string&);
        string getDate();
        void setAmountOfShowtime(const int&);
        int getAmountOfShowtime();
        // void setTime(const string&);
        // string getTime();
        // void setPrices(const int&);
        // int getPrices();
        // void setNumOfRoom(const Room&);
        // Room getNumOfRoom();
        Showtime& operator=(const Showtime&);
        friend istream& operator>>(istream&, Showtime&);
};