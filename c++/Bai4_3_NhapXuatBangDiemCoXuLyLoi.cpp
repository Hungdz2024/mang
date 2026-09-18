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
        cout << "\nNhap ho ten sinh vien " << i + 1 << ": ";
        getline(cin, names[i]);

        do {
            cout << "Nhap diem (0 - 10): ";
            cin >> scores[i];
            if (scores[i] < 0 || scores[i] > 10) {
                cout << "Diem khong hop le! Vui long nhap lai (0 - 10).\n";
            }
        } while (scores[i] < 0 || scores[i] > 10);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (scores[j] < scores[j + 1]) {
                double tempScore = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = tempScore;

                string tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;
            }
        }
    }

    cout << "\n================= BANG XEP LOAI SINH VIEN =================\n";
    cout << left << setw(5) << "STT" 
         << setw(25) << "Ho Ten" 
         << setw(10) << "Diem" 
         << "Xep loai\n";
    cout << "----------------------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        string loai = "";
        if (scores[i] >= 8.0) loai = "Gioi";
        else if (scores[i] >= 6.5) loai = "Kha";
        else if (scores[i] >= 5.0) loai = "Trung binh";
        else loai = "Yeu";

        cout << left << setw(5) << i + 1 
             << setw(25) << names[i] 
             << fixed << setprecision(2) << setw(10) << scores[i] 
             << loai << "\n";
    }

    return 0;
}
