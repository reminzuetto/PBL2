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
        void setCost(const int&);
        int getCost();
        void CreateTrading(Vector <Film>);
        void PrintBill();
};
