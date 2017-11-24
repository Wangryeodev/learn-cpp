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
	/*void XemGiaTriBienDem()
	{
		cout << "So luong phan so hien tai la = " << dem << endl;
	}*/
	static int XemGiaTri()
	{
		return dem;
	}
};
int PhanSo::dem; //Định nghĩa ở ngoài, có thể gán giá trị ban đầu hoặc không
int main()
{
	//PhanSo ps1, ps2;
	cout << "\n so phan so hien tai la: " << PhanSo::XemGiaTri() << endl;// Không cần tạo đối tượng để sử dụng phương thức static
	system("pause");
	return 0;
}