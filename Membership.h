#pragma once
#include "Customer.h"

class Membership : public Customer {

    private:
        double Discount;
        double NewPrice;

    public:
        void setDiscount(double = 0.2);
        double getDiscount();
        void setNewPrice(double);
        double getNewPrice();
};
