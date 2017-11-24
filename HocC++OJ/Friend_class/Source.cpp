#include <iostream>
using namespace std;
// Phương thức của 1 class có thể là bạn của 1 class khác.
/* 
class X
{
public:
	int function();
};
class Y
{
	friend int X::function(); // function() của X là hàm bạn của Y
};
*/
// X là class bạn của Y thì mọi phương thức của X là bạn của Y
/* 
class Y
{
	friend class X;
	// mọi phương thức của X là bạn của Y
	friend class Z;
	// mọi phương thức của Z là bạn của Y
	// 1 class có thể có nhiều class bạn
};
*/
// 1 hàm có thể là bạn của nhiều class
// VD bài toán thịt gà và thịt heo
class ConHeo; // Forwarding declare: khai báo trước sử dụng sau
// Giải thích:
/* 
	Khai báo trước sử dụng sau, là khai báo class ConHeo trước định nghĩa sau.
	Vì trong class ConGa có đề cập đến class ConHeo nhưng class ConHeo chưa được định nghĩa
	sẽ không thể truy cập thuộc tính của ConGa qua hàm friend được => khai báo class ConHeo :v 
*/
class ConGa
{
private:
	int khoiLuong;
	friend void LamThit(ConGa, ConHeo); // Hàm bạn chung với ConHeo
public:
	ConGa();
	ConGa(int a)
	{
		khoiLuong  = a;
	}
};
class ConHeo
{
private:
	int khoiLuong;
	friend void LamThit(ConGa, ConHeo); // Hàm bạn chung với ConGa
public:
	ConHeo();
	ConHeo(int a)
	{
		khoiLuong  = a;
	}
};
void LamThit(ConGa ga, ConHeo heo)
{
	if (ga.khoiLuong > heo.khoiLuong) // Nếu gà nặng hơn, Thịt
	{
		cout << "Thit con ga :v " << endl;
	}
	else
	{
		cout << "Thit con heo :v " << endl;
	}
}
int main()
{
	ConGa ga(3);
	ConHeo heo(100);
	LamThit(ga, heo);
	system("pause");
	return 0;
}