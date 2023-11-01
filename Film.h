#include <iostream>
#include "Room.h"
#pragma once

class Film {

    private:
        string tenPhim;
        int duration;
        int AmountOfRoom;
        Room *NumOfRoom;
        string TypeOfFilm;
    
    public:
        Film();
        void setNameFilm(string&);
        string getNameFilm();
        void setDuration(int&);
        int getDuration();
        void setTypeOfFilm(string&);
        string getTypeOfFilm();
        void setAmountOfShowtime(int&);
        int getAmountOfShowtime();
        void input();
        void output();
};