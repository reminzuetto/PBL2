#pragma once
#include <bits/stdc++.h>
#include "Vector.cpp"

using namespace std;

class Room {

    private:
        int NumOfRoom;
        int AmountOfChair;
        Vector<int> Chair;
        
    public:
        Room();
        void Input();
        void Output();
        void setNumOfRoom(const int&);
        int getNumOfRoom();
        void setAmountOfChair(const int&);
        int getAmountOfChair();
        int isChairAvailable(string&);
        Vector <int> getChair();
        string SelectSeat(Room&);
        void UpdateSeat(string);
        Room& operator=(const Room&);
        bool operator==(const Room&);
        friend istream& operator>>(istream&, Room&);
        friend ostream& operator<<(ostream&, Room&);
        void doc();
};
