#include <iostream>
#include "Showtime.h"
#pragma once

class Film {

    private:
        string tenPhim;
        int duration;
        int AmountOfShowtime;
        Showtime dssc;
        string TypeOfFilm;
    
    public:
        Film();
        void setNameFilm();
        string getNameFilm();
        void setDuration();
        int getDuration();
        void setTypeOfFilm();
        string getTypeOfFilm();
};