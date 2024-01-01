#pragma once
#include "Ticket.h"
class Trade {

    private:
        int AmountOfTicket;
        Vector<Ticket> List_Ticket;
        int Cost;

    public:
        Trade();
        void setAmountOfTicket(const int&);
        int getAmountOfTicket();
        void setCost(const int&);
        int getCost();
        void CreateTrading(Vector <Film>);
        Vector <Ticket> getTicket();
        void PrintBill();
        void Update(Film&, Film&);
        Trade& operator=(const Trade&);
        friend istream& operator>>(istream&, Trade&);
        friend ostream& operator<<(ostream&, Trade&);
};
