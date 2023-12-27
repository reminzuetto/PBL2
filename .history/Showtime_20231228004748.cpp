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

    cout << "Nhap ngay chieu : ";
    cin >> this->Date;

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

    cout << "Ngay chieu : " << this->Date << endl;
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
    is >> st.Date;
    string tmp;
    getline(is, tmp);
    st.AmountOfShowtime = stoi(tmp);
    is.ignore(numeric_limits<streamsize>::max(), '\n');
    // st.Time.resize(st.AmountOfShowtime);
    // st.Prices.resize(st.AmountOfShowtime);
    // st.room.resize(st.AmountOfShowtime);
    for (int i = 0; i < st.AmountOfShowtime; i++)
    {
        int times;
        Room tr;
        string t, temptime;
        getline(is, temptime);
        st.Time.push_back(temptime);
        getline(is, t);
        times = stoi(t);
        st.Prices.push_back(times);
        //is.ignore(numeric_limits<streamsize>::max(), '\n');
        is >> tr;
        st.room.push_back(tr);
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
        string timeData;
        cout << "Enter time for showtime " << i+1 << ": ";
        getline(cin, timeData) ;
        Time[i].setData(timeData);
        cout << "Enter price for showtime " << i+1 << ": ";
        int temp;
        cin >> temp;
        Prices[i].setData(temp);
        cin.ignore();
        cout << "Enter details for room " << i+1 << ": ";
        Room tr;
        tr.doc();
        room[i].setData(tr);
    }
}
ostream& operator<<(ostream& os, Showtime& st)
{
    string date;
    int amountst;
    date = st.getDate();
    amountst = st.getAmountOfShowtime();
    os << date << endl;
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

Showtime Showtime::SelectShowtime(Vector<Showtime> ListShowtime, int* Select) {

    system("cls");
    for (int i = 0; i < ListShowtime.getSize(); i ++) {

        Showtime s;
        s = ListShowtime[i].getData();
        cout << i + 1 << ". " << s.getDate() << endl;

    }

    cout << "Moi ban chon ngay chieu : ";
    int tmp;
    cin >> tmp;
    *Select = tmp;
    Showtime s = ListShowtime[*Select - 1].getData();
    return s;
}