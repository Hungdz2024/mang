#include <iostream>
using namespace std;
int main() {
    const int SO_SV = 5;
    int diem[SO_SV];
    diem[0] = 8;
    cout << "Diem cua sinh vien thu 1 (vua gan truc tiep): " << diem[0] << endl;
    cout << "\nNhap diem cho " << SO_SV << " sinh vien:" << endl;
    for (int i = 0; i < SO_SV; i++) {
        cout << "Diem sinh vien thu " << (i + 1) << ": ";
        cin >> diem[i];
    }
    cout << "\n----- BANG DIEM -----" << endl;
    for (int i = 0; i < SO_SV; i++) {
        cout << "Sinh vien " << (i + 1) << ": " << diem[i] << " diem" << endl;
    }
    double diemCanTim = 10;
    bool timThay = false;
    for (int i = 0; i < SO_SV; i++) {
        if (diem[i] == diemCanTim) {
            cout << "\nTim thay sinh vien dat diem " << diemCanTim << " o vi tri thu " << (i + 1) << endl;
            timThay = true;
            break;
        }
    }
    if (!timThay) {
        cout << "\nKhong co sinh vien nao dat diem " << diemCanTim << endl;
    }
    return 0;
}