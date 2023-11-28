#pragma once
#include "Room.cpp"

using namespace std;

class Showtime {

    private:
        string Date;
        int AmountOfShowtime;
        string Time;
        int Prices;
        Room NumOfRoom;

    public:
        void Input();
        void Output();
        void setDate(const string&);
        string getDate();
        void setAmountOfShowtime(const int&);
        int getAmountOfShowtime();
        void setTime(const string&);
        string getTime();
        void setPrices(const int&);
        int getPrices();
        void setNumOfRoom(const Room&);
        Room getNumOfRoom();
};