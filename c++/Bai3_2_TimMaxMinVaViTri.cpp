#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;

    int a[1000];
    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++) cin >> a[i];

    int maxVal = a[0], maxIdx = 0;
    int minVal = a[0], minIdx = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
            maxIdx = i;
        }
        if (a[i] < minVal) {
            minVal = a[i];
            minIdx = i;
        }
    }

    cout << "Gia tri lon nhat: " << maxVal << " (tai chi so " << maxIdx << ")\n";
    cout << "Gia tri nho nhat: " << minVal << " (tai chi so " << minIdx << ")\n";

    return 0;
}
