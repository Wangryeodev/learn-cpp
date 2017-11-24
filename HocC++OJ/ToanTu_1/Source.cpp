#include <iostream>
using namespace std;
// Sử dụng toán tử bằng cách 1: Dùng member-function, tức là dùng hàm nằm trong class

class PhanSo{
private:
	int tuSo, mauSo;
public:
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
	A.Xuat();
	system("pause");
	return 0;
}