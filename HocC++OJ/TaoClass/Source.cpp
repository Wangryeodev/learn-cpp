#include <iostream>
#include <string>
using namespace std;
class HocSinh{
	// Khai báo, hoặc cài đặt thuộc tính
	// Khai báo hoặc cài đặt phương thức
	// Khai báo thuộc tính giống khai báo biến
	// Khai báo phương thức giống khai báo hàm
	// private: chỉ sử dụng trong class
	// public: Có thể dùng ở "thế giới bên ngoài" :v
	// protected: sẽ giải thích ở phần KẾ THỪA
	// Nếu không ghi public hay private thì chương trình tự coi là private

private: 
	string Hoten;
	void Xuat(); // Phương thức private, không thể gọi bên ngoài
public: 
	string DiaChi;
	void Nhap(); //Phương thức public, có thể gọi bên ngoài

};
int main()
{
	// Khởi tạo 1 đối tượng từ class
	HocSinh LVV;
	LVV.DiaChi = "VX - Phuc Tho"; // cách truy cập đến thành phần của 1 class
	system("pause");
	return 0;
}