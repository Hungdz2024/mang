#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Nhap so luong phan tu N (1 - 100): ";
        cin >> n;
        if (n < 1 || n > 100) {
            cout << "So luong N khong hop le! Vui long nhap lai.\n";
        }
    } while (n < 1 || n > 100);

    int a[100];
    cout << "Nhap " << n << " phan tu:\n";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Mang vua nhap: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
