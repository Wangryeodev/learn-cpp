#include <iostream>
using namespace std;
class PhanSo
{
private:
	// Khai báo thành phần static
	static int dem;
	int tuSo, mauSo;
public:
	PhanSo()
	{
		tuSo = 1;
		mauSo = 1;
		dem++;
	}
	PhanSo(int tu, int mau)
	{
		this->tuSo = tu;
		this->mauSo = mau;
		dem++;
	}
	void XemGiaTriBienDem()
	{
		cout << "So luong phan so hien tai la = " << dem << endl;
	}
};
int PhanSo::dem; //Định nghĩa ở ngoài, có thể gán giá trị ban đầu hoặc không
int main()
{
	PhanSo ps1;
	PhanSo ps2(2, 4);
	PhanSo ps3(2, 4);
	PhanSo ps4(2, 4);
	PhanSo ps5(2, 4);
	PhanSo ps6(2, 4);
	ps1.XemGiaTriBienDem();
	system("pause");
	return 0;
}