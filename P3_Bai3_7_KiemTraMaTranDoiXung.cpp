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

    bool doiXung = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                doiXung = false;
                break;
            }
        }
        if (!doiXung) break;
    }

    if (doiXung) {
        cout << "Ma tran doi xung qua duong cheo chinh.\n";
    } else {
        cout << "Ma tran KHONG doi xung qua duong cheo chinh.\n";
    }

    return 0;
}
