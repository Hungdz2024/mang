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

    int maxVal = a[0][0];
    int maxDong = 0, maxCot = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > maxVal) {
                maxVal = a[i][j];
                maxDong = i;
                maxCot = j;
            }
        }
    }

    cout << "Gia tri lon nhat: " << maxVal << "\n";
    cout << "Vi tri xuat hien: dong " << maxDong << ", cot " << maxCot << "\n";

    return 0;
}
