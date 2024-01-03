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

void Manager::Customer_Login(Account& acc, Customer &cus, int* ind) {

    bool check = false, check1 = false;
    Account tempacc;
    for (int i = 0; i < this->AmountOfAccount; i ++) {
        
        tempacc = List_Account[i].getData();
        if (acc.getID() == tempacc.getID()) {

            check1 = true;
            break;

        }

    }

    if (check1 == true) {

        if (acc.getPass() == tempacc.getPass()) {

            check = true;
            *ind = 1;
            cout << "Dang nhap thanh cong" << endl;
            system("pause");

        }

        else {

            cout << "Sai tai khoan hoac mat khau. Vui long nhap lai." << endl;
            system("pause");
            Account racc;
            int count = 0;
            int i = 0;
            while (count < 4) {

                racc.Login();
                if (racc.getID() != tempacc.getID()) {
                    Customer_Login(racc, cus, &i);
                    if (i == 0) return;
                    else {
                        
                        acc = racc;
                        return;

                    }
                    break;
                
                }

                else if (racc.getPass() == tempacc.getPass()) {

                    cout << "Dang nhap thanh cong" << endl;
                    system("pause");
                    acc = racc;
                    check = true;
                    *ind = 1;
                    break;

                }

                else {

                    count++;
                    if (count == 4) {
                        
                        cout << "Ban da nhap sai qua 5 lan. Vui long thu lai sau." << endl;
                        system("pause");
                        return;

                    }
                    else cout << "Sai tai khoan hoac mat khau. Vui long nhap lai." << endl;
                    system("pause");

                }

            }

        }

    }

    else {

        cout << "Tai khoan khong ton tai." << endl;
        cout << "Ban co muon tao tai khoan khong?\nY la co, N la khong. [Y/N] : ";
        char ch;
        cin >> ch;
        if (ch == 'N' || ch == 'n') {

            return;

        }

        else if (ch == 'Y' || ch == 'y') {

            int check = 0;
            Account tmpacc;
            tmpacc.Register(List_Account, &check);
            if (check == 0) return;
            cout << "Nhap thong tin cua ban: " << endl;
            Customer tmpcus;
            tmpcus.setID(tmpacc.getID());
            tmpcus.Input();
            this->AmountOfAccount ++;
            this->List_Account.push_back(tmpacc);
            this->AmountOfCustomer ++;
            this->List_Customer.push_back(tmpcus);
            ofstream al, cl;
            al.open("AccountList.txt", ios::out);
            al << this->AmountOfAccount << endl;
            for (int i = 0; i < this->List_Account.getSize(); i ++) {

                Account tacc = this->List_Account[i].getData();
                al << tacc;

            }
            al.close();
            cl.open("CustomerList.txt", ios::out);
            cl << this->AmountOfCustomer << endl;
            for (int i = 0; i < this->List_Customer.getSize(); i ++) {

                Customer tcus = this->List_Customer[i].getData();
                cl << tcus;

            }
            cl.close();
            cout << "Dang ki thanh cong!" << endl;
            cus = tmpcus;
            acc = tmpacc;
            system("pause");
            return;
        }

        else return;

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
    UpdateSeats();

}

void Manager::UpdateSeats() {

    for (int k = 0; k < AmountOfFilm; k ++) {

        Film fm = ListOfFilm[k].getData();

        for (int i = 0; i < AmountOfCustomer; i ++) {

            Customer cs = List_Customer[i].getData();
            Vector <Trade> tmp;
            tmp = cs.getTrade();
            for (int j = 0; j < cs.getAmountOfTrade(); j++ ) {

                Trade tt = tmp[j].getData();
                tt.Update(fm, fm);
                tmp[j].setData(tt);

            }

        }

        ListOfFilm[k].setData(fm);

    }

}

void Manager::AddFilm()
{
    system("cls");
    // ifstream inFile("FilmList.txt");
    // if (!inFile.is_open()) {
    //     cout << "Error: File not found." << endl;
    //     return;
    // }
    // int countFilm;
    // inFile >> countFilm;
    // this->AmountOfFilm = countFilm;
    // inFile.ignore();
    ofstream fl;
    fl.open("FilmList.txt",ios::out);
    this->AmountOfFilm++;
    Film f;
    f.Input();
    ListOfFilm.push_back(f);
    fl << this->AmountOfFilm << endl;
    for (int i = 0; i < ListOfFilm.getSize(); i ++) {

        Film f1 = ListOfFilm[i].getData();
        fl << f1;

    }
    //inFile.close();
    cout << "Them phim thanh cong!"<< endl;
    system("pause");
}
// void Manager::DeleteFilm()
// {
//     ifstream inFile("FilmList.txt");
//     if (!inFile.is_open()) {
//         cerr << "Error: File not found." << endl;
//         return;
//     }
//     int countFilm;
//     inFile >> countFilm;
//     inFile.ignore();
//     this->AmountOfFilm = countFilm;
//     this->ListOfFilm.setSize(countFilm);
//     for (int i = 0; i < countFilm; i++)
//     {
//         Film temp;
//         inFile >> temp;
//         this->ListOfFilm[i].setData(temp);
//     }
//     inFile.close();
//     int x;
//     cout << "Nhap vi tri phim can xoa: ";
//     cin >> x;
//     if (x < 1 || x > this->AmountOfFilm)
//     {
//         cout << "Vi tri khong hop le!" << endl;
//         return;
//     }
//     Film temp;
//     for (int i = x; i < this->AmountOfFilm - 1; i++)
//     {
//         ListOfFilm[i] = ListOfFilm[i + 1];
//     }
//     this->AmountOfFilm--;
//     ListOfFilm.setSize(this->AmountOfFilm);
//     ofstream outFile("FilmList.txt");
//     if (!outFile.is_open()) {
//         cerr << "Error: Unable to open file for writing." << endl;
//         return;
//     }
//     outFile << this->AmountOfFilm << endl;
//     for (int i = 0; i < this->AmountOfFilm; i++)
//     {
//         Film temp;
//         temp = ListOfFilm[i].getData();
//         outFile << temp << endl;
//     }
//     outFile.close();
//     cout << "Xoa phim thanh cong!"<< endl;
// }
void Manager::EditFilm()
{
    system("cls");
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

    for (int i = 0; i < countFilm; i ++) {

        Film f = ListOfFilm[i].getData();
        cout << i + 1 << ". " << f.getFilmName() << endl;

    }
    int x;
    cout << "Nhap vi tri phim can chinh sua: ";
    cin >> x;
    if (x < 1 || x > this->AmountOfFilm)
    {
        cout << "Vi tri khong hop le!" << endl;
        return;
    }
    system("cls");
    Film ef = this->ListOfFilm[x - 1].getData();
    Film fc = ef;
    ef.edit();
    for (int i = 0; i < AmountOfCustomer; i ++) {

        Customer cus = List_Customer[i].getData();
        Vector <Trade> temp;
        temp = cus.getTrade();
        for (int j = 0; j < cus.getAmountOfTrade();j++ ) {
            
            Trade tt = temp[j].getData();
            tt.Update(fc, ef);
            temp[j].setData(tt);

        }
        cus.setTrade(temp);
        List_Customer[i].setData(cus);

    }
    ofstream lc;
    lc.open("CustomerList.txt", ios::out);
    lc << AmountOfCustomer << endl;
    for (int i = 0; i < AmountOfCustomer; i ++) {

        Customer cs;
        cs = List_Customer[i].getData();
        lc << cs;

    }
    lc.close();
    this->ListOfFilm[x - 1].setData(ef);
    ofstream outFile("FilmList.txt");
    if (!outFile.is_open()) {
        cerr << "Error: Unable to open file for writing." << endl;
        return;
    }
    outFile << this->AmountOfFilm << endl;
    for (int i = 0; i < this->AmountOfFilm; i++)
    {
        Film f;
        f = ListOfFilm[i].getData();
        outFile << f;
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
        Film f = this->ListOfFilm[i].getData();
        if ((f.getFilmName() == name))
        {
            f.Output();
            return;
        }
    }
    cout << "Khong tim thay phim co ten " << name << "!" << endl;
}
void Manager::ListFilm()
{
    system("cls");
    cout << "------------------Danh Sach Phim-------------------------\n";
    for (int i = 0; i < AmountOfFilm; i++){
        cout << i + 1 << ". ";
        Film temp;
        temp = this->ListOfFilm[i].getData();
        cout << temp.getFilmName();
        cout << endl;
    }
    cout << "---------------------------------------------------------\n";
    system("pause");
}
void Manager::ListCustomer()
{
    system("cls");
    cout << "------------------Danh Sach Khach Hang-------------------------\n";
    for (int i = 0; i < AmountOfCustomer; i++)
    {
        cout << i + 1 << endl;
        Customer cus;
        cus = List_Customer[i].getData();
        cus.Output();
        cout << endl;
    }
    cout << "---------------------------------------------------------\n";
    system("pause");
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
    cl << AmountOfCustomer << endl;
    for (int i = 0; i < AmountOfCustomer; i ++) {

        Customer c = List_Customer[i].getData();
        cl << c;

    }

    UpdateSeats();

}
void Manager::EditCustomer(Customer &cus)
{
    int x;
    for (int i = 0; i < AmountOfCustomer; i ++) {

        if (cus == List_Customer[i].getData()) {

            x = i;
            break;

        }  

    }
    cus.edit();
    this->List_Customer[x].setData(cus);
    ofstream outFile("CustomerList.txt");
    if (!outFile.is_open()) {
        cerr << "Error: Unable to open file for writing." << endl;
        return;
    }
    outFile << this->AmountOfCustomer << endl;
    for (int i = 0; i < this->AmountOfCustomer; i++)
    {
        Customer c;
        c = List_Customer[i].getData();
        outFile << c;
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
    outFile << this->AmountOfFilm << endl;
    for (int i = 0; i < this->AmountOfFilm; i++)
    {
        Film temp;
        temp = ListOfFilm[i].getData();
        outFile << temp << endl;
    }
    outFile.close();
    cout << "Xoa phim thanh cong!"<< endl;
    system("pause");
}

void Manager::Revenue() {

    system("cls");
    int sum = 0;
    for (int i = 0; i < List_Customer.getSize(); i ++) {

        Customer cus = List_Customer[i].getData();
        Vector <Trade> t = cus.getTrade();
        for (int j = 0; j < t.getSize(); j ++) {

            Trade tr = t[j].getData();
            int c = tr.getCost();
            sum += c;

        }

    }

    cout << "Tong doanh thu tinh den hien tai la : " << sum << endl;
    system("pause");

}