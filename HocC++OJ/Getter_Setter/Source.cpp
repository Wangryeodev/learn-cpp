#include <iostream>
using namespace std;
// Sử dụng toán tử bằng cách 1: Dùng member-function, tức là dùng hàm nằm trong class

class PhanSo{
private:
	int tuSo, mauSo;
public:
	int LayTu()
	{
		return tuSo;
	}
	int LayMau()
	{
		return mauSo;
	}
	//Setter là cài đặt giá trị 
	void SetTu(int tu)
	{
		tuSo = tu;
	}
	void SetMau(int mau)
	{
		mauSo = mau;
	}
	void Xuat(){
		cout << tuSo << "/" << mauSo << endl;
	}
	PhanSo();
	PhanSo(int tu, int mau)
	{
		this->tuSo = tu;
		this->mauSo = mau;
	}
	// Toán tử số đối, nếu thêm "-"trước object sẽ trả về số đối của phân số
	void operator-(); // cú pháp operator <kí hiệu toán tử>
};
void PhanSo::operator-()
{
	tuSo = -tuSo;
	mauSo = mauSo;
}
int main()
{
	PhanSo A(-1,2);
	-A;
	A.SetTu(2);
	A.SetMau(5);
	cout << A.LayTu() << endl;
	cout << A.LayMau() << endl;
	A.Xuat();
	system("pause");
	return 0;
}