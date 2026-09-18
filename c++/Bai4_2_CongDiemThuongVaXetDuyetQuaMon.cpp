#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    double diem[1000];
    cout << "Nhap diem thi cua " << n << " sinh vien:\n";
    for (int i = 0; i < n; i++) {
        cin >> diem[i];
    }

    for (int i = 0; i < n; i++) {
        if (diem[i] >= 4.0 && diem[i] < 5.0) {
            diem[i] += 0.5;
        }
    }

    cout << "\n===== DANH SACH KET QUA XET DUYET QUA MON =====\n";
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++) {
        cout << "Sinh vien " << i + 1 << ": " << diem[i] << " diem -> ";
        if (diem[i] >= 5.0) {
            cout << "DAT\n";
        } else {
            cout << "KHONG DAT\n";
        }
    }

    return 0;
}
