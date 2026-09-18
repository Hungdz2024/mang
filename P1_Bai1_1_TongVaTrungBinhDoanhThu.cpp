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

    cout << fixed << setprecision(2);
    cout << "\nTong doanh thu: " << tong << "\n";
    cout << "Trung binh doanh thu: " << trungBinh << "\n";

    return 0;
}
