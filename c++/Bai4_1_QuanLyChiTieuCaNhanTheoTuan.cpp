#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string days[7] = {"Thu 2", "Thu 3", "Thu 4", "Thu 5", "Thu 6", "Thu 7", "Chu Nhat"};
    double expenses[7];
    double total = 0;

    cout << "Nhap so tien chi tieu cua 7 ngay trong tuan:\n";
    for (int i = 0; i < 7; i++) {
        cout << days[i] << ": ";
        cin >> expenses[i];
        total += expenses[i];
    }

    int maxIdx = 0, minIdx = 0;
    for (int i = 1; i < 7; i++) {
        if (expenses[i] > expenses[maxIdx]) maxIdx = i;
        if (expenses[i] < expenses[minIdx]) minIdx = i;
    }

    cout << "\n===== QUAN LY CHI TIEU CA NHAN =====\n";
    cout << fixed << setprecision(2);
    cout << "Tong chi tieu ca tuan: " << total << " VND\n";
    cout << "Chi tieu trung binh moi ngay: " << total / 7.0 << " VND\n";
    cout << "Ngay chi tieu nhieu nhat: " << days[maxIdx] << " (" << expenses[maxIdx] << " VND)\n";
    cout << "Ngay chi tieu it nhat: " << days[minIdx] << " (" << expenses[minIdx] << " VND)\n";

    return 0;
}
