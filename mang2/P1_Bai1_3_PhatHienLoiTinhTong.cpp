#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int tong = 0;
    for (int i = 0; i < 5; i++) {
        tong += a[i];
    }
    cout << tong << "\n";
    return 0;
}
