#include "Film.h"

Film::Film() {

}

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

void Film::setAmountOfShowtime(int& amount) {

    this->AmountOfShowtime = amount;

}

int Film::getAmountOfShowtime() {

    return this->AmountOfShowtime;

}

void Film::input() {

    cout << "Nhap ten phim : "; getline(cin, this->FilmName);
    cout << "Nhap thoi luong : "; cin >> this->duration;
    cout << "Nhap the loai phim : "; getline(cin, this->TypeOfFilm);
    cout << "Nhap so luong suat chieu : "; getline(cin, this->AmountOfShowtime);
    for (long long i = 0; i < this->AmountOfShowtime; i++) {

    cout << "Nhap thoi luong phim : ";
    cin >> this->duration;

    cin.ignore();
    cout << "Nhap the loai phim : ";
    getline(cin, this->TypeOfFilm);

    cout << "Nhap so luong ngay chieu : ";
    cin >> this->AmountOfDate;

    int i = 0;
    while (i < this->AmountOfDate) {

        
        DSSC[i]->data.output();

    }

}

void Film::output() {

    cout << "Ten phim : " << this->FilmName << endl;
    cout << "Thoi luong : " << this->duration << endl;
    cout << "The loai phim : " << this->TypeOfFilm << endl;
    for (long long i=0 ;i < this->AmountOfShowtime;++i){

        DSSC[i]->data.output();

    }
}
void Film::doc(ifstream& inFile) {
    getline(inFile, filmName);
    inFile >> duration;
    inFile.ignore(); 
    getline(inFile, TypeOfFilm);
    inFile >> AmountOfShowtime;
    inFile.ignore();
}