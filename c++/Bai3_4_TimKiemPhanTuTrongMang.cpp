#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Nhap N: ";
    cin >> n;

    int a[1000];
    cout << "Nhap " << n << " phan tu:\n";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Nhap gia tri X can tim: ";
    cin >> x;

    int firstIdx = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            firstIdx = i;
            break;
        }
    }

    if (firstIdx != -1) {
        cout << "Gia tri " << x << " xuat hien dau tien tai chi so: " << firstIdx << "\n";
    } else {
        cout << "Khong tim thay " << x << " trong mang.\n";
    }

    return 0;
}
