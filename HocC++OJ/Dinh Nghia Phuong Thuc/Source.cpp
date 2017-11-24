#include <iostream>
#include <string>
using namespace std;
// Bài toán nhập xuất thông tin của một học sinh
// Bao gồm: Tên, địa chỉ, điểm toán văn
class HocSinh{
private:
	string HoTen, DiaChi;
	float DiemToan, DiemVan;
	// Có 2 cách định nghĩa(Cài đặt) cho phương thức của class
public:
	// Cách 1: khai báo và định nghĩa trong class
	void Nhap(){
		// Thực thi câu lệnh ở đây
		fflush(stdin);
		cout << "\n Nhap ten hs: ";
		getline(cin, HoTen);
		fflush(stdin);
		cout << "\n Nhap dia chi: ";
		getline(cin, DiaChi);
		cout << "\n Nhap diem toan: ";
		cin >> DiemToan;
		cout << "\n Nhap diem van: ";
		cin >> DiemVan;
	}
	//Cách 2: Khai báo trong class và định nghĩa bên ngoài
	void Xuat();
};
// Cú pháp : <KieuTraVeCuaPhuongThuc> TenClass::TenPhuongThuc(){// Code}
// Cách 2:
void HocSinh::Xuat()
{
	// thuc thi o day
	cout << "\n Ho ten:" << HoTen;
	cout << "\n Dia chi: " << DiaChi;
	cout << "\n Diem Toan: " << DiemToan;
	cout << "\n Diem Van: " << DiemVan;
	cout << endl;
}
int main()
{
	HocSinh LVV;
	LVV.Nhap(); // Tính đóng gói: chỉ có thể truy cập được những phương thức và thuộc tính public ở bên ngoài;
	LVV.Xuat();
	system("pause");
	return 0;
}