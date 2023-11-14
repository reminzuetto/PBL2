#include <bits/stdc++.h>
#pragma once

using namespace std;

class Room {

    private:
        int AmountOfRoom;
        int AmountOfChair;
        
    public:
        void input();
        void output();
        void setAmountOfChair();
        int getAmountOfChair();
        void isAvailable();

};