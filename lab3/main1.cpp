#include <iostream>
#include "cDiem.cpp"
#include "cTamGiac.cpp"
using namespace std;
int main() {
    cTamGiac tg;
    double dx, dy, goc, k;
    cout << "Nhap tam giac:\n";
    tg.Nhap();
    cout << "\nTam giac vua nhap: ";
    tg.Xuat();
    cout << "\nLoai tam giac: ";
    tg.KiemTraLoai();
    if (tg.KiemTraTamGiac()) {
        cout << "\nChu vi: " << tg.TinhChuVi();
        cout << "\nDien tich: " << tg.TinhDienTich();
        cout << "\n\nNhap dx, dy de tinh tien: ";
        cin >> dx >> dy;
        tg.TinhTien(dx, dy);
        cout << "Tam giac sau khi tinh tien: ";
        tg.Xuat();
        cout << "\n\nNhap goc quay: ";
        cin >> goc;
        tg.Quay(goc);
        cout << "Tam giac sau khi quay: ";
        tg.Xuat();
        cout << "\n\nNhap he so phong to: ";
        cin >> k;
        tg.PhongTo(k);
        cout << "Tam giac sau khi phong to: ";
        tg.Xuat();
        cout << "\n\nNhap he so thu nho: ";
        cin >> k;
        tg.ThuNho(k);
        cout << "Tam giac sau khi thu nho: ";
        tg.Xuat();
    }
    return 0;
}