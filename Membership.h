#include "Customer.h"
#pragma once

class Membership : public Customer {

    private:
        double Discount;
        int TotalPrice;

    public:
        double getDiscount();
        int getTotalPrice();
};