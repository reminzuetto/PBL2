#include "Showtime.h"

Showtime::Showtime() {

}

void Showtime::input () {

    getline(cin, this->time);

}

void Showtime::output(){

    cout << getShowTime() << ", ";

}

string Showtime::getShowTime() {

    return this->time;

}