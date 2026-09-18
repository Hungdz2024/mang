#include <iostream>
using namespace std;

int main() {
    int a[5] = {8, 3, 5, 1, 9};
    int n = 5;

    cout << "Mang ban dau: 8 3 5 1 9\n\n";

    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIdx]) minIdx = j;
        }

        cout << "Luot " << i + 1 << ": min la " << a[minIdx] << " tai index " << minIdx 
             << " -> Hoan doi voi a[" << i << "] (" << a[i] << ")\n";

        int temp = a[i];
        a[i] = a[minIdx];
        a[minIdx] = temp;

        cout << "   Trang thai mang: ";
        for (int k = 0; k < n; k++) cout << a[k] << " ";
        cout << "\n\n";
    }

    return 0;
}
