#include <iostream>
using namespace std;

int main() {
    float diem;
    cout << "Nhap diem thi (0-10): ";
    cin >> diem;
    if (diem < 0 || diem > 10) {
        cout << "Loi: Diem khong hop le! Vui long nhap tu 0 den 10." << endl;
    }
    else if (diem >= 8) {
        cout << "Xep loai: GIOI" << endl;
    } else if (diem >= 6.5) {
        cout << "Xep loai: KHA" << endl;
    } else if (diem >= 5) {
        cout << "Xep loai: TRUNG BINH" << endl;
    } else {
        cout << "Xep loai: YEU/KEM" << endl;
    }

    return 0;
}