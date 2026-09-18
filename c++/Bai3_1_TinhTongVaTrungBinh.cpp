#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;

    int a[1000];
    long long sum = 0;

    cout << "Nhap " << n << " so nguyen:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    double avg = (double)sum / n;

    cout << "Tong cac phan tu: " << sum << "\n";
    cout << "Gia tri trung binh: " << fixed << setprecision(2) << avg << "\n";

    return 0;
}
