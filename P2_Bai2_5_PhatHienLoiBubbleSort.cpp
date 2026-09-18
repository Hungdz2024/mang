#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[5] = {5, 1, 4, 2, 8};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
