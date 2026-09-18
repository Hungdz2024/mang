#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap kich thuoc ma tran vuong N: ";
    cin >> n;

    int a[100][100];
    cout << "Nhap cac phan tu cua ma tran vuong:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    long long tongCheo = 0;
    for (int i = 0; i < n; i++) {
        tongCheo += a[i][i];
    }

    cout << "Tong cac phan tu tren duong cheo chinh: " << tongCheo << "\n";
    return 0;
}
