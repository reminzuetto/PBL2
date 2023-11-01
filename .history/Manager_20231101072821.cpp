#include <iostream>
#include "Manager.h"

using namespace std;
Manager::Manager()
{
    this->m = 0;
    this->dsphim = nullptr;
    this->ds_membership = nullptr;
    this->ds_normal = nullptr;
}
Manager::~Manager()
{
    delete[] this->dsphim;
    delete[] this->ds_membership;
    delete[] this->ds_normal;
}

void Manager::Display()
{
    cout << "------------------Danh Sach Phim-------------------------\n";
    for (int i = 0; i < m; i++){
        cout << i << ".  " << (this->dsphim + i);
        cout << endl;
    }
    cout << "---------------------------------------------------------\n";
}
void Manager::UpdateData()
{
    ifstream tf, tc, fl, cl;
    tf.open("TotalFilm.txt",ios::in);
    tc.open("TotalCustomer.txt",ios::in);
    fl.open("FilmList.txt",ios::in);
    cl.open("CustomerList.txt",ios::in);
    for (int i = 0; i < this->m; i++)
    {
        (this->dsphim + 1)->doc(dsp);
    }
}

