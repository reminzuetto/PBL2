#pragma once
#include "Showtime.h"
#include "Vector.cpp"

class Film {

    private:
        string FilmName;
        int duration;
        int AmountOfDate;
        string TypeOfFilm;
        Vector<Showtime> DSSC;
    
    public:
        void setFilmName(string&);
        string getFilmName();
        void setDuration(int&);
        int getDuration();
        void setTypeOfFilm(string&);
        string getTypeOfFilm();
        void setAmountOfDate(int&);
        int getAmountOfDate();
        void input();
        void output();
};