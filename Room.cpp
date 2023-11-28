#include "Room.h"

void Room::setAmountOfChair(const int& amc) {

    this->AmountOfChair = amc;

}

int Room::getAmountOfChair() {

    return this->AmountOfChair;

}

Room& Room::operator=(const Room& r) {

    this->AmountOfChair = r.AmountOfChair;
    return *this;

}

istream& operator>>(istream& i, const int& a) {

    i >> a;
    Room r;
    r.setAmountOfChair(a);

    return i;

}

void Room::Input() {
    
    cin >> this->AmountOfChair;

}

void Room::Output() {

    cout << "So luong ghe : " << this->AmountOfChair;

}