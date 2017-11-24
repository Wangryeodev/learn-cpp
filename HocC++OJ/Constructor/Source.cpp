#include <iostream>

using namespace std;
// Hàm khởi tạo không tham số
// Hàm khởi tạo phải để kiểu public và có tên trùng với tên class

class Phanso{
private:
	int TuSo, MauSo;
public:
	Phanso()
	{
		TuSo = 0;
		MauSo = 1;
	}
};

int main()
{
	Phanso ps;

	system("pause");
	return 0;
}