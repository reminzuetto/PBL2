#pragma once
#include "Ticket.h"
#include "Vector.cpp"
class Trade {

    private:
        int AmountOfTicket;
        Vector<Ticket> List_Ticket;

    public:
        void CreateTrading();
        void ContinueTrading();
        void PrintBill();
};