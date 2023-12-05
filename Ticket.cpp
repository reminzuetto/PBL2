#include "Ticket.h"

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
void Ticket::setPrices(const int& Prices) {

    this->Prices = Prices;

}
int Ticket::getPrices() {

    return this->Prices;

}
