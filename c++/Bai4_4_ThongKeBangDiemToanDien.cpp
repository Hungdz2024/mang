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
    double sum = 0;

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "\nNhap ten sinh vien " << i + 1 << ": ";
        getline(cin, names[i]);
        cout << "Nhap diem: ";
        cin >> scores[i];
        sum += scores[i];
    }

    double maxScore = scores[0];
    double minScore = scores[0];
    int countGioi = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] > maxScore) maxScore = scores[i];
        if (scores[i] < minScore) minScore = scores[i];
        if (scores[i] >= 8.0) countGioi++;
    }

    cout << "\n=========== THONG KE BANG DIEM TOAN DIEN ===========\n";
    cout << fixed << setprecision(2);
    cout << "- Diem cao nhat: " << maxScore << "\n";
    cout << "- Diem thap nhat: " << minScore << "\n";
    cout << "- Diem trung binh ca lop: " << sum / n << "\n";
    cout << "- So sinh vien dat loai Gioi (>= 8.0): " << countGioi << "\n";

    if (countGioi > 0) {
        cout << "- Danh sach sinh vien dat loai Gioi:\n";
        for (int i = 0; i < n; i++) {
            if (scores[i] >= 8.0) {
                cout << "  + " << names[i] << " (" << scores[i] << " diem)\n";
            }
        }
    } else {
        cout << "- Khong co sinh vien nao dat loai Gioi.\n";
    }

    return 0;
}
