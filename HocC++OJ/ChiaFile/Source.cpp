#include "HocSinh.h"
using namespace std;

int main()
{
	HocSinh LVV;
	LVV.Nhap(); // Tính đóng gói: chỉ có thể truy cập được những phương thức và thuộc tính public ở bên ngoài;
	LVV.Xuat();
	system("pause");
	return 0;
}