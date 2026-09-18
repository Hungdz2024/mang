#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;

    int a[1000];
    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++) cin >> a[i];

    int left = 0, right = n - 1;
    while (left < right) {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        left++;
        right--;
    }

    cout << "Mang sau khi dao nguoc: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
