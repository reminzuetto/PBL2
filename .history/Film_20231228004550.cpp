#include "Film.h"

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

Vector<Showtime> Film::getDSSC() {

    return this->DSSC;

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

        Showtime s;
        s = DSSC[i].getData();
        s.Output();

    }
}
void Film::doc() {
    cout << "Enter film name: ";
    getline(cin, this->FilmName);
    cout << "Enter duration: ";
    cin >> this->Duration;
    cin.ignore();
    cout << "Enter amount of date: ";
    cin >> this->AmountOfDate;
    cin.ignore();
    cout << "Enter type of film: ";
    getline(cin, this->TypeOfFilm);
    //DSSC.resize(AmountOfDate);
    for (int i = 0; i < AmountOfDate; i++) {
        cout << "Enter details for showtime " << i + 1 << ": ";
        Showtime temp;
        temp.doc();
        DSSC[i].setData(temp);
    }
}

void Film::edit() {
    int choice;
    cout << "1. Film Name\n2. Duration\n3. Type of Film\n4. Amount of Date\n";
    cout << "Nhap loai du lieu muon thay doi:\n";
    cin >> choice;
    cin.ignore(::numeric_limits<::streamsize>::max(), '\n');

    switch (choice) {
        case 1:
            cout << "Enter new film name: ";
            getline(cin, this->FilmName);
            break;
        case 2:
            cout << "Enter new duration: ";
            cin >> Duration;
            cin.ignore();
            break;
        case 3:
            cout << "Enter new type of film: ";
            getline(cin, TypeOfFilm);
            break;
        case 4:
            cout << "Enter new amount of date: ";
            cin >> AmountOfDate;
            cin.ignore();
            break;
        default:
            cout << "Invalid choice.\n";
            break;
    }
}
istream& operator>>(istream& is, Film& f)
{
    is >> f.FilmName
    string temp;
    getline(is, temp);
    f.Duration = stoi(temp);
    getline(is, temp);
    f.AmountOfDate = stoi(temp);
    is >> f.TypeOfFilm;
    for (int i = 0; i < f.Duration; i++) {
        Showtime tmp;
        is >> tmp;
        f.DSSC.push_back(tmp);
    }
    return is;
}
ostream& operator<<(ostream& os, Film& f)
{
    os << f.FilmName << endl;
    os << f.Duration << endl;
    os << f.AmountOfDate << endl;
    os << f.TypeOfFilm << endl;
    for (int i = 0; i < f.AmountOfDate; i++) {
        Showtime temp;
        temp = f.DSSC[i].getData();
        os << temp;
    }
    return os;
}

Film Film::SelectFilm(Vector<Film> ListFilm, int* selectFilm) {

    system("cls");
    for (int i = 0; i < ListFilm.getSize(); i ++) {

        Film f = ListFilm[i].getData();
        cout << i + 1 << ". " << f.getFilmName() << endl;

    }

    cout << "Moi ban chon phim : ";
    int tmp;
    cin >> tmp;
    *selectFilm = tmp;
    Film f1 = ListFilm[*selectFilm - 1].getData();
    return f1;

}