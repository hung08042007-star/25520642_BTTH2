#ifndef CDIEM_H
#define CDIEM_H
class cDiem {
private:
    double x, y;
public:
    cDiem();
    cDiem(double x, double y);
    void Nhap();
    void Xuat();
    double GetX();
    double GetY();
    void SetX(double x);
    void SetY(double y);
    double TinhKhoangCach(cDiem d);
    void TinhTien(double dx, double dy);
    void Quay(double goc);
    void PhongTo(double k);
    void ThuNho(double k);
};
#endif