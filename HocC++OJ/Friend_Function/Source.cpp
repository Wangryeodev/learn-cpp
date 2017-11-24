#include <iostream>

using namespace std;
// Hàm bạn - Friend function
// hàm bạn không phải 1 thành phần của class bạn của nó
// VD: DienTich() không thuộc về class HinhChuNhat nên không thể truy xuất DienTich() như 1 phương thức của class
// Hàm bạn thường có tham số truyền vào là 1 object
// Hàm bạn không thể truy cập được các thuộc tính của "bạn mình" 1 cách trực tiếp
// Hàm bạn có thể được khai báo trong phần private và public đều được
class HinhChuNhat 
{
private:
	float a, b;
public:
	HinhChuNhat()
	{
		a = 1;
		b = 2;
	}
	HinhChuNhat(float cd, float cr)
	{
		a = cd;
		b = cr;
	}
	friend float DienTich(HinhChuNhat); // Khai báo hàm bạn friend <kieudulieu> <tenham>
};

float DienTich(HinhChuNhat H)
{
	return H.a * H.b; // Chỉ có thể truy cập vào thuộc tính a, b thông qua "bạn nó".
}
int main()
{
	HinhChuNhat H1(4,5);
	cout << "Dien tich la: " << DienTich(H1) << endl;
	system("pause");
	return 0;
}