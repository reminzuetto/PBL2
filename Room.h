#pragma once
#include <bits/stdc++.h>

using namespace std;

class Room {

    private:
        int NumOfRoom;
        int AmountOfChair;
        
    public:
        void Input();
        void Output();
        void setNumOfRoom(const int&);
        int getNumOfRoom();
        void setAmountOfChair(const int&);
        int getAmountOfChair();
        void isAvailable();
        string SelectSeat();
        Room& operator=(const Room&);
        friend istream& operator>>(istream&, Room&);
        friend ostream& operator<<(ostream&, Room&);
        void doc();
};
