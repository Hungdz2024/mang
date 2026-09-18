#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Nhap N (dong) va M (cot): ";
    cin >> n >> m;

    int a[100][100];
    long long tong = 0;

    cout << "Nhap cac phan tu ma tran:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            tong += a[i][j];
        }
    }

    cout << "Tong tat ca cac phan tu trong ma tran: " << tong << "\n";
    return 0;
}
