#include <iostream>
#include <iomanip>
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
            if (a[j] < a[minIdx]) minIdx = j;
        }
        int temp = a[i];
        a[i] = a[minIdx];
        a[minIdx] = temp;
    }

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";

    double median;
    if (n % 2 != 0) {
        median = a[n / 2];
    } else {
        median = (a[n / 2 - 1] + a[n / 2]) / 2.0;
    }

    cout << fixed << setprecision(2);
    cout << "Gia tri trung vi (median): " << median << "\n";

    return 0;
}
