#include <iostream>
using namespace std;

int main() {
    int a[5] = {-3, -7, -1, -9, -2};
    int max = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > max) max = a[i];
    }
    cout << max << "\n";
    return 0;
}
