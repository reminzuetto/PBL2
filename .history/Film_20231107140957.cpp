#include "Film.h"

Film::Film() {

}

void Film::setFilmName(string& s) {

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

    this->AmountOfRoom = amount;

}

int Film::getAmountOfShowtime() {

    return this->AmountOfRoom;

}

void Film::input() {

    cout << "Nhap ten phim : "; getline(cin, this->tenPhim);
    cout << "Nhap thoi luong : "; cin >> this->duration;
    cout << "Nhap the loai phim : "; getline(cin, this->TypeOfFilm);
    this->NumOfRoom = new Room[this->AmountOfRoom];
    for (long long i = 0; i < this->AmountOfRoom; i++) {

        (this->NumOfRoom + i)->input();

    }

}

void Film::output() {

    cout << "Ten phim : " << this->tenPhim << endl;
    cout << "Thoi luong : " << this->duration << endl;
    cout << "The loai phim : " << this->TypeOfFilm << endl;
    for (long long i=0 ;i < this->AmountOfRoom;++i){

        (this->NumOfRoom + i)->output();

    }
}