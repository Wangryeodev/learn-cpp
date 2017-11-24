#pragma once
#include <iostream>

class PhanSo
{
private:
	int tuSo, mauSo;

public:
	PhanSo Cong(PhanSo);
	PhanSo Tru(PhanSo);
	PhanSo Nhan(PhanSo);
	PhanSo Chia(PhanSo);
	int UCLN(int, int);
	PhanSo rutGon();
	void Nhap();
	void Xuat();
	PhanSo(void);
	~PhanSo(void);
};

