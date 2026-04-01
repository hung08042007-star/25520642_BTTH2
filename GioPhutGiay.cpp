#include <iostream>
#include "GioPhutGiay.h"
using namespace std;
void GioPhutGiay :: Nhap() {
    do {
        cout << "Nhap gio (0-23): " << endl;
        cin >> iGio;
    } while (iGio < 0 && iGio > 23);
    do {
        cout << "Nhap phut (0-59): " << endl;
        cin >> iPhut;
    } while (iPhut < 0 && iPhut > 59);
    do {
        cout << "Nhap giay (0-59): " << endl;
        cin >> iGiay;
    } while (iGiay < 0 && iGiay > 59);
}
void GioPhutGiay :: Xuat() {
    cout << iGio << ":" << iPhut << ":" << iGiay;
}
void GioPhutGiay :: TinhCongThemMotGiay() {
    iGiay++;
    if (iGiay == 60) {
        iGiay = 0;
        iPhut++;
        if (iPhut == 60) {
            iPhut = 0;
            iGio++;
            if (iGio == 24) {
                iGio = 0;
            }
        }
    }
}
