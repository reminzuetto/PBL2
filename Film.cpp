#include "Film.h"

void Film::setFilmName(string& s) {

    this->FilmName = s;

}

string Film::getFilmName() {

    return this->FilmName;

}

void Film::setDuration(int& d) {

    this->duration = d;

}

int Film::getDuration() {

    return this->duration;

}

void Film::setTypeOfFilm(string& tl) {

    this->TypeOfFilm = tl;

}

string Film::getTypeOfFilm() {

    return this->TypeOfFilm;

}

void Film::setAmountOfDate(int& amount) {

    this->AmountOfDate = amount;

}

int Film::getAmountOfDate() {

    return this->AmountOfDate;

}

void Film::input() {

    getline(cin, this->FilmName);

    cin >> this->duration;

    getline(cin, this->TypeOfFilm);

    cin >> this->AmountOfDate;

    for (long long i = 0; i < this->AmountOfDate; i++) {

        DSSC[i]->getData().Input();

    }

}

void Film::output() {

    cout << "Ten phim : " << this->FilmName << endl;

    cout << "Thoi luong : " << this->duration << endl;

    cout << "The loai phim : " << this->TypeOfFilm << endl;

    cout << "Cac suat chieu trong tuan : " << endl;

    for (long long i=0 ;i < this->AmountOfDate;++i){

        DSSC[i]->getData().Output();

    }

}