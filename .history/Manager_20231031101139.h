#include <iostream>
#include "fstream"
#include "Membership.h"
#pragma once
class Manager {

    private:
        Film *dsphim;
        Membership *ds_membership;
        Customer *ds_normal;
        int m;
    public:
        void UpdateData();
        void AddFilm();
        void DeleteFilm();
        void EditFilm();
        void ListCustomer();
        void Revenue();
        void Display();
};