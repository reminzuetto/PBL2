#include <iostream>
#include "Manager.h"

using namespace std;
Manager::Manager()
{
    this->ListOfFilm = nullptr;
    this->List_Customer = nullptr;
}
Manager::~Manager()
{
    delete[] this->ListOfFilm;
    delete[] this->List_Customer;
}
void Manager::UpdateData()
{
    ifstream tf, tc, fl, cl;
    tf.open("TotalFilm.txt",ios::in);
    tc.open("TotalCustomer.txt",ios::in);
    fl.open("FilmList.txt",ios::in);
    cl.open("CustomerList.txt",ios::in);
    tf >> this->AmountOfFilm;
    for (int i = 0; i < this->AmountOfFilm; i++)
    {
        this->ListOfFilm[i]->data->doc(fl);
    }
    for (int i = 0; i < this->AmountOfFilm; i++)
    {
        for (auto& film : ListOfFilm) {
            for (auto& showtime : film->DSSC) {
                showtime.doc(tf);
        }
    }
    }
    tf.close();
    fl.close();
}
void Manager::AddFilm()
{
    ofstream fl;
    fl.open("FilmList.txt",ios::app);
    Film f;
    f.doc();
    fl << f;
    fl.close();
}
void Manager::DeleteFilm()
{
    int x;
    cout << "Nhap vi tri phim can xoa: ";
    cin >> x;
    for (int i = x; i < this->m - 1; i++)
    {
        *(this->ListOfFilm + i) = *(this->ListOfFilm + i + 1);
    }
    this->m--;
    ofstream fl;
    fl.open("FilmList.txt",ios::out);
    fl << this->m;
    for (int i = 0; i < this->m; i++)
    {
        fl << *(this->ListOfFilm + i);
    }
    fl.close();
}
void Manager::EditFilm()
{
    int x;
    cout << "Nhap vi tri phim can chinh sua: ";
    cin >> x;

    ifstream inFile;
    inFile.open("FilmList.txt",ios::in);
    Vector <Film> films;
    Film temp;
    while (inFile >> temp) {
        films.push_back(temp);
    }
    inFile.close();

    cout << "Nhap thong tin can chinh sua: ";
    films[x - 1].edit();

    ofstream outFile;
    outFile.open("FilmList.txt",ios::out);
    for (const auto& film : films) {
        outFile << film;
    }
    outFile.close();
}
void Manager::SearchFilm()
{
    string name;
    cout << "Nhap ten phim can tim: ";
    cin >> name;
    for (int i = 0; i < AmountOfFilm; i++)
    {
        if ((this->ListOfFilm[i]->data == name))
        {
            this->ListOfFilm[i]->getData().output();
            return;
        }
    }
    cout << "Khong tim thay phim co ten " << name << endl;
}
void Manager::ListFilm()
{
    cout << "------------------Danh Sach Phim-------------------------\n";
    for (int i = 0; i < ListOfFilm.getSize(); i++){
        cout << i + 1 << endl;
        this->ListOfFilm[i]->getData().output();
        cout << endl;
    }
    cout << "---------------------------------------------------------\n";
}
void Manager::ListCustomer()
{
    cout << "------------------Danh Sach Khach Hang-------------------------\n";
    for (int i = 0; i < List_Customer.getSize(); i++)
    {
        cout << i + 1 << ".  ";
        cout << List_Customer[i]->getData();
        cout << endl;
    }
    cout << "---------------------------------------------------------\n";
}
// void Manager::Revenue()
// {
//     int sum = 0;
//     for (int i = 0; i < this->m; i++)
//     {
//         sum += ;
//     }
//     cout << "Tong doanh thu la: " << sum << endl;
// }
void Manager::AddCustomer(const Customer& csm)
{
    (this->List_Customer).push_back(csm);
}
// void Manager::DeleteCustomer()
// {
//     int x;
//     cout << "Nhap vi tri khach hang can xoa: ";
//     cin >> x;
//     if (x < this->n)
//     {
//         for (int i = x; i < this->n - 1; i++)
//         {
//             *(this->ds_membership + i) = *(this->ds_membership + i + 1);
//         }
//         this->n--;
//     }
//     else
//     {
//         for (int i = x; i < this->p - 1; i++)
//         {
//             *(this->ds_normal + i) = *(this->ds_normal + i + 1);
//         }
//         this->p--;
//     }
//     ofstream cl;
//     cl.open("CustomerList.txt",ios::out);
//     cl << this->n << " " << this->p;
//     for (int i = 0; i < this->n; i++)
//     {
//         cl << *(this->ds_membership + i);
//     }
//     for (int i = 0; i < this->p; i++)
//     {
//         cl << *(this->ds_normal + i);
//     }
//     cl.close();
// }
// void Manager::EditCustomer()
// {
//     int x;
//     cout << "Nhap vi tri khach hang can chinh sua: ";
//     cin >> x;
//     if (x < this->n)
//     {
//         ifstream inFile;
//         inFile.open("CustomerList.txt",ios::in);
//         Vector<Membership> customers;
//         Membership temp;
//         while (inFile >> temp) {
//             customers.push_back(temp);
//         }
//         inFile.close();

//         cout << "Nhap thong tin can chinh sua: ";
//         customers[x].nhap();

//         ofstream outFile;
//         outFile.open("CustomerList.txt",ios::out);
//         for (const auto& customer : customers) {
//             outFile << customer;
//         }
//         outFile.close();
//     }
//     else
//     {
//         ifstream inFile;
//         inFile.open("CustomerList.txt",ios::in);
//         Vector<Customer> customers;
//         Customer temp;
//         while (inFile >> temp) {
//             customers.push_back(temp);
//         }
//         inFile.close();

//         cout << "Nhap thong tin can chinh sua: ";
//         customers[x].nhap();

//         ofstream outFile;
//         outFile.open("CustomerList.txt",ios::out);
//         for (const auto& customer : customers) {
//             outFile << customer;
//         }
//         outFile.close();
//     }
// }
// void Manager::SearchCustomer()
// {
//     string name;
//     cout << "Nhap ten khach hang can tim: ";
//     cin >> name;
//     for (int i = 0; i < this->n; i++)
//     {
//         if ((this->ds_membership + i)->getTenkhachhang() == name)
//         {
//             cout << *(this->ds_membership + i);
//             return;
//         }
//     }
//     for (int i = 0; i < this->p; i++)
//     {
//         if ((this->ds_normal + i)->getTenkhachhang() == name)
//         {
//             cout << *(this->ds_normal + i);
//             return;
//         }
//     }
//     cout << "Khong tim thay khach hang co ten " << name << endl;
// }


