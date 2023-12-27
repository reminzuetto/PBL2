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
    //cout << "Nhap trang thai ghe : ";
    for (int i = 0; i < this->AmountOfChair; i++) {
        bool temp = 0;
        this->Chair.push_back(temp);
    }
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
ostream& operator<<(ostream& os, Room& r)
{
    int num, amount;
    num = r.getNumOfRoom();
    amount = r.getAmountOfChair();
    os << num << endl;
    os << amount << endl;
    return os;
}
void Room::doc() {
    cin >> this->NumOfRoom;
    cin.ignore();
    cin >> this->AmountOfChair;
    cin.ignore();
}

bool Room::isChairAvailable(string& viTri)
{  
    int row = toupper(viTri[0]) - 64;
    int column = stoi(viTri.substr(1));
    if (this->Chair[(row - 1) * 10 + column - 1].getData() == 0) {
        this->Chair[(row - 1) * 10 + column - 1].getData() = 1;
        return 1;
    }
    else {
        return 0;
    }
}
void Room::SelectSeat()
{
    for (int i = 0; i < this->size / 10; i++)
    {
        cout << A + i << ":";
        for (int j = 0; j < 10; j++)
        {
            cout << this->Chair[i * 10 + j].getData() << " ";
        }
        cout << endl;
    }
    cout << "\n Vui Long Nhap Theo Cu Phap:\n";
    cout << "\n Vi Du: Ghe so 9, Da
    cout << "Chon ghe: ";
    string viTri;
    cin >> viTri;
    if (isChairAvailable(vitri))
    {
        cout << "Dat ghe thanh cong" << endl;
    }
    else
    {
        cout << "Dat ghe that bai" << endl;
    }
}