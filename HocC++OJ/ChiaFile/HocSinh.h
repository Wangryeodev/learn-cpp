#pragma once
#include <iostream>
#include <string>
using namespace std;

class HocSinh
{
private:
	string HoTen, DiaChi;
	float DiemToan, DiemVan;
public:
	// Khai bao phuong thuc o file .h va cai dat o file .cpp
	void Xuat();
	void Nhap();

	HocSinh(void); // Phương thức khởi tạo mặc định
	~HocSinh(void);// Phuong thức phá hủy
};

