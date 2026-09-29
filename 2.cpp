#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float a, b;
    cin >> a >> b;

    // In các phép tính cơ bản với dạng số nguyên
    cout << (int)a << " + " << (int)b << " = " << (int)(a + b) << endl;
    cout << (int)a << " - " << (int)b << " = " << (int)(a - b) << endl;
    cout << (int)a << " * " << (int)b << " = " << (int)(a * b) << endl;

    // Tính phép chia và làm tròn lên 2 chữ số thập phân
    float div_res = ceil((a / b) * 100.0) / 100.0;

    // Định dạng in đúng 2 chữ số thập phân theo kiểu trong slide
    cout << setiosflags(ios::fixed)
         << setiosflags(ios::showpoint)
         << setprecision(2);

    cout << (int)a << " / " << (int)b << " = " << div_res << endl;

    return 0;
}