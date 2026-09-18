#include <iostream>
using namespace std;

int main() {
    double diem[5] = {7.5, 6.0, 8.0, 9.0, 5.5};

    cout << "Mang diem ban dau: ";
    for (int i = 0; i < 5; i++) cout << diem[i] << " ";
    cout << "\n";

    diem[2] += 1.0;

    cout << "Mang diem sau khi cong 1 diem cho sinh vien thu 3: ";
    for (int i = 0; i < 5; i++) cout << diem[i] << " ";
    cout << "\n";

    return 0;
}
