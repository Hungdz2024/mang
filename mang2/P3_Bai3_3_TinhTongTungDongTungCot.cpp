#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Nhap N (dong) va M (cot): ";
    cin >> n >> m;

    int a[100][100];
    cout << "Nhap cac phan tu ma tran:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\n--- TONG TUNG DONG ---\n";
    for (int i = 0; i < n; i++) {
        long long tongDong = 0;
        for (int j = 0; j < m; j++) {
            tongDong += a[i][j];
        }
        cout << "Dong " << i << ": " << tongDong << "\n";
    }

    cout << "\n--- TONG TUNG COT ---\n";
    for (int j = 0; j < m; j++) {
        long long tongCot = 0;
        for (int i = 0; i < n; i++) {
            tongCot += a[i][j];
        }
        cout << "Cot " << j << ": " << tongCot << "\n";
    }

    return 0;
}
