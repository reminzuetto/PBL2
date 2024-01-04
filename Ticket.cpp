#include "Ticket.h"

Ticket::Ticket() {

    this->FilmName = "";
    this->Date = "";
    this->showtime = "";
    this->NumOfRoom = 0;
    this->Seat = "";
    this->Prices = 0;

}

void Ticket::setFilmName(const string& FilmName) {

    this->FilmName = FilmName;

}

string Ticket::getFilmName() {

    return this->FilmName;

}

void Ticket::setDate(const string& Date) {

    this->Date = Date;

}

string Ticket::getDate() {

    return this->Date;

}

void Ticket::setShowtime(const string& Showtime) {

    this->showtime = Showtime;

}

string Ticket::getShowtime() {

    return this->showtime;

}

void Ticket::setNumOfRoom(const int& NumOfRoom) {

    this->NumOfRoom = NumOfRoom;

}

int Ticket::getNumOfRoom() {

    return this->NumOfRoom;

}

void Ticket::setSeat(const string& Seat) {

    this->Seat = Seat;

}

string Ticket::getSeat() {

    return this->Seat;

}
void Ticket::setPrices(const double& Prices) {

    this->Prices = Prices;

}
double Ticket::getPrices() {

    return this->Prices;

}

Ticket& Ticket::operator=(const Ticket& t) {

    this->FilmName = t.FilmName;
    this->Date = t.Date;
    this->showtime = t.showtime;
    this->NumOfRoom = t.NumOfRoom;
    this->Seat = t.Seat;
    this->Prices = t.Prices;

    return *this;

}

void Ticket::Output() {

    cout << "Ten phim : " << this->FilmName << endl;
    cout << "Ngay chieu : " << this->Date << endl;
    cout << "Suat chieu : " << this->showtime << endl;
    cout << "Phong chieu so : " << this->NumOfRoom << endl;
    cout << "Vi tri ghe ngoi : " << this->Seat << endl;
    cout << "Gia ve : " << this->Prices << endl;

}

istream& operator>>(istream& is, Ticket& t) 
{
    string fn = "";
    while (fn == "") {

        getline(is, fn);
        
    }
    t.FilmName = fn;
    is >> t.Date;
    is >> t.showtime;
    is >> t.NumOfRoom;
    is >> t.Seat;
    is >> t.Prices;
    return is;
}

ostream& operator<<(ostream& os, Ticket& t) 
{

    os << t.FilmName << endl;
    os << t.Date << endl;
    os << t.showtime << endl;
    os << t.NumOfRoom << endl;
    os << t.Seat << endl;
    os << t.Prices << endl;

    return os;

}