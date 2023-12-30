#include "Showtime.h"

Showtime::Showtime() {

    this->AmountOfShowtime = 0;
    Vector<string> t;
    Vector<int> p;
    Vector<Room> r;
    this->Time = t;
    this->Prices = p;
    this->room = r;

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

Vector<string> Showtime::getTime() {

    return this->Time;

}

// void Showtime::setPrices(const int& p) {

//     this->Prices = p;

// }

Vector<int> Showtime::getPrices() {

    return this->Prices;

}

// void Showtime::setNumOfRoom(const Room& r) {

//     this->room = r;

// }

Vector<Room> Showtime::getRoom() {

    return this->room;

}

void Showtime::Input() {

    cout << "Nhap so luong suat chieu trong ngay : ";
    cin >> this->AmountOfShowtime;

    for (long long i = 0; i < this->AmountOfShowtime; i ++) {

        cout << "Nhap suat chieu " << i + 1 << " : ";
        string s;
        cin >> s;
        Time.push_back(s);

        cout << "Nhap gia ve suat chieu " << i + 1 << " : ";
        int p;
        cin >> p;
        Prices.push_back(p);

        Room r;
        r.Input();
        room.push_back(r);

    }
}

void Showtime::Output() {

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

    this->Time = s.Time;
    this->room = s.room;
    this->Prices = s.Prices;
    this->AmountOfShowtime = s.AmountOfShowtime;
    return *this;

}
istream& operator>>(istream& is, Showtime& st)
{
    is >> st.AmountOfShowtime;
    // st.Time.resize(st.AmountOfShowtime);
    // st.Prices.resize(st.AmountOfShowtime);
    // st.room.resize(st.AmountOfShowtime);
    Vector<string> tm;
    Vector<int> pr;
    for (int i = 0; i < st.AmountOfShowtime; i++)
    {
        string tt = "";
        int price;
        Room tr;
        while (tt == "") {

            getline(is, tt);

        }
        tm.push_back(tt);
        is >> price;
        pr.push_back(price);
        is >> tr;
        st.room.push_back(tr);
    }
    st.Time = tm;
    st.Prices = pr;
    return is;
}
void Showtime::doc() {
    cout << "Nhap vao so luong suat chieu: ";
    cin >> AmountOfShowtime;
    cin.ignore();
    // Time.resize(AmountOfShowtime);
    // Prices.resize(AmountOfShowtime);
    // room.resize(AmountOfShowtime);
    for (int i = 0; i < AmountOfShowtime; i++) {
        string timeData = "";
        cout << "Nhap thoi gian cua suat chieu" << i+1 << ": ";
        getline(cin, timeData) ;
        Time[i].setData(timeData);
        cout << "Nhap gia tien cua suat chieu " << i+1 << ": ";
        int temp;
        cin >> temp;
        Prices[i].setData(temp);
        cin.ignore();
        cout << "Nhap thong tin phong chieu cua suat chieu " << i+1 << ": ";
        Room tr;
        tr.doc();
        room[i].setData(tr);
    }
}
ostream& operator<<(ostream& os, Showtime& st)
{
    int amountst;
    amountst = st.getAmountOfShowtime();
    os << amountst << endl;
    for (int i = 0; i < st.AmountOfShowtime; i++)
    {
        string time;
        int prices;
        time = st.Time[i].getData();
        prices = st.Prices[i].getData();
        os << time << endl;
        os << prices << endl;
        Room r;
        r = st.room[i].getData();
        os << r;
    }
    return os;
}

void Showtime::edit() {
    cout << "Nhap vao so luong suat chieu: ";
    cin >> AmountOfShowtime;
    cin.ignore();
    // Time.resize(AmountOfShowtime);
    // Prices.resize(AmountOfShowtime);
    // room.resize(AmountOfShowtime);
    for (int i = 0; i < AmountOfShowtime; i++) {
        string timeData = "";
        cout << "Nhap thoi gian cua suat chieu" << i+1 << ": ";
        getline(cin, timeData) ;
        Time[i].setData(timeData);
        cout << "Nhap gia tien cua suat chieu " << i+1 << ": ";
        int temp;
        cin >> temp;
        Prices[i].setData(temp);
        cin.ignore();
        cout << "Nhap thong tin phong chieu cua suat chieu " << i+1 << ": ";
        Room tr;
        tr.doc();
        room[i].setData(tr);
    }
}