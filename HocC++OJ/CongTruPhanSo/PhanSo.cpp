#include "PhanSo.h"
using namespace std;
PhanSo PhanSo::Cong(PhanSo ps)
{
	PhanSo KQ;
	KQ.tuSo = tuSo*ps.mauSo + ps.tuSo*mauSo;
	KQ.mauSo = mauSo*ps.mauSo;
	return KQ;
}
PhanSo PhanSo::Tru(PhanSo ps)
{
	PhanSo KQ;
	KQ.tuSo = tuSo*ps.mauSo - ps.tuSo*mauSo;
	KQ.mauSo = mauSo*ps.mauSo;
	return KQ;
}
PhanSo PhanSo::Nhan(PhanSo ps)
{
	PhanSo KQ;
	KQ.tuSo = this->tuSo*ps.tuSo;
	KQ.mauSo = this->mauSo*ps.mauSo;
	return KQ;
}
PhanSo PhanSo::Chia(PhanSo ps)
{
	PhanSo KQ;
	KQ.tuSo = this->tuSo*ps.mauSo;
	KQ.mauSo = this->mauSo*ps.tuSo;
	return KQ;
}
int PhanSo::UCLN(int a, int b) // Hàm tìm ước chung lớn nhất của 2 số.
{
	int _temp = 1;
	while(a != b)
	{
		if (a > b)
		{
			a -= b;
		} 
		else
		{
			b -= a;
		}
		_temp = a;
	}
	return _temp;
}
PhanSo PhanSo::rutGon() // rút gọn phân số
{
	int& tu = this->tuSo;
	int& mau = this->mauSo;
	int GCD = UCLN(tu, mau);
	tu /= GCD;
	mau /= GCD;
	return *this;
}
void PhanSo::Nhap()
{
	cout << "Nhap tu so: ";
	cin >> tuSo;
	cout << "Nhap mau so: ";
	cin >> mauSo;
}
void PhanSo::Xuat()
{
	cout << tuSo << "/" << mauSo << endl;
}

PhanSo::PhanSo(void)
{
	tuSo = 1;
	mauSo = 1;
}


PhanSo::~PhanSo(void)
{
}
