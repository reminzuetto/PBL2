#include <iostream>
#include "Showtime.h"
#include "Vector.h"
#pragma once

class Film {

    private:
        string FilmName;
        int duration;
        int AmountOfShowtime;
        string TypeOfFilm;
        Vector<Showtime> *DSSC;
    
    public:
        void input();
        void output();
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