#include "Ticket.h"
#include "Customer.h"

class Trade {

    private:
        List<Customer> List_Customer;
        int AmountOfTicket;
        List<Ticket> List_Ticket;

    public:
        void CreateTrading();
        void ContinueTrading();
        void PrintBill();
};