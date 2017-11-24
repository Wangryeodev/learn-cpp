#include "HocSinh.h"

// Syntax: 
// KieuTraVe TenClass::TenPhuongThuc
void HocSinh::Nhap()
{
	// Xu Li o day
		fflush(stdin);
		cout << "\n Nhap ten hs: ";
		getline(cin, HoTen);
		fflush(stdin);
		cout << "\n Nhap dia chi: ";
		getline(cin, DiaChi);
		cout << "\n Nhap diem toan: ";
		cin >> DiemToan;
		cout << "\n Nhap diem van: ";
		cin >> DiemVan;
}
void HocSinh::Xuat()
{
	cout << "\n Ho ten:" << HoTen;
	cout << "\n Dia chi: " << DiaChi;
	cout << "\n Diem Toan: " << DiemToan;
	cout << "\n Diem Van: " << DiemVan;
	cout << endl;
}
HocSinh::HocSinh(void)
{
}


HocSinh::~HocSinh(void)
{
}
