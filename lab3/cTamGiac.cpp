#include <iostream>
#include <cmath>
#include "cTamGiac.h"
using namespace std;
void cTamGiac::Nhap() {
    cout << "Nhap diem A:\n";
    A.Nhap();
    cout << "Nhap diem B:\n";
    B.Nhap();
    cout << "Nhap diem C:\n";
    C.Nhap();
}
void cTamGiac::Xuat() {
    cout << "A";
    A.Xuat();
    cout << ", B";
    B.Xuat();
    cout << ", C";
    C.Xuat();
}
bool cTamGiac::KiemTraTamGiac() {
    double a = B.TinhKhoangCach(C);
    double b = A.TinhKhoangCach(C);
    double c = A.TinhKhoangCach(B);
    return a + b > c && a + c > b && b + c > a;
}
double cTamGiac::TinhChuVi() {
    double a = B.TinhKhoangCach(C);
    double b = A.TinhKhoangCach(C);
    double c = A.TinhKhoangCach(B);
    return a + b + c;
}
double cTamGiac::TinhDienTich() {
    double a = B.TinhKhoangCach(C);
    double b = A.TinhKhoangCach(C);
    double c = A.TinhKhoangCach(B);
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
void cTamGiac::KiemTraLoai() {
    double a = B.TinhKhoangCach(C);
    double b = A.TinhKhoangCach(C);
    double c = A.TinhKhoangCach(B);
    double eps = 1e-9;
    if (!KiemTraTamGiac()) {
        cout << "Khong phai tam giac";
        return;
    }
    bool deu = fabs(a - b) < eps && fabs(b - c) < eps;
    bool can = fabs(a - b) < eps || fabs(a - c) < eps || fabs(b - c) < eps;
    bool vuong = fabs(a * a + b * b - c * c) < eps ||
                 fabs(a * a + c * c - b * b) < eps ||
                 fabs(b * b + c * c - a * a) < eps;
    if (deu)
        cout << "Tam giac deu";
    else if (vuong && can)
        cout << "Tam giac vuong can";
    else if (vuong)
        cout << "Tam giac vuong";
    else if (can)
        cout << "Tam giac can";
    else
        cout << "Tam giac thuong";
}
void cTamGiac::TinhTien(double dx, double dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}
void cTamGiac::Quay(double goc) {
    A.Quay(goc);
    B.Quay(goc);
    C.Quay(goc);
}
void cTamGiac::PhongTo(double k) {
    A.PhongTo(k);
    B.PhongTo(k);
    C.PhongTo(k);
}
void cTamGiac::ThuNho(double k) {
    A.ThuNho(k);
    B.ThuNho(k);
    C.ThuNho(k);
}