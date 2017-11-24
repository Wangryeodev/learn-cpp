#include <iostream>

using namespace std;
// Phương thức có đối tượng là tham số truyền vào
// Yêu cầu bài toán: tính tổng của 2 giờ
// VD: 1h20' + 2h20' = 3h40'
class ThoiGian{
private:
	int Gio, Phut;
public:
	void Nhap(int gio, int phut) // có 2 tham số truyền vào
	{
		Gio = gio;
		Phut = phut;
	}
	void Xuat()
	{
		cout << Gio << "h" << Phut << "m";
	}
	ThoiGian Tong(ThoiGian T1, ThoiGian T2)
	{
		Phut = T1.Phut + T2.Phut;
		Gio = Phut / 60;
		Phut = Phut % 60;
		Gio = Gio + T1.Gio + T2.Gio;
		return *this;
	}

};
int main()
{

	ThoiGian T1,T2,T3;
	T1.Nhap(2,56);
	T2.Nhap(1, 4);
	T3.Tong(T1,T2);
	T3.Xuat();
	cout << endl;
	system("pause");
	return 0;
}
