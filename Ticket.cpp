#include "Ticket.h"

Ticket::Ticket(string s, int p) 
    : ChairNumber(s), Price(p)
{

}
Ticket::~Ticket(){

}
void Ticket::setChairNumber(string ChairNumber)
{
    this->ChairNumber = ChairNumber;
}
string Ticket::getChairNumber()
{
    return this->ChairNumber;
}
void Ticket::setPrice(int Price)
{
    this->Price = Price;
}
int Ticket::getPrice()
{
    return this->Price;
}