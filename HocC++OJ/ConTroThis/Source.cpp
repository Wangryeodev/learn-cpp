#include <iostream>
using namespace std;
// Con trỏ this tham chiếu đến đối tượng đang gọi hàm thành phần
class PhanSo{
private:
	int TuSo, MauSo;
public:
	PhanSo RutGon();
	void Nhap();
	void Xuat();
};
// Cách dùng thứ 1 của con trỏ this: "Trỏ" đến các thành phần của class hiện tại
void PhanSo::Nhap()
{
	cout << "\n Nhap tu so: ";
	//cin >> TuSo;
	cin >> this->TuSo;
	cout << "\n Nhap mau so: ";
	cin >> this->MauSo;
}
void PhanSo::Xuat()
{
	cout << this->TuSo << "/" << this->MauSo;
	cout << endl;
}
// Cách dùng thứ 2: Trả về object hiện tại
PhanSo PhanSo::RutGon()
{
	int a, b;
	a = abs(this->TuSo);
	b = abs(this->MauSo);
	while(a != b)
	{
		if(a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	this->TuSo /= a;
	this->MauSo /= a;
	return *this;
}
int main()
{
	PhanSo ps;
	ps.Nhap();
	ps.RutGon();
	ps.Xuat();
	system("pause");
	return 0;
}