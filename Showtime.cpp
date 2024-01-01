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
        while (s == "") {

            getline(cin, s);

        }
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

bool Showtime::operator==(const Showtime& s) {

    return (this->Time == s.Time && this->Prices == s.Prices && this->room == s.room);

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

void Showtime::EditShowtime()
{

    cout << "1. Thay doi thoi gian chieu\n2. Thay doi gia\n3. Thay doi phong chieu\n";
    cout << "Nhap lua chon: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1: {
        cout <<"1. Them thoi gian chieu\n2. Thay doi thoi gian chieu\n3. Xoa thoi gian chieu\n";
        cout << "Nhap lua chon: ";
        int temp;
        cin >> temp;
        switch (temp)
        {
        case 1: {
            string temp;
            cout << "Nhap thoi gian chieu muon them: ";
            cin >> temp;
            this->Time.push_back(temp);
            cout << "Nhap gia tien cua thoi gian chieu: ";
            int temp2;
            cin >> temp2;
            this->Prices.push_back(temp2);
            cout << "Nhap phong chieu cua thoi gian chieu: ";
            Room temp3;
            temp3.Input();
            this->room.push_back(temp3);
            break;
        }
        case 2: {
            for (int i = 0; i < this->AmountOfShowtime; i ++) {

                string tt = Time[i].getData();
                cout << i + 1 << ". "<< tt <<endl;

            }
            int temp;
            cout << "Nhap thoi gian chieu muon thay doi: ";
            cin >> temp;
            if (temp <= 0 || temp > AmountOfShowtime) {

                cout << "Khong ton tai suat chieu nay!" << endl;
                system("pause");
                return;

            }
            string temp2;
            cout << "Nhap thoi gian chieu moi: ";
            cin >> temp2;
            this->Time[temp - 1].setData(temp2);
            return;
            cout << "Khong co thoi gian nay trong lich chieu.\n";
            break;
        }
        case 3: {
            for (int i = 0; i < this->AmountOfShowtime; i ++) {

                string tt = Time[i].getData();
                cout << i + 1 << ". " << "Thoi gian chieu : " << tt << " ";
                int tp = Prices[i].getData();
                cout << "Gia ve : " << tp << " ";
                Room tr = room[i].getData();
                tr.Output();

            }
            int temp;
            cout << "Nhap thoi gian chieu muon xoa: ";
            cin >> temp;
            if (temp <= 0 || temp > AmountOfShowtime) {

                cout << "Khong ton tai suat chieu nay!" << endl;
                system("pause");
                return;

            }
            AmountOfShowtime--;
            for (int i = temp - 1; i < AmountOfShowtime; i ++) {

                Time[i] = Time[i + 1];
                Prices[i] = Prices[i + 1];
                room[i] = room[i + 1];

            }
            Time.setSize(AmountOfShowtime);
            Prices.setSize(AmountOfShowtime);
            room.setSize(AmountOfShowtime);
            return;
            break;
        }
    }
    case 2: {
        for (int i = 0; i < this->AmountOfShowtime; i ++) {

                string tt = Time[i].getData();
                cout << i + 1 << ". " << "Thoi gian chieu : " << tt << " ";
                int tp = Prices[i].getData();
                cout << "Gia ve : " << tp << " ";
                Room tr = room[i].getData();
                tr.Output();

        }
        int temp;
        cout << "Nhap suat chieu ma ban muon thay doi gia : ";
        cin >> temp;
        if (temp <= 0 || temp > AmountOfShowtime) {

                cout << "Khong ton tai suat chieu nay!" << endl;
                system("pause");
                return;

        }
        cout << "Nhap gia tien moi: ";
        int temp3;
        cin >> temp3;
        this->Prices[temp - 1].setData(temp3);
        return;
        break;
    }
    case 3: {
        for (int i = 0; i < this->AmountOfShowtime; i ++) {

                string tt = Time[i].getData();
                cout << i + 1 << ". " << "Thoi gian chieu : " << tt << " ";
                int tp = Prices[i].getData();
                cout << "Gia ve : " << tp << " ";
                Room tr = room[i].getData();
                tr.Output();

        }
        cout << "Nhap thoi gian chieu cua phong muon thay doi: ";
        int temp;
        cin >> temp;
        if (temp <= 0 || temp > AmountOfShowtime) {

                cout << "Khong ton tai suat chieu nay!" << endl;
                system("pause");
                return;

        }
        Room temp2;
        temp2.Input();
        this->room[temp - 1].setData(temp2);
        return;
        break;
    }
    default:
        break;
    }
}
}

void Showtime::AddShowtime(Showtime& st) {

    this->AmountOfShowtime += st.AmountOfShowtime;
    for (int i = 0; i < st.AmountOfShowtime; i ++) {

        string tt = st.Time[i].getData();
        this->Time.push_back(tt);
        int tp = st.Prices[i].getData();
        this->Prices.push_back(tp);
        Room tr = st.room[i].getData();
        this->room.push_back(tr);

    }

}