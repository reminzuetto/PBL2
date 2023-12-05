#include "Customer.h"
#pragma once

class Normal : public Customer {

    private:
        int TotalPrice;    
    
    public:
        void setTotalPrice();
        int getTotalPrice();

};