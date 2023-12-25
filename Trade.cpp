#include "Trade.h"

void Trade::setAmountOfTicket(const int& AoT) {

    this->AmountOfTicket = AoT;

}

int Trade::getAmountOfTicket() {

    return AmountOfTicket;

}

void Trade::setCost(const int& Cost) {

    this->Cost = Cost;

}

int getCost() {

    return this->Cost;

}

void Trade::CreateTrading(Vector <Film> ListFilm) {

    int a, c;
    cout << "Nhap vao so luong ve muon mua : ";
    cin >> a;
    cout << endl;
    setAmountOfTicket(a);
    Ticket t;
    //Lấy tên film
    for (int i = 0; i < ListFilm.getSize(); i ++) {

        Film f = ListFilm[i].getData();
        cout << i + 1 << ". " << f.getFilmName() << endl;

    }

    int selectFilm;
    cout << "Moi ban chon phim : ";
    cin >> selectFilm;
    Film f = ListFilm[selectFilm - 1].getData();
    t.setFilmName(f.getFilmName());

    //Lấy suất chiếu
    Vector<Showtime> ListShowtime;
    ListShowtime = f.getDSSC();
    for (int i = 0; i < ListShowtime.getSize(); i ++) {

        Showtime s = ListShowtime[i].getData();
        s.Output();

    }

}