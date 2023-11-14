#include "Customer.h"
#pragma once

class Membership : public Customer {

    private:
        double Discount;

    public:
        void setDiscount();
        double getDiscount();
        void setNewPrice();
        int getNewPrice();
};