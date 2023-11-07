#include "Film.h"

using namespace std;

class Date {

    private:
        string date;
        int AmountOfFilm;
        List DS_Film;
    public:
        void input();
        void output();
        void setDate();
        string getDate();
        void setAmountOfFilm();
        int getAmountOfFilm();

};