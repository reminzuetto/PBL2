// #include "Film.h"

// int main() {

//     Vector <Film> List_Film;
//     ifstream al;
//     al.open("FilmList.txt", ios::in);
//     Film f;
//     int countFilm;
//     al >> countFilm;
//     for (int i = 0; i < countFilm; i++)
//     {
//         al >> f;
//         List_Film.push_back(f);
//     }

//     Film h = List_Film[0].getData();
//     h.Output();
//     string s = "Avenger";
//     h.setFilmName(s);
//     List_Film[0].setData(h);

//     Film k = List_Film[0].getData();
//     k.Output();
//     al.close();
// }