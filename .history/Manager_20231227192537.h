#pragma once
//#include "Film.h"
#include "Account.h"
#include "Customer.h"
class Manager {

    private:
        int AmountOfFilm;
        int AmountOfCustomer;
        int AmountOfAccount;
        Vector <Film> ListOfFilm;
        Vector <Account> List_Account;
        Vector <Customer> List_Customer;

    public:
        // Manager();
        // ~Manager();
        void Customer_Login(Account&, Customer&);
        void SearchFilm();
        void UpdateData();
        void AddFilm();
        void DeleteFilm();
        void EditFilm();
        void ListFilm();
        void ListCustomer();
        Vector <Film> getListFilm();
        //void Revenue();
};