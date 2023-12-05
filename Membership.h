#include "Customer.h"
#pragma once

class Membership : public Customer {

    private:
        double Discount;
        int NewPrice;

    public:
        void setDiscount();
        double getDiscount();
        void setNewPrice();
        int getNewPrice();
};