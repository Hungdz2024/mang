#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cout << "Nhap kich thuoc N, M cua ma tran A (NxM): ";
    cin >> n >> m;

    cout << "Nhap so cot K cua ma tran B (MxK): ";
    cin >> k;

    int A[100][100], B[100][100], C[100][100];

    cout << "Nhap cac phan tu ma tran A (" << n << "x" << m << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Nhap cac phan tu ma tran B (" << m << "x" << k << "):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            C[i][j] = 0;
            for (int l = 0; l < m; l++) {
                C[i][j] += A[i][l] * B[l][j];
            }
        }
    }

    cout << "Ma tran tich C = A x B (" << n << "x" << k << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
