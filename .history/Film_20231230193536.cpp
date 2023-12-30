#include "Film.h"

Film::Film() {

    this->FilmName = "";
    this->Duration = 0;
    this->AmountOfDate = 0;
    this->TypeOfFilm = "";
    Vector<Showtime> dsc;
    Vector<string> dt;
    this->DSSC = dsc;
    this->Date = dt;

}

void Film::setFilmName(string& s) {

    this->FilmName = s;

}

string Film::getFilmName() {

    return this->FilmName;

}

void Film::setDuration(int& d) {

    this->Duration = d;

}

int Film::getDuration() {

    return this->Duration;

}

void Film::setTypeOfFilm(string& tl) {

    this->TypeOfFilm = tl;

}

string Film::getTypeOfFilm() {

    return this->TypeOfFilm;

}

void Film::setAmountOfDate(int& amount) {

    this->AmountOfDate = amount;

}

int Film::getAmountOfDate() {

    return this->AmountOfDate;

}

Vector<Showtime>& Film::getDSSC() {

    return this->DSSC;

}

Vector <string> Film::getDate() {

    return this->Date;

}

Film& Film::operator=(const Film& f) {

    this->FilmName = f.FilmName;
    this->Duration = f.Duration;
    this->TypeOfFilm = f.TypeOfFilm;
    this->AmountOfDate = f.AmountOfDate;
    this->DSSC = f.DSSC;
    this->Date = f.Date;
    
    return *this;
}

void Film::Input() {

    cout << "Nhap ten phim : "; 
    getline(cin, this->FilmName);
    cout << "Nhap thoi luong : "; 
    cin >> this->Duration;
    cin.ignore();
    cout << "Nhap the loai phim : "; 
    getline(cin, this->TypeOfFilm);
    cout << "Nhap so luong ngay chieu trong tuan : "; 
    cin >> this->AmountOfDate;
    for (long long i = 0; i < this->AmountOfDate; i++) {

        string dt;
        cin.ignore();
        getline(cin, dt);
        Date.push_back(dt);
        Showtime s;
        s.Input();
        DSSC.push_back(s);

    }

}

void Film::Output() {

    cout << "Ten phim : " << this->FilmName << endl;
    cout << "Thoi luong : " << this->Duration << endl;
    cout << "The loai phim : " << this->TypeOfFilm << endl;
    for (long long i=0 ;i < this->AmountOfDate;i++){

        string dt;
        dt = Date[i].getData();
        cout << "Ngay chieu : " << dt << endl;
        Showtime s;
        s = DSSC[i].getData();
        s.Output();

    }
}
void Film::doc() {
    cin.ignore();
    cout << "Enter film name: ";
    getline(cin, this->FilmName);
    cout << "Enter duration: ";
    cin >> this->Duration;
    cout << "Enter amount of date: ";
    cin >> this->AmountOfDate;
    cin.ignore();
    cout << "Enter type of film: ";
    getline(cin, this->TypeOfFilm);
    //DSSC.resize(AmountOfDate);
    for (int i = 0; i < AmountOfDate; i++) {
        cin.ignore();
        cout << "Enter the date: ";
        string dt;
        getline(cin, dt);
        Date.push_back(dt);
        cout << "Enter details for showtime " << i + 1 << ": ";
        Showtime temp;
        temp.doc();
        DSSC.push_back(temp);
    }
}

void Film::edit() {
    int choice;
    cout << "1. Ten phim\n2. \n3. The loai phim\n4. Ngay chieu phim\n5. Suat chieu phim";
    cout << "Nhap loai du lieu muon thay doi:\n";
    cin >> choice;
    cin.ignore(::numeric_limits<::streamsize>::max(), '\n');

}
istream& operator>>(istream& is, Film& f)
{
    string fn = "";
    while (fn == "") {

        getline(is, fn);

    }
    f.FilmName = fn;
    string temp =  "";
    is >> f.Duration;
    is >> f.AmountOfDate;
    while (temp == "") {

        getline(is, temp);

    }
    f.TypeOfFilm = temp;
    Vector<string> dat;
    Vector<Showtime> DSC;
    for (int i = 0; i < f.AmountOfDate; i++) {
        string dt = "";
        while (dt == "") {

            getline(is, dt);

        }
        dat.push_back(dt);
        Showtime tmp;
        is >> tmp;
        DSC.push_back(tmp);
    }
    f.Date = dat;
    f.DSSC = DSC;
    return is;
}

ostream& operator<<(ostream& os, Film& f)
{
    os << f.FilmName << endl;
    os << f.Duration << endl;
    os << f.AmountOfDate << endl;
    os << f.TypeOfFilm << endl;
    for (int i = 0; i < f.AmountOfDate; i++) {
        
        string dt;
        dt = f.Date[i].getData();
        os << dt;
        Showtime temp;
        temp = f.DSSC[i].getData();
        os << temp;
    }
    return os;
}

void Film::AddShowtime(Showtime& st)
{
    string tempDate;
    cout << "Nhap ngay muon them suat chieu: ";
    cin >> tempDate;
    for (int i = 0; i < this->AmountOfDate; i++)
    {
        if (tempDate == this->Date[i].getData())
        {
            this->DSSC[i].push_back(st);
            return;
        }
        else
        {
            bool tmp;
            cout << "Khong co ngay nay trong lich chieu.\n";
            cout << "Ban co muon them ngay nay vao danh sach ngay chieu khong? Nhap 1 de them, nhap 0 de bo qua: ";
            cin >> tmp;
            if (tmp == 1)
            {
                this->Date.push_back(tempDate);
                this->AmountOfDate++;
                this->DSSC.push_back(st);
                return;
            }
            else
            return;
        }
    }
}