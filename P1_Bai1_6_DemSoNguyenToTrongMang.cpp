#include <iostream>
using namespace std;

bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;

    int a[1000];
    cout << "Nhap " << n << " phan tu:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(a[i])) {
            dem++;
        }
    }

    cout << "So luong so nguyen to trong mang: " << dem << "\n";
    return 0;
}
