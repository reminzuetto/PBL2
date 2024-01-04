#pragma once
#include "Account.h"
class Manager {

    private:
        int AmountOfFilm;
        int AmountOfCustomer;
        int AmountOfAccount;
        Vector <Film> ListOfFilm;
        Vector <Account> List_Account;
        Vector <Customer> List_Customer;

    public:
        Manager();
        void Customer_Login(Account&, Customer&, int*);
        void SearchFilm();
        void UpdateData();
        void UpdateSeats();
        void AddFilm();
        void EditFilm();
        void DeleteFilm();
        void AddCustomer(Customer&);
        void EditCustomer(Customer&);
        void ListFilm();
        void ListCustomer();
        void UpdatePass(Account&);
        Vector <Film> getListFilm();
        void Revenue();
};