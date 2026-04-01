#include <iostream>
#include "GioPhutGiay.h"
#include "GioPhutGiay.cpp"
using namespace std;
int main() {
    GioPhutGiay a;
    cout << "Nhap gio phut giay: \n";
    a.Nhap();
    cout << "\n Gio phut giay hien tai la: ";
    a.Xuat();
    a.TinhCongThemMotGiay();
    cout << "\n Gio phut giay tiep theo la: ";
    a.Xuat();
    return 0;
}