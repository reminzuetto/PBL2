#pragma once
#include "Room.h"

using namespace std;

class Showtime {

    private:
        int AmountOfTime;
        Vector<string> Time;
        Vector<int> Prices;
        Vector<Room> room;

    public:
        Showtime();
        void Input();
        void Output();
        Vector <string> getDate();
        void setAmountOfTime(const int&);
        int getAmountOfTime();
        void EditShowtime(Showtime&);   
        Vector<string> getTime();
        Vector<int> getPrices();
        Vector<Room> getRoom();
        //Showtime SelectShowtime(Vector<Showtime>, int*);
        Showtime& operator=(const Showtime&);
        friend istream& operator>>(istream&, Showtime&);
        friend ostream& operator<<(ostream&, Showtime&);
        void doc();
};
