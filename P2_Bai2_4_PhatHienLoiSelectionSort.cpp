#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[5] = {5, 2, 4, 1, 3};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIdx]) minIdx = j;
        }
        swap(a[i], a[minIdx]);
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
