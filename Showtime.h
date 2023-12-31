#pragma once
#include "Room.h"

using namespace std;

class Showtime {

    private:
        int AmountOfShowtime;
        Vector<string> Time;
        Vector<double> Prices;
        Vector<Room> room;

    public:
        Showtime();
        void Input();
        void Output();
        Vector <string> getDate();
        void setAmountOfShowtime(const int&);
        int getAmountOfShowtime();
        void AddShowtime(Showtime&);
        void EditShowtime();
        void setRoom(Vector<Room>);
        Vector<string> getTime();
        Vector<double> getPrices();
        Vector<Room> getRoom();
        //Showtime SelectShowtime(Vector<Showtime>, int*);
        bool operator==(const Showtime&);
        Showtime& operator=(const Showtime&);
        friend istream& operator>>(istream&, Showtime&);
        friend ostream& operator<<(ostream&, Showtime&);
        void doc();
};
