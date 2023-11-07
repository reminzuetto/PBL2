#include "Room.h"
#pragma once

using namespace std;

class Showtime {

    private:
        string Time;
        int Prices;
        int AmountOfRoom;
        List<Room> NumOfRoom;

    public:
        void input();
        void output();
        void setTime();
        string getTime();
        void setPrices();
        int getPrices();
        void setAmountOfRoom();
        int getAmountOfRoom();
        void setNumOfRoom();
        Room getNumOfRoom();
};