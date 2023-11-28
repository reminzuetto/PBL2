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

    this->NumOfRoom = r;

}

Room Showtime::getNumOfRoom() {

    return this->NumOfRoom;

}

void Showtime::Input() {

    string d, t;
    int amst, p;
    Room r;

    getline(cin, this->Date);

    cin >> this->AmountOfShowtime;

    for (long long i = 0; i < this->AmountOfShowtime; i ++) {

        getline(cin, this->Time);

        cin >> this->Prices;

        this->NumOfRoom.Input();

    }
}

void Showtime::Output() {

    cout << "Ngay : " << this->Date << endl;
    cout << "So luong suat chieu : " << this->AmountOfShowtime << endl;
    for (long long i = 0; i < this->AmountOfShowtime; i++) {

        cout << "Suat chieu " << i << " : " << this->Time << " ";
        cout << "Gia ve : " << this->Prices << " ";
        cout << "Phong : ";
        this->NumOfRoom.Output();
 
    }

}