#include "Trade.h"

Trade::Trade() {

    this->AmountOfTicket = 0;
    Vector<Ticket> tk;
    this->List_Ticket = tk;
    this->Cost = 0;

}

void Trade::setAmountOfTicket(const int& AoT) {

    this->AmountOfTicket = AoT;

}

int Trade::getAmountOfTicket() {

    return AmountOfTicket;

}

Trade& Trade::operator=(const Trade& t) {

    this->AmountOfTicket = t.AmountOfTicket;
    this->List_Ticket = t.List_Ticket;
    this->Cost = t.Cost;
    return *this;

}

void Trade::CreateTrading(Vector <Film> ListFilm) {
    int selectamount = 0;
    while (selectamount == 0) {
        system("cls");
        int a;
        cout << "Nhap vao so luong ve muon mua : ";
        cin >> a;
        selectamount = a;
        if (a == 0) return;
        cout << endl;
        setAmountOfTicket(a);
        Ticket t;
        //Lấy tên film
        Film f;
        int selectFilm = 0;
        while (selectFilm == 0) {
        
            system("cls");
            for (int i = 0; i < ListFilm.getSize(); i ++) {

                Film f = ListFilm[i].getData();
                cout << i + 1 << ". " << f.getFilmName() << endl;

            }
            cout << "Moi ban chon phim : ";
            cin >> selectFilm;
            Film f1 = ListFilm[selectFilm - 1].getData();
            t.setFilmName(f1.getFilmName());

            if (selectFilm == 0) break;
            int selectShowtime = 0;
            Showtime s;
            string tempt;
            int tempp;
            Room tempr;
            Vector<Showtime> ListShowtime;
            Vector <string> Day;
            Vector<int> Price;
            Vector<Room> Room;
            Vector<string> Time;
            Vector <string> Seat;
            Day = f1.getDate();
            ListShowtime = f1.getDSSC();
            while (selectShowtime == 0) {

                
                system("cls");
                for (int i = 0; i < ListShowtime.getSize(); i ++) {
                
                    string dt = Day[i].getData();
                    cout << i + 1 << ". " << dt << endl;

                }

                cout << "Moi ban chon ngay chieu : ";
                cin >> selectShowtime;
                string dt = Day[selectShowtime - 1].getData();
                t.setDate(dt);
                Showtime s = ListShowtime[selectShowtime - 1].getData();

                if (selectShowtime == 0) {

                    break;

                }

                system("cls");
                int select = 0;
                Time = s.getTime(); 
                Price = s.getPrices();
                Room = s.getRoom();
                while (select == 0) {

                    for (int i = 0; i < Time.getSize(); i ++) {

                        cout << i + 1 << ". " << endl;
                        tempt = Time[i].getData();
                        cout << "Thoi gian: " << tempt << " ";
                        tempp = Price[i].getData();
                        cout << "Gia ve: " << tempp << " ";
                        tempr = Room[i].getData();
                        tempr.Output();

                    }
                    int select;
                    cout << "Moi ban chon suat chieu : ";
                    cin >> select;
                    if (select == 0) {

                        selectShowtime = 0;
                        break;

                    }
                    tempt = Time[select - 1].getData();
                    tempp = Price[select - 1].getData();
                    tempr = Room[select - 1].getData();
                    for (int i = 0; i < a; i ++) {

                        string tempseat = tempr.SelectSeat(tempr);
                        Seat.push_back(tempseat);

                    }
                    if (select != 0) break;

                }

                if (selectShowtime != 0) break;

            }

            if (selectShowtime == 0) selectFilm = 0;
            else {

                t.setFilmName(f.getFilmName());
                t.setShowtime(tempt);
                t.setPrices(tempp);
                this->Cost = 0;
                for (int i = 0; i < Seat.getSize(); i ++) {

                    string tempseat = Seat[i].getData();
                    t.setNumOfRoom(tempr.getNumOfRoom());
                    t.setSeat(tempseat);
                    this->List_Ticket.push_back(t);
                    this->Cost += tempp;

                }

            }

            if (selectFilm != 0) break;

        }

        if (selectamount != 0) {
            
            system("cls");
            break;

        }

    }
}

void Trade::setCost(Vector<Ticket> List_Ticket) {

    if (List_Ticket.getSize() != 0) {

        for (int i = 0; i < List_Ticket.getSize(); i ++) {

            Ticket t = List_Ticket[i].getData();
            this->Cost += t.getPrices();

        }

    }

    else this->Cost = 0;

}

int Trade::getCost() {

    return this->Cost;

}

void Trade::PrintBill() 
{

    cout << "So luong ve da dat : ";
    cout << this->AmountOfTicket << endl;
    for(int i = 0; i < List_Ticket.getSize(); i ++) {

        cout << "Ve " << i + 1 << ":" << endl;
        Ticket t = List_Ticket[i].getData();
        t.Output();

    }
    cout << "Tong so tien : " << this->Cost << endl;

}

istream& operator>>(istream& is, Trade& t) 
{

    int AmountOfTicket;
    is >> AmountOfTicket;
    t.setAmountOfTicket(AmountOfTicket);
    Vector<Ticket> List_Ticket;
    for (int i = 0; i < AmountOfTicket; i ++) {

        Ticket tempt;
        is >> tempt;
        List_Ticket.push_back(tempt);

    }
    int tempcost;
    is >> tempcost;
    t.Cost = tempcost;
    return is;

}

ostream& operator<<(ostream& os, Trade& t) {

    os << t.AmountOfTicket << endl;
    for (int i = 0; i < t.AmountOfTicket; i ++) {

        Ticket tempt = t.List_Ticket[i].getData();
        os << tempt;

    }
    os << t.Cost << endl;
    return os;

}