#include "Customer.h"

int main() {

    Vector <Film> ListFilm;
    Film f;
    ifstream fl;
    fl.open("FilmList.txt", ios::in);
    int countFilm;
    fl >> countFilm;
    int tmp;
    fl >> tmp;
    ListFilm.setSize(countFilm);
    // for (int i = 0; i < countFilm; i++)
    // {
    //     fl >> f;
    //     ListFilm.push_back(f);
    // }
    cout << countFilm;
    cout << tmp;
    fl.close();
}