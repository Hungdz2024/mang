#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;

    int a[1000];
    cout << "Nhap " << n << " so nguyen:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIdx]) {
                minIdx = j;
            }
        }
        int temp = a[i];
        a[i] = a[minIdx];
        a[minIdx] = temp;
    }

    cout << "Mang sau khi sap xep tang dan (Selection Sort): ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
