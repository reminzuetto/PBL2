#include "Film.h"

Film::Film() {

}

void Film::setNameFilm(string& s) {

    this->tenPhim = s;

}

string Film::getNameFilm() {

    return this->tenPhim;

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

void Film::setAmountOfShowtime(int& amount) {

    this->AmountOfShowtime = amount;

}

int Film::getAmountOfShowtime() {

    return this->AmountOfShowtime;

}

void Film::input() {

    cout << "Nhap ten phim : "; getline(cin, this->tenPhim);
    cout << "Nhap thoi luong : "; cin >> this->duration;
    cout << "Nhap the loai phim : "; getline(cin, this->TypeOfFilm);
    cout << "Nhap so luong suat chieu"; cin >> this->AmountOfShowtime;
    this->dssc = new Showtime[this->AmountOfShowtime];
    for (long long i = 0; i < this->AmountOfShowtime; i++) {

        (this->dssc + i)->input();

    }

}

void Film::output() {

    cout << "Ten phim : " << this->tenPhim << endl;
    cout << "Thoi luong : " << this->duration << endl;
    cout << "The loai phim : " << this->TypeOfFilm << endl;
    cout << "So luong suat chieu : " << this->AmountOfShowtime << endl;
    for (long long i=0 ;i < this->AmountOfShowtime;++i){

        (this->dssc + i)->output();

    }
}