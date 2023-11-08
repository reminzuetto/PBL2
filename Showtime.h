#include "Room.h"
#pragma once

using namespace std;

class Showtime {

    private:
        string Time;
        string Date;
        int Prices;
        int AmountOfRoom;
        List<Room> NumOfRoom;

    public:
        void input();
        void output();
        void setTime();
        string getTime();
        void setDate();
        string getDate();
        void setPrices();
        int getPrices();
        void setAmountOfRoom();
        int getAmountOfRoom();
        void setNumOfRoom();
        Room getNumOfRoom();
};