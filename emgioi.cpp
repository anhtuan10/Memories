#include<iostream>
using namespace std;
int main(){
    float diemtoan, diemly, diemhoa;
    cout << "Nhap diem Toan: \n";
    cin >> diemtoan;
    cout << "Nhap diem Ly: \n";
    cin >> diemly;
    cout << "Nhap diem Hoa: \n";
    cin >> diemhoa;
    float diemtbc = (diemtoan + diemly + diemhoa) /3;
    cout << "Trung binh cong diem 3 mon: " << diemtbc << endl;

    float a, b;
    cout << "Giai chuong trinh bac nhat: ax + b = 0 :" << endl;
    cout << "Nhap a: \n";
    cin >> a;
    cout << "Nhap b: \n";
    cin >> b;
    float t = -b/a;
    cout << "Nghiem cua phuong trinh bac nhat la: x = " << t << endl;
    return 0;
}