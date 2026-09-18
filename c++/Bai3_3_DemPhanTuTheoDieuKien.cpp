#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;

    int a[1000];
    int countChan = 0, countLe = 0;
    int countDuong = 0, countAm = 0;

    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] % 2 == 0) countChan++;
        else countLe++;

        if (a[i] > 0) countDuong++;
        else if (a[i] < 0) countAm++;
    }

    cout << "So luong so chan: " << countChan << "\n";
    cout << "So luong so le: " << countLe << "\n";
    cout << "So luong so duong: " << countDuong << "\n";
    cout << "So luong so am: " << countAm << "\n";

    return 0;
}
