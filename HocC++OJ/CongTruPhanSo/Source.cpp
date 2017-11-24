#include "PhanSo.h"

int main()
{
	PhanSo ps2,ps1,psKQ;
	// Nhap object
	ps1.Nhap();
	ps2.Nhap();

	psKQ = ps1.Cong(ps2); // ps1 + ps2
	psKQ.rutGon();
	psKQ.Xuat();

	psKQ = ps1.Tru(ps2); // ps1 - ps2
	psKQ.rutGon();
	psKQ.Xuat();

	psKQ = ps1.Nhan(ps2); // ps1 x ps2
	psKQ.rutGon();
	psKQ.Xuat();

	psKQ = ps1.Chia(ps2); // ps1 / ps2
	psKQ.rutGon();
	psKQ.Xuat();
	
	system("pause");
	return 0;
}