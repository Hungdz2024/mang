#include <iostream>
using namespace std;

int main() {
    int a[4] = {1, 2, 3, 4};
    int tong = 0;
    for (int i = 0; i < 4; i++) tong += a[i];
    float tb = (float)tong / 4;
    cout << tb << "\n";
    return 0;
}
