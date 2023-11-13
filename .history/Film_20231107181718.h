#include <iostream>
#include "Room.h"
#pragma once

class Film {

    private:
        string filmName;
        int duration;
        int AmountOfRoom;
        Room *NumOfRoom;
        string TypeOfFilm;
    
    public:
        Film();
        void setFilmName(string&);
        string getFilmName();
        void setDuration(int&);
        int getDuration();
        void setTypeOfFilm(string&);
        stSring getTypeOfFilm();
        void setAmountOfShowtime(int&);
        int getAmountOfShowtime();
        void input();
        void output();
};