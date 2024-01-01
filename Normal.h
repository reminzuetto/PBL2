#pragma once
#include "Customer.h"

class Normal : public Customer {

    private:
        int TotalPrice;    
    
    public:
        void setTotalPrice(const int&);
        int getTotalPrice();

};
