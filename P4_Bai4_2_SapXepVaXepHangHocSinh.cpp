#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong hoc sinh: ";
    cin >> n;

    double diem[1000];
    cout << "Nhap diem cua " << n << " hoc sinh:\n";
    for (int i = 0; i < n; i++) {
        cin >> diem[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (diem[j] > diem[maxIdx]) {
                maxIdx = j;
            }
        }
        double temp = diem[i];
        diem[i] = diem[maxIdx];
        diem[maxIdx] = temp;
    }

    cout << "\n===== BANG XEP HANG HOC SINH =====\n";
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++) {
        cout << "Hang " << i + 1 << ": " << diem[i] << " diem\n";
    }

    return 0;
}
