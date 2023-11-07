#include "Ticket.h"
Ticket::Ticket()
{}
Ticket::~Ticket()
{}
void Ticket::setChairNumber(string ChairNumber)
{
    this->ChairNumber = ChairNumber;
}
string Ticket::getChairNumber()
{
    return this->ChairNumber;
}
void Ticket::getPrice(int Price)
{
    this->Price = Price;
}
int Ticket::getPrice()
{
    return this->Price;
}