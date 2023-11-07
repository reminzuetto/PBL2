#include <iostream>
#include "Showtime.h"
#pragma once

class Film {

    private:
        string FilmName;
        int duration;
        int AmountOfRoom;
        string TypeOfFilm;
    
    public:
        void input();
        void output();
        void setFilmName(string&);
        string getFilmName();
        void setDuration(int&);
        int getDuration();
        void setTypeOfFilm(string&);
        string getTypeOfFilm();
        void setAmountOfShowtime(int&);
        int getAmountOfShowtime();
        void setDSSC();
        void getDSSC();
};