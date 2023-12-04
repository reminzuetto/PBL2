#include "Film.h"

void Film::setFilmName(string& s) {

    this->FilmName = s;

}

string Film::getFilmName() {

    return this->FilmName;

}

void Film::setDuration(int& d) {

    this->Duration = d;

}

int Film::getDuration() {

    return this->Duration;

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

void Film::Input() {

    //cout << "Nhap ten phim : "; 
    getline(cin, this->FilmName);
    //cout << "Nhap thoi luong : "; 
    cin >> this->Duration;
    cin.ignore();
    //cout << "Nhap the loai phim : "; 
    getline(cin, this->TypeOfFilm);
    //cout << "Nhap so luong ngay chieu trong tuan : "; 
    cin >> this->AmountOfDate;
    for (long long i = 0; i < this->AmountOfDate; i++) {
        
        Showtime s;
        s.Input();
        DSSC.push_back(s);

    }

}

void Film::Output() {

    cout << "Ten phim : " << this->FilmName << endl;
    cout << "Thoi luong : " << this->Duration << endl;
    cout << "The loai phim : " << this->TypeOfFilm << endl;
    for (long long i=0 ;i < this->AmountOfDate;i++){

        Showtime s;
        s = DSSC[i].getData();
        s.Output();

    }
}

void Film::doc(ifstream& inFile) {
    getline(inFile, filmName);
    inFile >> Duration;
    inFile.ignore(); 
    getline(inFile, TypeOfFilm);
    inFile >> AmountOfShowtime;
    inFile.ignore();
}