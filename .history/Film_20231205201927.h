#pragma once
#include <iostream>
#include "Showtime.h"

class Film {

    private:
        string FilmName;
        int Duration;
        int AmountOfDate;
        string TypeOfFilm;
        Vector<Showtime> DSSC;
    
    public:
        void Input();
        void Output();
        void setFilmName(string&);
        string getFilmName();
        void setDuration(int&);
        int getDuration();
        void setTypeOfFilm(string&);
        string getTypeOfFilm();
        void setAmountOfDate(int&);
        int getAmountOfDate();
        void doc(ifstream& inFile);
        void edit(ifstream& inFile);
        friend istream& operator>>(istream& is, Film& f);
};