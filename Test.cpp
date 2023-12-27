#include "Customer.h"

int main() {

    Vector <Film> ListFilm;
    Film f;
    ifstream fl;
    fl.open("FilmList.txt", ios::in);
    while (fl >> f) {

        f.Output();
        ListFilm.push_back(f);

    }

}