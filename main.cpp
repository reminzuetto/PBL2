#include <bits/stdc++.h>
#include "Manager.h"

using namespace std;

void MainMenu() {

    int Select;    
    while (true) {
		system("cls");
		cout << "\n\n\t\t ====== QUAN LY DAT VE XEM PHIM ======";
		cout << "\n\n\t1. Dang Nhap Voi Vai Tro Quan Ly ";	
		cout << "\n\n\t2. Dang Nhap Voi Vai Tro Khach Hang";
		cout << "\n\n\t0. Ket thuc";
		cout << "\n\n\t\t ================= END ===============";	
		cout << "\n\n\tMoi ban nhap lua chon: ";
		cin >> Select;
        if(Select ==1) {

            int SelectMng;
            while (true) {


                system("cls");
                cout << "\n\n\t\t ====== Chuc Nang Cua Quan Ly ======";
                cout << "\n\n\t1. Them Phim";	
                cout << "\n\n\t2. Xoa Phim";	
                cout << "\n\n\t3. Chinh Sua Phim";	
		        cout << "\n\n\t4. Hien Thi Danh Sach Phim Hien Tai";
                cout << "\n\n\t5. Kiem Tra Doanh Thu  ";
                cout << "\n\n\t6. Danh Sach Khach Hang Da Mua Ve";
                cout << "\n\n\t0. Ket Thuc";
                cout << "\n\n\t\t ================= END ===============";	
		        cout << "\n\n\tMoi ban nhap lua chon: ";
                cin >> SelectMng;
                if (SelectMng == 0) break;

            }
            
        } 

        else if(Select==2) {

            int SelectCsm;
            while (true) {

                system("cls");
                cout << "\n\n\t\t ====== Chuc Nang Cua Khach Hang ======";
                cout << "\n\n\t1. Mua Ve";
                cout << "\n\n\t0. Kiem Tra Ve Da Dat";
                cout << "\n\n\t\t ================= END ===============";	
		        cout << "\n\n\tMoi ban nhap lua chon: ";
                cin >> SelectCsm;
                if (SelectCsm == 0) break;
            }
            
        }
        else {

            system("cls");
            break;

        }
		
		
	}
}

int main() {

    Manager m;
    m.UpdateData();
    MainMenu();
}