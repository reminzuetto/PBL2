#include <iostream>
#include "Customer.h"
#pragma once

using namespace std;

class Membership : public Customer {

    private:
        int discount;

    public:
        void newPrice();

};