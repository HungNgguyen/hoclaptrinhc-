#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << n << " la so CHAN." << endl;
    } else {
        cout << n << " la so LE." << endl;
    }

    double number;
    cout << "Nhap mot so: ";
    cin >> number;

    if (number > 0) {
        cout << "So DUONG" << endl;
    } else if (number < 0) {
        cout << "So AM" << endl;
    } else {
        cout << "So 0" << endl;
    }

    double a, b;
    cout << "Nhap hai so a va b: ";
    cin >> a >> b;

    if (a > b) {
        cout << "So lon nhat la: " << a << endl;
    } else if (b > a) {
        cout << "So lon nhat la: " << b << endl;
    } else {
        cout << "Hai so bang nhau (" << a << " = " << b << ")." << endl;
    }


    
    int diem = 8;

    if (diem >= 8) {
        cout << "Gioi";
    } else if (diem >= 5) {
        cout << "Dat";
    } else {
        cout << "Truot";
    }


float diem = 8.5;
    string xepLoai;

    if (diem >= 8) {
        xepLoai = "Gioi";
    } else if (diem >= 5) {
        xepLoai = "Trung binh";
    } else if (diem >= 0) {
        xepLoai = "Yeu";
    } else {
        xepLoai = "Diem khong hop le";
    }

    cout << "Xep loai: " << xepLoai << endl;


    float diem;
    cout << "Nhap diem thi (0-10): ";
    cin >> diem;

    // Bước 1: Kiem tra hop le
    if (diem < 0 || diem > 10) {
        cout << "Loi: Diem thi phai nam trong doan tu 0 den 10!" << endl;
    } 
    // Bước 2: Loc phan loai khi du lieu da hop le
    else if (diem >= 8) {
        cout << "Xep loai: GIOI" << endl;
    } else if (diem >= 6.5) {
        cout << "Xep loai: KHA" << endl;
    } else if (diem >= 5) {
        cout << "Xep loai: TRUNG BINH" << endl;
    } else {
        cout << "Xep loai: YEU" << endl;
    }

    double km;
    cout << "Nhap so km di chuyen: ";
    cin >> km;

    if (km <= 0) {
        cout << "Loi: So km phai lon hon 0!" << endl;
        return 0;
    }

    // Bang gia dinh muc
    const double GIA_A = 25000;       // Tron goi 2 km dau
    const double GIA_B = 14000;       // Gia moi km tu km 3 den 20
    const double GIA_C = 11000;       // Gia moi km tu km 21 tro di

    double tongTien = 0;

    if (km <= 2) {
      
        tongTien = GIA_A;
    } else if (km <= 20) {
       
        tongTien = GIA_A + (km - 2) * GIA_B;
    } else {
        
        tongTien = GIA_A + (18 * GIA_B) + (km - 20) * GIA_C;
    }

    cout << fixed << setprecision(0);
    cout << "Tong tien cuoc taxi: " << tongTien << " VND" << endl;

int nam;
    cout << "Nhap nam can kiem tra: ";
    cin >> nam;

    if (nam % 4 == 0) {
        if (nam % 100 == 0) {
            if (nam % 400 == 0) {
                cout << nam << " la nam nhuan." << endl;
            } else {
                cout << nam << " KHONG phai nam nhuan." << endl;
            }
        } else {
            cout << nam << " la nam nhuan." << endl;
        }
    } else {
        cout << nam << " KHONG phai nam nhuan." << endl;
    }

float a, b, c;
    cout << "Nhap do dai 3 canh tam giac (a b c): ";
    cin >> a >> b >> c;

    
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        
        if (a == b && b == c) {
            cout << "Day la tam giac DEU." << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Day la tam giac CAN." << endl;
        } else {
            cout << "Day la tam giac THUONG." << endl;
        }
    } else {
        cout << "Loi: Ba canh khong tao thanh tam giac hop le!" << endl;
    }

int tuoi = 20;
    bool coBangLai = true;

    if (tuoi >= 18) {
        if (coBangLai) {
            cout << "Duoc lai xe" << endl;
        } else {
            cout << "Da du tuoi nhung chua co bang lai" << endl;
        }
    } else {
        cout << "Chua du tuoi" << endl;
    }



    double tongChiTieu;
    int soNam;

    cout << "Nhap tong chi tieu (trieu dong): ";
    cin >> tongChiTieu;
    cout << "Nhap so nam la khach hang: ";
    cin >> soNam;

    if (tongChiTieu >= 100 && soNam >= 3) {
        cout << "Hang the: KIM CUONG" << endl;
        if (tongChiTieu >= 200 || soNam >= 5) {
            cout << "-> Uu dai: Tang voucher 5 trieu + Ve VIP phong cho san bay." << endl;
        } else {
            cout << "-> Uu dai: Tang voucher 2 trieu." << endl;
        }
    } else if (tongChiTieu >= 50) {
        cout << "Hang the: VANG" << endl;
        if (soNam >= 2) {
            cout << "-> Uu dai: Giam them 10% cho don hang tiep theo." << endl;
        } else {
            cout << "-> Uu dai: Giam them 5% cho don hang tiep theo." << endl;
        }
    } else {
        cout << "Hang the: BAC" << endl;
        if (tongChiTieu >= 20) {
            cout << "-> Uu dai: Mien phi van chuyen trong 1 nam." << endl;
        } else {
            cout << "-> Uu dai: Tich luy diem thuong co ban." << endl;
        }
    }


    int tuoi;
    char khuVuc; // 'T' hoac 't': Thanh pho | 'N' hoac 'n': Nong thon

    cout << "Nhap do tuoi: ";
    cin >> tuoi;
    cout << "Nhap khu vuc (T - Thanh pho, N - Nong thon): ";
    cin >> khuVuc;

    if (tuoi < 0) {
        cout << "Loi: Tuoi khong hop le!" << endl;
    } else if (khuVuc == 'T' || khuVuc == 't') {
        cout << "Khu vuc: Thanh pho | ";
        if (tuoi < 18) {
            cout << "Muc ho tro: 1.000.000 VND (Tro cap giao duc tre em)" << endl;
        } else if (tuoi <= 60) {
            cout << "Muc ho tro: 500.000 VND (Bao hiem y te lao dong)" << endl;
        } else {
            cout << "Muc ho tro: 1.500.000 VND (Phuc loi nguoi cao tuoi)" << endl;
        }
    } else if (khuVuc == 'N' || khuVuc == 'n') {
        cout << "Khu vuc: Nong thon | ";
        if (tuoi < 18) {
            cout << "Muc ho tro: 1.500.000 VND (Ho tro den truong vung xa)" << endl;
        } else if (tuoi <= 60) {
            cout << "Muc ho tro: 1.000.000 VND (Ho tro phat trien nong nghiep)" << endl;
        } else {
            cout << "Muc ho tro: 2.000.000 VND (Phuc loi y te vung kho khan)" << endl;
        }
    } else {
        cout << "Loi: Ma khu vuc khong hop le (chi nhan 'T' hoac 'N')!" << endl;
    }


    return 0;
}