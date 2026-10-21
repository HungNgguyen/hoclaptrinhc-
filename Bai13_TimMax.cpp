#include <iostream>
using namespace std;
int main() {
    // Giai doan 1: Nhap du lieu
    int a, b;
    cout << "Nhap so thu nhat (a): ";
    cin >> a;
    cout << "Nhap so thu hai (b): ";
    cin >> b;
    int max = (a > b) ? a : b;
    cout << "So lon hon (Max) la: " << max << endl;
    return 0;
}