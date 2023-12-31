#include "Film.h"
#include "Customer.h"
#include "Trade.h"
#pragma once
class Manager {

    private:
        int AmountOfFilm;
        Vector <Film> ListOfFilm;
        Vector <Customer> List_Customer;

    public:
        void SearchFilm();
        void UpdateData();
        void AddFilm();
        void DeleteFilm();
        void EditFilm();
        void ListFilm();
        void ListCustomer();
        void Revenue();
        void AddCustomer(const Customer&);
};