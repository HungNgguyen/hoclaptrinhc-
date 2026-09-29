#include <iostream>
using namespace std;

int main() {
    // Khai báo mảng ký tự gồm 5 phần tử và khởi tạo giá trị ban đầu
    char arStuGrade[5] = {'A', 'B', 'C', 'D', 'F'};

    // Dùng vòng lặp for duyệt từ chỉ số 0 đến 4
    for (int i = 0; i < 5; i++) {
        cout << arStuGrade[i] << endl;
    }
    return 0;
}