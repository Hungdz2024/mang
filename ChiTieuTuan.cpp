#include <iostream>
using namespace std;
int main() {
    const int SO_NGAY = 7;
    double chiTieu[SO_NGAY];
    string tenNgay[SO_NGAY] = {"Thu 2", "Thu 3", "Thu 4", "Thu 5", "Thu 6", "Thu 7", "Chu nhat"};
    cout << "Nhap chi tieu cho tung ngay trong tuan:" << endl;
    for (int i = 0; i < SO_NGAY; i++) {
        cout << tenNgay[i] << ": ";
        cin >> chiTieu[i];
    }
    double tongTuan = 0;
    for (int i = 0; i < SO_NGAY; i++) {
        tongTuan += chiTieu[i];
    }
    double trungBinh = tongTuan / SO_NGAY;
    int viTriMax = 0, viTriMin = 0;
    for (int i = 1; i < SO_NGAY; i++) {
        if (chiTieu[i] > chiTieu[viTriMax]) viTriMax = i;
        if (chiTieu[i] < chiTieu[viTriMin]) viTriMin = i;
    }
    cout << "\n----- BAO CAO CHI TIEU TUAN -----" << endl;
    cout << "Tong chi tieu ca tuan: " << tongTuan << endl;
    cout << "Trung binh moi ngay: " << trungBinh << endl;
    cout << "Ngay chi tieu NHIEU NHAT: " << tenNgay[viTriMax] << " (" << chiTieu[viTriMax] << ")" << endl;
    cout << "Ngay chi tieu IT NHAT: " << tenNgay[viTriMin] << " (" << chiTieu[viTriMin] << ")" << endl;
    return 0;
}