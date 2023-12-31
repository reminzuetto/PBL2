#include <iostream>
#include "Manager.h"

using namespace std;
Manager::Manager()
{
    this->m = 0;
    this->ListOfFilm = nullptr;
    this->ds_membership = nullptr;
    this->ds_normal = nullptr;
}
Manager::~Manager()
{
    delete[] this->ListOfFilm;
    delete[] this->ds_membership;
    delete[] this->ds_normal;
}

void Manager::Display()
{
    cout << "------------------Danh Sach Phim-------------------------\n";
    for (int i = 0; i < m; i++){
        cout << i << ".  " << (this->ListOfFilm + i);
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
    tsp >> this-> m;
    this->ListOfFilm = new Film[this->m];
    for (int i = 0; i < this->m; i++)
    {
        (this->ListOfFilm + 1)->doc(fl);
    }
    tf.close();
    fl.close();
    
}
void Manager::AddFilm()
{
    ofstream fl;
    fl.open("FilmList.txt",ios::app);
    Film f;
    f.nhap();
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
    vector<Film> films;
    Film temp;
    while (inFile >> temp) {
        films.push_back(temp);
    }
    inFile.close();

    cout << "Nhap thong tin can chinh sua: ";
    films[x].nhap();

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
    for (int i = 0; i < this->ListOfFilm.size(); i++)
    {
        if ((this->ListOfFilm + i)->getTenphim() == name)
        {
            cout << *(this->ListOfFilm + i);
            return;
        }
    }
    cout << "Khong tim thay phim co ten " << name << endl;
}
void Manager::ListFilm()
{
    cout << "------------------Danh Sach Phim-------------------------\n";
    for (int i = 0; i < m; i++){
        cout << i << ".  " << (this->ListOfFilm + i);
        cout << endl;
    }
    cout << "---------------------------------------------------------\n";
}
void Manager::ListCustomer()
{
    cout << "------------------Danh Sach Khach Hang-------------------------\n";
    for (int i = 0; i < n; i++){
        cout << i << ".  " << (this->ds_membership + i);
        cout << endl;
    }
    for (int i = 0; i < p; i++){
        cout << i << ".  " << (this->ds_normal + i);
        cout << endl;
    }
    cout << "---------------------------------------------------------\n";
}
void Manager::Revenue()
{
    int sum = 0;
    for (int i = 0; i < this->m; i++)
    {
        sum += (this->ListOfFilm + i)->getDoanhthu();
    }
    cout << "Tong doanh thu la: " << sum << endl;
}
void Manager::Display()
{
    cout << "------------------Danh Sach Phim-------------------------\n";
    for (int i = 0; i < m; i++){
        cout << i << ".  " << (this->ListOfFilm + i);
        cout << endl;
    }
    cout << "---------------------------------------------------------\n";
}
void Manager::AddCustomer(const Customer& csm);
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
//         vector<Membership> customers;
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
//         vector<Customer> customers;
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


