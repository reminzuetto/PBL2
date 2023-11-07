#include "Film.h"

Film::Film() {

}

void Film::setFilmName(string& s) {

    this->tenPhim = s;

}

string Film::getFilmName() {

    return this->filmName;

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

    cout << "Nhap ten phim : "; getline(cin, this->filmName);
    cout << "Nhap thoi luong : "; cin >> this->duration;
    cout << "Nhap the loai phim : "; getline(cin, this->TypeOfFilm);
    this->NumOfRoom = new Room[this->AmountOfRoom];
    for (long long i = 0; i < this->AmountOfRoom; i++) {

        (this->NumOfRoom + i)->input();

    }

}

void Film::output() {

    cout << "Ten phim : " << this->filmName << endl;
    cout << "Thoi luong : " << this->duration << endl;
    cout << "The loai phim : " << this->TypeOfFilm << endl;
    for (long long i=0 ;i < this->AmountOfRoom;++i){

        (this->NumOfRoom + i)->output();

    }
}