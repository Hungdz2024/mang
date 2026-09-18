#include <iostream>
using namespace std;

int main() {
    int a[5];

    cout << "Nhap 5 phan tu cho mang:\n";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    cout << "Cac phan tu trong mang hop le la: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
