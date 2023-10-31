#include <iostream>
#include "Manager.h"

using namespace std;
Manager::Manager()
{
    this->dsphim = nullptr;
    this->ds_membership = nullptr;
    this->ds_normal = nullptr;
}
Manager::~Manager()
{
    delete[] this->dsphim;
    delete[] this->ds_membership;
    delete[] this->ds_normal;
}