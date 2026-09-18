#include <iostream>
using namespace std;
int main() {
    const int SO_SV = 5;
    double diem[SO_SV];
    const double DIEM_THUONG = 0.5;
    const double DIEM_DAU = 5.0;
    cout << "Nhap diem cho " << SO_SV << " sinh vien:" << endl;
    for (int i = 0; i < SO_SV; i++) {
        cout << "Sinh vien " << (i + 1) << ": ";
        cin >> diem[i];
    }
    cout << "\n----- SAU KHI CONG " << DIEM_THUONG << " DIEM THUONG -----" << endl;
    for (int i = 0; i < SO_SV; i++) {
        diem[i] = diem[i] + DIEM_THUONG;
        if (diem[i] > 10) diem[i] = 10;
        cout << "Sinh vien " << (i + 1) << ": " << diem[i] << endl;
    }
    int soDau = 0;
    cout << "\n----- KET QUA XET DUYET -----" << endl;
    for (int i = 0; i < SO_SV; i++) {
        if (diem[i] >= DIEM_DAU) {
            cout << "Sinh vien " << (i + 1) << ": DAU" << endl;
            soDau++;
        } else {
            cout << "Sinh vien " << (i + 1) << ": ROT" << endl;
        }
    }
    cout << "\nTong so sinh vien dau mon: " << soDau << "/" << SO_SV << endl;
    return 0;
}