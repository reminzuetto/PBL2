#include "Room.h"

Room::Room() {

    this->NumOfRoom = 0;
    this->AmountOfChair = 0;
    Vector <int> c;
    this->Chair = c;

}

void Room::setAmountOfChair(const int& amc) {

    this->AmountOfChair = amc;

}

int Room::getAmountOfChair() {

    return this->AmountOfChair;

}

bool Room::operator==(const Room& r) {

    return (this->AmountOfChair == r.AmountOfChair && this->NumOfRoom == r.NumOfRoom);

}

Room& Room::operator=(const Room& r) {

    this->NumOfRoom = r.NumOfRoom;
    this->AmountOfChair = r.AmountOfChair;
    this->Chair = r.Chair;
    return *this;

}

void Room::setNumOfRoom(const int& r) {

    this->NumOfRoom = r;

}

int Room::getNumOfRoom() {

    return this->NumOfRoom;

}

Vector <int> Room::getChair() {

    return Chair;

}

void Room::Input() {
    
    cout << "Nhap so phong : ";
    cin >> this->NumOfRoom;
    cout << "Nhap so luong ghe : ";
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
    is >> r.AmountOfChair;
    Vector <int> ch;
    for (int i = 0; i < r.AmountOfChair; i ++) {

        ch.push_back(0);

    }
    r.Chair = ch;
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
    cout << "Nhap so phong: ";
    cin >> this->NumOfRoom;
    cin.ignore();
    cout << "Nhap so luong ghe: ";
    cin >> this->AmountOfChair;
    cin.ignore();
}

bool Room::isChairAvailable(string& viTri)
{
    bool test = (int)viTri[0] < 65 || (int)viTri[0] > 90 ;
    if (viTri.length() == 3 || viTri[1] == 1 || viTri[2] == 0 || test == 0)
    {
        int row = toupper(viTri[0]) - 64;
        int column = 10;
        if ( (row - 1) * 10 + column - 1 > this->AmountOfChair) return 0;
        if (this->Chair[(row - 1) * 10 + column - 1].getData() == 0) {
            this->Chair[(row - 1) * 10 + column - 1].setData(1);
            return 1;
        }
        else {
            return 0;
        }
    }
    else if (viTri.length() == 2 || test == 0 ) // them dieu kien dssc do nua vao
    {
        int row = toupper(viTri[0]) - 64;
        int column = stoi(viTri.substr(1));
        if ( (row - 1) * 10 + column - 1 > this->AmountOfChair) return 0;
        if (this->Chair[(row - 1) * 10 + column - 1].getData() == 0) {
            this->Chair[(row - 1) * 10 + column - 1].setData(1);
            return 1;
        }
        else {
            return 0;
        }
    }
    else
    {
        cout << "Nhap sai cu phap, vui long nhap lai" << endl;
        return false;  
    }
}
string Room::SelectSeat(Room& r)
{
    system("cls");
    cout << "Danh sach ghe:\n";
    for (int i = 0; i < r.AmountOfChair / 10; i++)
    {
        cout << char(65 + i) << ": ";
        for (int j = 0; j < 10; j++)
        {
                Vector<int> check = r.Chair;
                if(check[i * 10 + j].getData() == 1)
                {
                    cout << "X ";
                }
                else
                {
                    cout << "O ";
                }
        }
        cout << endl;
    }
    cout<< "   ";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Cac vi tri O la vi tri ghe co the chon\n";
    cout << "\n Vui Long Nhap Theo Cu Phap:\n";
    cout << "Vi Du: Ghe so 9, Day C: C9.\n";
    cout << "Chon ghe: ";
    string viTri;
    bool check = false;
    while (check == false) {

        cin >> viTri;
        if (isChairAvailable(viTri)) {

            cout << "Dat ghe thanh cong" << endl;
            check = true;
        
        }
        else {

            cout << "So ghe nay da duoc dat, vui long chon so ghe khac:" << endl;
        
        }

    }
    return viTri;
}