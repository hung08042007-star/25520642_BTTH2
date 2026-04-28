#include <iostream>
#include <cmath>
#include "cDiem.h"
using namespace std;
cDiem::cDiem() {
    x = 0;
    y = 0;
}
cDiem::cDiem(double x, double y) {
    this->x = x;
    this->y = y;
}
void cDiem::Nhap() {
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
}
void cDiem::Xuat() {
    cout << "(" << x << ", " << y << ")";
}
double cDiem::GetX() {
    return x;
}
double cDiem::GetY() {
    return y;
}
void cDiem::SetX(double x) {
    this->x = x;
}
void cDiem::SetY(double y) {
    this->y = y;
}
double cDiem::TinhKhoangCach(cDiem d) {
    return sqrt((x - d.x) * (x - d.x) + (y - d.y) * (y - d.y));
}
void cDiem::TinhTien(double dx, double dy) {
    x += dx;
    y += dy;
}
void cDiem::Quay(double goc) {
    double rad = goc * M_PI / 180;
    double xMoi = x * cos(rad) - y * sin(rad);
    double yMoi = x * sin(rad) + y * cos(rad);
    x = xMoi;
    y = yMoi;
}
void cDiem::PhongTo(double k) {
    x *= k;
    y *= k;
}
void cDiem::ThuNho(double k) {
    if (k != 0) {
        x /= k;
        y /= k;
    }
}