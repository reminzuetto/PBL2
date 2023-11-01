#include <iostream>
#include "Customer.h"

using namespace std;

Customer::Customer()
{}
Customer::~Customer()
{}
void Customer::setname(string name)
{
    this->name = name;
}
string Customer::getname() const
{
    return this->name;
}
