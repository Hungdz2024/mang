#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    string names[100];
    double scores[100];

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Nhap ho ten sinh vien " << i + 1 << ": ";
        getline(cin, names[i]);
        cout << "Nhap diem: ";
        cin >> scores[i];
    }

    cout << "\n===== BANG DANH SACH SINH VIEN =====\n";
    cout << left << setw(5) << "STT" << setw(30) << "Ho va Ten" << "Diem\n";
    cout << "-------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << left << setw(5) << i + 1 
             << setw(30) << names[i] 
             << fixed << setprecision(2) << scores[i] << "\n";
    }

    return 0;
}
