#include <iostream>
#include "NgayThangNam.h"
using namespace std;
bool lanamnhuan(int nam) {
    return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}
int songaytrongthang(int thang, int nam) {
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
        case 4: case 6: case 9: case 11: return 30;
        case 2: 
        if (lanamnhuan(nam)) return 29;
        return 28; 
        default: return 0;
    }
}
void NgayThangNam :: Nhap() {
    do {
        cout << "Nhap nam: ";
        cin >> iNam;
    } while (iNam <= 0);
    do {
        cout << "Nhap thang (1-12): ";
        cin >> iThang;
    } while (iThang < 1 || iThang > 12);
    do {
        cout << "Nhap ngay: ";
        cin >> iNgay;
    } while (iNgay < 1 || iNgay > songaytrongthang(iThang, iNam));
}
void NgayThangNam :: Xuat() {
    cout << iNgay << "/" << iThang << "/" << iNam;
}
void NgayThangNam :: NgayThangNamTiepTheo() {
    iNgay++;
    if (iNgay > songaytrongthang(iThang, iNam)) {
        iNgay = 1;
        iThang++;
    }
    if (iThang > 12) {
        iNgay = 1;
        iThang =1;
        iNam++;
    }
}
