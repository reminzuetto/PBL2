#include "Ticket.h"
#pragma once

class Customer {

    private:
        string Name;
        Ticket T;
        int Amount;
    public:
        Customer();
        ~Customer();
        public void setName();
        public string getName();
        void BuyTicket();
        void TotalPrice();
        void TicketCheck();
};