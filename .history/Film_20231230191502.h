#pragma once
#include <iostream>
#include "Showtime.h"

class Film {

    private:
        string FilmName;
        int Duration;
        int AmountOfDate;
        string TypeOfFilm;
        Vector <string> Date;
        Vector<Showtime> DSSC;
    
    public:
        Film();
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
        void EditFilm();
        void AddShowtime(Showtime&);
        Vector <string> getDate();
        Vector<Showtime>& getDSSC();
        //Film SelectFilm(Vector<Film>, int*);
        void doc( );
        void edit();
        Film& operator=(const Film&);
        friend istream& operator>>(istream&, Film&);
        friend ostream& operator<<(ostream&, Film&);
};

