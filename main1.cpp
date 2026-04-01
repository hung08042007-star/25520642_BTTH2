#include <iostream>
#include "NgayThangNam.h"
#include "NgayThangNam.cpp"
using namespace std;
int main() {
    NgayThangNam a;
    cout << "Nhap ngay thang nam: " << endl;
    a.Nhap();
    cout << "\nNgay thang nam vua nhap la: " << endl;
    a.Xuat();
    a.NgayThangNamTiepTheo();
    cout << "\nNgay thang nam tiep theo la: " << endl;
    a.Xuat();
    return 0;
}