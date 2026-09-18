#include <iostream>
using namespace std;

int main() {
    int arr[6] = {12, 45, 78, 23, 56, 89};
    int n = 6;

    int first = arr[0];
    int last = arr[n - 1];
    int mid = arr[n / 2];

    cout << "Phan tu dau tien (chi so 0): " << first << "\n";
    cout << "Phan tu cuoi cung (chi so " << n - 1 << "): " << last << "\n";
    cout << "Phan tu o vi tri giua mang (chi so " << n / 2 << "): " << mid << "\n";

    return 0;
}
