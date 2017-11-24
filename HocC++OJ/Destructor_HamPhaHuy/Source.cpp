#include <iostream>
using namespace std;
// Destructor - hàm phá hủy
// Destructor dùng để dọn dẹp trước khi một đối tượng bị phá hủy
// Một class chỉ có 1 Destructor
// Phương thức Destructor trùng tên class, nhưng có tiền tố "~" đằng trước
// Destructor phải có thuộc tính public
// hàm phá hủy không có tham số
class PhanSo
{
private:
	int tuSo, mauSo;
public:
	PhanSo()
	{
		tuSo = 1;
		mauSo = 1;
	}
	PhanSo(int tu, int mau)
	{
		this->tuSo = tu;
		this->mauSo = mau;
	}
	~PhanSo()
	{
	}
};

int main()
{
	PhanSo ps;
	system("pause");
	return 0;
}