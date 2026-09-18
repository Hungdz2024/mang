#include <iostream>
using namespace std;

int main() {
    int a[5];
    a[0] = 10; a[1] = 20; a[2] = 30; a[3] = 40; a[4] = 50;

    int b[5] = {1, 2, 3, 4, 5};

    int c[5] = {100, 200};

    cout << "Mang a (gan tung phan tu): ";
    for (int i = 0; i < 5; i++) cout << a[i] << " ";
    cout << "\n";

    cout << "Mang b (khoi tao ngay): ";
    for (int i = 0; i < 5; i++) cout << b[i] << " ";
    cout << "\n";

    cout << "Mang c (khoi tao mot phan): ";
    for (int i = 0; i < 5; i++) cout << c[i] << " ";
    cout << "\n";

    return 0;
}
