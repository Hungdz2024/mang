#include <iostream>
using namespace std;
int main() {
    const int SO_NGAY = 7;
    double doanhThu[SO_NGAY];
    cout << "--- NHAP DOANH THU (VND) ---" << endl;
    for (int i = 0; i < SO_NGAY; i++) {
        cout << "Ngay " << (i + 1) << ": ";
        cin >> doanhThu[i];
    }
    double tongDoanhThu = 0.0;
    int soNgayDatHang = 0;

    for (int i = 0; i < SO_NGAY; i++) {
        tongDoanhThu = tongDoanhThu + doanhThu[i];

        if (doanhThu[i] >= 500000.0) {
            soNgayDatHang++;
        }
    }
    double doanhThuTrungBinh = tongDoanhThu / SO_NGAY;
    cout << "\n--- BAO CAO DOANH THU TUAN ---" << endl;
    cout << "Tong doanh thu: " << tongDoanhThu << " VND" << endl;
    cout << "Doanh thu trung binh moi ngay: " << doanhThuTrungBinh << " VND" << endl;
    cout << "So ngay dat hang (>= 500.000 VND): " << soNgayDatHang << endl;
    return 0;
}