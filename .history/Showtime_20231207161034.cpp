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

// void Showtime::setTime(const string& t) {

//     this->Time = t;

// }

// string Showtime::getTime() {

//     return this->Time;

// }

// void Showtime::setPrices(const int& p) {

//     this->Prices = p;

// }

// int Showtime::getPrices() {

//     return this->Prices;

// }

// void Showtime::setNumOfRoom(const Room& r) {

//     this->room = r;

// }

// Room Showtime::getNumOfRoom() {

//     return this->room;

// }

void Showtime::Input() {

    //cout << "Nhap ngay chieu : ";
    cin >> this->Date;

    //cout << "Nhap so luong suat chieu trong ngay : ";
    cin >> this->AmountOfShowtime;

    for (long long i = 0; i < this->AmountOfShowtime; i ++) {

        //cout << "Nhap suat chieu " << i + 1 << " : ";
        string s;
        cin >> s;
        Time.push_back(s);

        //cout << "Nhap gia ve suat chieu " << i + 1 << " : ";
        int p;
        cin >> p;
        Prices.push_back(p);

        Room r;
        r.Input();
        room.push_back(r);

    }
}

void Showtime::Output() {

    cout << "Ngay : " << this->Date << endl;
    cout << "So luong suat chieu : " << this->AmountOfShowtime << endl;
    for (long long i = 0; i < this->AmountOfShowtime; i++) {

        cout << "Suat chieu " << i + 1 << " : " << this->Time[i].getData() << " ";
        cout << "Gia ve : " << this->Prices[i].getData() << " ";
        Room r;
        r = this->room[i].getData();
        r.Output();
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
istream& operator>>(istream& is, Showtime& st)
{
    getline(is, st.Date);
    is >> st.AmountOfShowtime;
    is.ignore(numeric_limits<streamsize>::max(), '\n');
    // st.Time.resize(st.AmountOfShowtime);
    // st.Prices.resize(st.AmountOfShowtime);
    // st.room.resize(st.AmountOfShowtime);
    for (int i = 0; i < st.AmountOfShowtime; i++)
    {
        int t;
        room tr;
        string temptime;
        getline(is, temptime);
        st.Time[i].setData(temptime);
        is >> t;
        st.Prices[i].setData(t);
        is.ignore(numeric_limits<streamsize>::max(), '\n');
        is >> tr;
        st.room[i].setData(tr);
    }
    return is;
}
void Showtime::doc() {
    cout << "Enter date: ";
    getline(cin, Date);
    cout << "Enter amount of showtime: ";
    cin >> AmountOfShowtime;
    cin.ignore();
    // Time.resize(AmountOfShowtime);
    // Prices.resize(AmountOfShowtime);
    // room.resize(AmountOfShowtime);
    for (int i = 0; i < AmountOfShowtime; i++) {
        cout << "Enter time for showtime " << i+1 << ": ";
        getline(cin, Time[i]).setData();
        cout << "Enter price for showtime " << i+1 << ": ";
        string temp;
        cin >> temp;
        Prices[i].setData(temp);
        cin.ignore();
        cout << "Enter details for room " << i+1 << ": ";
        room tr;
        room[i].setData(tr.doc());
    }
}