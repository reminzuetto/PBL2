#include <iostream>
#include "Manager.h"

Manager::Manager()
{
    this->AmountOfFilm = 0;
    this->AmountOfCustomer = 0;
    this->AmountOfAccount = 0;
    Vector <Film> f;
    Vector <Account> a;
    Vector <Customer> c;
    this->ListOfFilm = f;
    this->List_Account = a;
    this->List_Customer = c;
}
// Manager::~Manager()
// {
//     delete[] this->ListOfFilm;
//     delete[] this->List_Account;
//     delete[] this->List_Customer;
// }

Vector <Film> Manager::getListFilm() {

    return this->ListOfFilm;

}

void Manager::Customer_Login(Account& acc, Customer &cus) {

    bool check = false;
    for (int i = 0; i < this->AmountOfAccount; i ++) {

        if (acc == List_Account[i].getData()) {

            cout << "Dang nhap thanh cong" << endl;
            check = true;
            system("pause");
            break;

        }

    }

    if (check == true) {

        for (int i = 0; i < this->AmountOfCustomer; i ++) {

            if (acc.getID() == List_Customer[i].getData().getID()) {

                cus = List_Customer[i].getData();
                return;

            }

        }

    }

    else {

        cout << "Dang nhap khong thanh cong" << endl;
        system("pause");
        return;

    }

}

void Manager::UpdateData()
{
    ifstream fl, cl, al;
    fl.open("FilmList.txt",ios::in);
    cl.open("CustomerList.txt",ios::in);
    al.open("AccountList.txt", ios::in);
    Film temp;
    int countFilm;
    fl >> countFilm;
    this->AmountOfFilm = countFilm;
    for (int i = 0; i < countFilm; i++)
    {
        fl >> temp;
        this->ListOfFilm.push_back(temp);
    }
    fl.close();
    Customer cus;
    int countCus;
    cl >> countCus;
    this->AmountOfCustomer = countCus;
    for (int i = 0; i < countCus; i++)
    {
        cl >> cus;
        this->List_Customer.push_back(cus);
    }
    cl.close();

    Account acc;
    int countAcc;
    al >> countAcc;
    this->AmountOfAccount = countAcc;
    for (int i = 0; i < countAcc; i++)
    {
        al >> acc;
        this->List_Account.push_back(acc);
    }
    al.close();

}
void Manager::AddFilm()
{
    ifstream inFile("FilmList.txt");
    if (!inFile.is_open()) {
        cout << "Error: File not found." << endl;
        return;
    }
    int countFilm;
    inFile >> countFilm;
    this->AmountOfFilm = countFilm;
    inFile.ignore();
    ofstream outFile("FilmList.txt",ios::app);
    if (!outFile.is_open()) {
        cerr << "Error: Unable to open file for writing." << endl;
        return;
    }
    this->AmountOfFilm++;
    Film f;
    f.doc();
    ListOfFilm.push_back(f);
    outFile << f << endl;

    outFile.seekp(0);
    outFile << this->AmountOfFilm;
    inFile.close();
    outFile.close();
    cout << "Them phim thanh cong!"<< endl;
}
void Manager::DeleteFilm()
{
    ifstream inFile("FilmList.txt");
    if (!inFile.is_open()) {
        cerr << "Error: File not found." << endl;
        return;
    }
    int countFilm;
    inFile >> countFilm;
    inFile.ignore();
    this->AmountOfFilm = countFilm;
    this->ListOfFilm.setSize(countFilm);
    for (int i = 0; i < countFilm; i++)
    {
        Film temp;
        inFile >> temp;
        this->ListOfFilm[i].setData(temp);
    }
    inFile.close();
    int x;
    cout << "Nhap vi tri phim can xoa: ";
    cin >> x;
    if (x < 1 || x > this->AmountOfFilm)
    {
        cout << "Vi tri khong hop le!" << endl;
        return;
    }
    Film temp;
    for (int i = x; i < this->AmountOfFilm - 1; i++)
    {
        ListOfFilm[i] = ListOfFilm[i + 1];
    }
    this->AmountOfFilm--;
    ListOfFilm.setSize(this->AmountOfFilm);
    ofstream outFile("FilmList.txt");
    if (!outFile.is_open()) {
        cerr << "Error: Unable to open file for writing." << endl;
        return;
    }
    outFile << this->AmountOfFilm;
    for (int i = 0; i < this->AmountOfFilm; i++)
    {
        Film temp;
        temp = ListOfFilm[i].getData();
        outFile << temp << endl;
    }
    outFile.close();
    cout << "Xoa phim thanh cong!"<< endl;
}
void Manager::EditFilm()
{
    ifstream inFile("FilmList.txt");
    if (!inFile.is_open()) {
        cerr << "Error: File not found." << endl;
        return;
    }
    int countFilm;
    inFile >> countFilm;
    inFile.ignore();
    this->AmountOfFilm = countFilm;
    this->ListOfFilm.setSize(countFilm);
    Film temp;
    for (int i = 0; i < countFilm; i++)
    {
        inFile >> temp;
        this->ListOfFilm[i].setData(temp);
    }
    inFile.close();

    int x;
    cout << "Nhap vi tri phim can chinh sua: ";
    cin >> x;
    if (x < 1 || x > this->AmountOfFilm)
    {
        cout << "Vi tri khong hop le!" << endl;
        return;
    }
    this->ListOfFilm[x - 1].getdata().edit();
    this->ListOfFilm[x - 1].setData(ef);
    ofstream outFile("FilmList.txt");
    if (!outFile.is_open()) {
        cerr << "Error: Unable to open file for writing." << endl;
        return;
    }
    outFile << this->AmountOfFilm;
    for (int i = 0; i < this->AmountOfFilm; i++)
    {
        Film f;
        f = ListOfFilm[i].getData();
        outFile << f << endl;
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
        if ((this->ListOfFilm[i].getData().getFilmName() == name))
        {
            Film temp;
            temp = this->ListOfFilm[i].getData();
            temp.Output();
            return;
        }
    }
    cout << "Khong tim thay phim co ten " << name << "!" << endl;
}
void Manager::ListFilm()
{
    cout << "------------------Danh Sach Phim-------------------------\n";
    for (int i = 0; i < AmountOfFilm; i++){
        cout << i + 1 << endl;
        Film temp;
        temp = this->ListOfFilm[i].getData();
        temp.Output();
        cout << endl;
    }
    cout << "---------------------------------------------------------\n";
}
void Manager::ListCustomer()
{
    cout << "------------------Danh Sach Khach Hang-------------------------\n";
    for (int i = 0; i < AmountOfCustomer; i++)
    {
        cout << i + 1 << ".  ";
        Customer cus;
        cus = List_Customer[i].getData();
        cus.Output();
        cout << endl;
    }
    cout << "---------------------------------------------------------\n";
}

void Manager::AddCustomer(Customer& cus) {

    bool check = false;
    Vector<Customer> temp;

    for (int i = 0; i < AmountOfCustomer; i ++) {

        if (cus == List_Customer[i].getData()) {

            check = true;
            temp.push_back(cus);

        }

        else {

            Customer c = List_Customer[i].getData();
            temp.push_back(c);

        }

    }
    if (check == false) temp.push_back(cus);
    AmountOfCustomer = temp.getSize();
    List_Customer = temp;
    ofstream cl;
    cl.open("CustomerList.txt", ios::out);
    cl << AmountOfCustomer;
    for (int i = 0; i < AmountOfCustomer; i ++) {

        Customer c = List_Customer[i].getData();
        cl << c << endl;

    }

}
void Manager::EditCustomer()
{
    ifstream inFile("CustomerList.txt");
    if (!inFile.is_open()) {
        cerr << "Error: File not found." << endl;
        return;
    }
    int countCus;
    inFile >> countCus;
    inFile.ignore();
    this->AmountOfCustomer = countCus;
    this->List_Customer.setSize(countCus);
    Customer temp;
    for (int i = 0; i < countCus; i++)
    {
        inFile >> temp;
        this->List_Customer[i].setData(temp);
    }
    inFile.close();

    int x;
    cout << "Nhap vi tri khach hang can chinh sua: ";
    cin >> x;
    if (x < 1 || x > this->AmountOfCustomer)
    {
        cout << "Vi tri khong hop le!" << endl;
        return;
    }
    Customer ec;
    ec = this->List_Customer[x - 1].getdata().edit();
    this->List_Customer[x - 1].setData(ec);
    ofstream outFile("CustomerList.txt");
    if (!outFile.is_open()) {
        cerr << "Error: Unable to open file for writing." << endl;
        return;
    }
    outFile << this->AmountOfCustomer;
    for (int i = 0; i < this->AmountOfCustomer; i++)
    {
        Customer c;
        c = List_Customer[i].getData();
        outFile << c << endl;
    }
    outFile.close();
}
void Manager::DeleteFilm()
{
    ifstream inFile("FilmList.txt");
    if (!inFile.is_open()) {
        cerr << "Error: File not found." << endl;
        return;
    }
    int countFilm;
    inFile >> countFilm;
    inFile.ignore();
    this->AmountOfFilm = countFilm;
    this->ListOfFilm.setSize(countFilm);
    for (int i = 0; i < countFilm; i++)
    {
        Film temp;
        inFile >> temp;
        this->ListOfFilm[i].setData(temp);
    }
    inFile.close();
    int x;
    cout << "Nhap vi tri phim can xoa: ";
    cin >> x;
    if (x < 1 || x > this->AmountOfFilm)
    {
        cout << "Vi tri khong hop le!" << endl;
        return;
    }
    for (int i = x; i < this->AmountOfFilm - 1; i++)
    {
        ListOfFilm[i] = ListOfFilm[i + 1];
    }
    this->AmountOfFilm--;
    ListOfFilm.setSize(this->AmountOfFilm);
    ofstream outFile("FilmList.txt");
    if (!outFile.is_open()) {
        cerr << "Error: Unable to open file for writing." << endl;
        return;
    }
    outFile << this->AmountOfFilm;
    for (int i = 0; i < this->AmountOfFilm; i++)
    {
        Film temp;
        temp = ListOfFilm[i].getData();
        outFile << temp << endl;
    }
    outFile.close();
    cout << "Xoa phim thanh cong!"<< endl;
}
void Manager::EditCustomer(Customer& cus) {
}
