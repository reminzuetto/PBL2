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
    for (int i=0;i < m; i++){
        cout << i << ".  " << (this->dsphim + i);
        cout << endl;
    }
    cout << "---------------------------------------------------------\n";
}