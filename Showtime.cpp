#include "Showtime.h"

void Showtime::setDate(const string& d) {

    this->Date = d;

}

string Showtime::getDate() {

    return this->Date;

}

void Showtime::setAmountOfShowtime(const int& amst) {

    this->AmountOfShowtime = amst;

}

int Showtime::getAmountOfShowtime() {

    return this->AmountOfShowtime;

}

void Showtime::setTime(const string& t) {

    this->Time = t;

}

string Showtime::getTime() {

    return this->Time;

}

void Showtime::setPrices(const int& p) {

    this->Prices = p;

}

int Showtime::getPrices() {

    return this->Prices;

}

void Showtime::setNumOfRoom(const Room& r) {

    this->room = r;

}

Room Showtime::getNumOfRoom() {

    return this->room;

}

void Showtime::Input() {

    cout << "Nhap ngay chieu : ";
    cin >> this->Date;

    cout << "Nhap so luong suat chieu trong ngay : ";
    cin >> this->AmountOfShowtime;

    for (long long i = 0; i < this->AmountOfShowtime; i ++) {

        cout << "Nhap suat chieu " << i + 1 << " : ";
        cin >> this->Time;

        cout << "Nhap gia ve suat chieu " << i + 1 << " : ";
        cin >> this->Prices;

        this->room.Input();

    }
}

void Showtime::Output() {

    cout << "Ngay : " << this->Date << endl;
    cout << "So luong suat chieu : " << this->AmountOfShowtime << endl;
    for (long long i = 0; i < this->AmountOfShowtime; i++) {

        cout << "Suat chieu " << i + 1 << " : " << this->Time << " ";
        cout << "Gia ve : " << this->Prices << " ";
        this->room.Output();
        cout << endl;
 
    }

}

Showtime& Showtime::operator= (const Showtime& s) {

    this->Date = s.Date;
    this->Time = s.Time;
    this->room = s.room;
    this->Prices = s.Prices;
    this->AmountOfShowtime = s.AmountOfShowtime;
    return *this;

}