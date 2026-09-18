#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double doanhThu[7];
    double tong = 0.0;

    cout << "Nhap doanh thu 7 ngay trong tuan:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Ngay " << i + 1 << ": ";
        cin >> doanhThu[i];
        tong += doanhThu[i];
    }

    double trungBinh = tong / 7.0;

    int soNgayVuotTB = 0;
    int ngayMaxIdx = 0;

    for (int i = 0; i < 7; i++) {
        if (doanhThu[i] > trungBinh) {
            soNgayVuotTB++;
        }
        if (doanhThu[i] > doanhThu[ngayMaxIdx]) {
            ngayMaxIdx = i;
        }
    }

    cout << fixed << setprecision(2);
    cout << "\nTong doanh thu: " << tong << "\n";
    cout << "Doanh thu trung binh: " << trungBinh << "\n";
    cout << "So ngay vuot muc trung binh: " << soNgayVuotTB << "\n";
    cout << "Ngay co doanh thu cao nhat: Ngay " << ngayMaxIdx + 1 << " (" << doanhThu[ngayMaxIdx] << ")\n";

    return 0;
}
