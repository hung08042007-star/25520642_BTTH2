#ifndef CTAMGIAC_H
#define CTAMGIAC_H
#include "cDiem.h"
class cTamGiac {
private:
    cDiem A, B, C;
public:
    void Nhap();
    void Xuat();
    bool KiemTraTamGiac();
    double TinhChuVi();
    double TinhDienTich();
    void KiemTraLoai();
    void TinhTien(double dx, double dy);
    void Quay(double goc);
    void PhongTo(double k);
    void ThuNho(double k);
};
#endif