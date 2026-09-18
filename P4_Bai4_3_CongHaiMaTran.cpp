#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Nhap so dong N va so cot M: ";
    cin >> n >> m;

    int A[100][100], B[100][100], C[100][100];

    cout << "Nhap ma tran A:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Nhap ma tran B:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Ma tran tong C = A + B:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
