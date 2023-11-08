#include <iostream>
#include <fstream>
#include "Film.h"
#include "Customer.h"
#include "Trade.h"
#pragma once
class Manager {

        private:
        List <Film> ListOfFilm;
        List <Customer> List_Customer;

    public:
        void UpdateData();
        void AddFilm();
        void DeleteFilm();
        void EditFilm();
        void ListFilm();
        void ListCustomer();
        void Revenue();
        void Display();
        void LisOfTrade();
};