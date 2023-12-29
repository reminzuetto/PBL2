#pragma once
#include "Ticket.h"
class Trade {

    private:
        int AmountOfTicket;
        Vector<Ticket> List_Ticket;
        int Cost;

    public:
        void setAmountOfTicket(const int&);
        int getAmountOfTicket();
        void setCost(Vector<Ticket>);
        int getCost();
        void CreateTrading(Vector <Film>);
        void PrintBill();
        Trade& operator=(const Trade&);
        friend istream& operator>>(istream&, Trade&);
        friend ostream& operator<<(ostream&, Trade&);
};
