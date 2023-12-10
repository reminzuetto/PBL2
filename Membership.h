#pragma once
#include "Customer.h"

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
