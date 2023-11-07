#include <iostream>
#include <fstream>
#include "Date.h"
#include "Customer.h"
#include "Trade.h"
#pragma once
class Manager {

    private:
        List <Date> DateOfWeek;

    public:
        void UpdateData();
        void AddFilm();
        void DeleteFilm();
        void EditFilm();
        void ListFilm();
        void ListCustomer();
        void Revenue();
        void Display();
        void List_Customer();
};