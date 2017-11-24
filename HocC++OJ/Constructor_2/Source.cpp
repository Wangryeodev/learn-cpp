#include <iostream>
using namespace std;

class PhanSo
{
private:
	int TuSo, MauSo;
public:
	PhanSo()
	{
		TuSo = 0;
		MauSo = 1;
	}
	// Truyền vào tử số và mẫu số
	PhanSo(int tu, int mau)
	{
		TuSo = tu;
		MauSo = mau;
	}
	PhanSo(int tu)
	{
		MauSo = 1;
		TuSo = 1;
	}
};

int main()
{
	// Cách 1
	PhanSo ps(1,3);
	// Cách 2
	PhanSo ps2 = PhanSo(2, 5);
	PhanSo ps3(1);

	system("pause");
	return 0;
}
