#include "Customer.h"

int main() {

    Vector <Film> ListFilm;
    Film f;
    ifstream fl;
    fl.open("FilmList.txt", ios::in);
    int countFilm;
    fl >> countFilm;
    ListFilm.setSize(countFilm);
    for (int i = 0; i < countFilm; i++)
    {
        fl >> f;
        ListFilm.push_back(f);
    }
    cout << countFilm << endl;
    for (int i = 0; i < countFilm; i++)
    {
        cout << ListFilm[i].getData();
    }
    fl.close();
}