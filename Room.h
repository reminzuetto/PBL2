#pragma once
#include <bits/stdc++.h>

using namespace std;

class Room {

    private:
        int AmountOfChair;
        
    public:
        void Input();
        void Output();
        void setAmountOfChair(const int&);
        int getAmountOfChair();
        //void isAvailable();
        Room& operator=(const Room&);
        friend istream& operator>>(istream&, const int&);

};