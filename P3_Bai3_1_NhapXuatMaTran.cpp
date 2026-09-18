#include <iostream>
using namespace std;

int main() {
    int dong, cot;
    cout << "Nhap so dong va so cot: ";
    cin >> dong >> cot;

    int a[100][100];
    cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Ma tran vua nhap:\n";
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
