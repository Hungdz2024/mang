#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu N: ";
    cin >> n;

    int a[1000];
    cout << "Nhap " << n << " so nguyen:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Toan bo mang vua nhap: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
