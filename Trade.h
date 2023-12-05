#pragma once
#include "Ticket.h"
#include "Vector.cpp"
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
        void CreateTrading();
        void ContinueTrading();
        void PrintBill();
};