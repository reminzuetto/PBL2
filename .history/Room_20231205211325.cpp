#include "Room.h"

void Room::setAmountOfChair(const int& amc) {

    this->AmountOfChair = amc;

}

int Room::getAmountOfChair() {

    return this->AmountOfChair;

}

Room& Room::operator=(const Room& r) {

    this->NumOfRoom = r.NumOfRoom;
    this->AmountOfChair = r.AmountOfChair;
    return *this;

}

void Room::setNumOfRoom(const int& r) {

    this->NumOfRoom = r;

}

int Room::getNumOfRoom() {

    return this->NumOfRoom;

}

void Room::Input() {
    
    //cout << "Nhap so phong : ";
    cin >> this->NumOfRoom;
    
    //cout << "Nhap so luong ghe : ";
    cin >> this->AmountOfChair;

}

void Room::Output() {

    cout << "Phong : " << this->NumOfRoom << " ";
    cout << "So luong ghe : " << this->AmountOfChair << endl;

}
istream& operator>>(istream& is, Room& r)
{
    is >> r.NumOfRoom;
    is.ignore(numeric_limits<streamsize>::max(), '\n');
    is >> r.AmountOfChair;
    is.ignore(numeric_limits<streamsize>::max(), '\n');
    return is;
}