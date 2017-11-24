#include <iostream>
#include <math.h>
using namespace std;

class PhanSo{
private:
	int tuSo, mauSo;
public:
	PhanSo()
	{
		tuSo = 1;
		mauSo = 1;
	}
	void Xuat(){
		if (tuSo % mauSo == 0)
		{
			cout << tuSo/mauSo << endl;
		} 
		else
		{
			cout << tuSo << "/" << mauSo << endl;
		}
	}
	// Getter
	int LayTu() // Lấy tử
	{
		return tuSo;
	}
	int LayMau() // lấy mẫu
	{
		return mauSo;
	}
	// Setter
	void ThayTu(int a) // Thay tử
	{
		tuSo = a;
	}
	void ThayMau(int a) // Thay mẫu
	{
		mauSo = a;
	}
	int UCLN(int a, int b) // Hàm tìm ước chung lớn nhất của 2 số.
	{
		a = abs(a);
		b = abs(b);
		if(a*b==0)
		{
			return 1;
		}
		while (a != b)
		{
			if (a > b)
			{
				a -= b;
			} 
			else
			{
				b -= a;
			}
		}
		return a;
	}
	PhanSo RutGon() // rút gọn phân số
	{
		int& tu = this->tuSo;
		int& mau = this->mauSo;
		int GCD = UCLN(tu, mau);
		tu /= GCD;
		mau /= GCD;
		return *this;
	}
	PhanSo(int tu, int mau)
	{
		this->tuSo = tu;
		this->mauSo = mau;
	}
	PhanSo operator+(PhanSo);
	PhanSo operator+(int); // Phan so + So nguyen
	friend PhanSo operator-(int, PhanSo);
	friend PhanSo operator-(PhanSo, int);
	friend istream &operator >> (istream &input, PhanSo &ps);
	friend ostream &operator << (ostream &output, PhanSo &ps);
	// Tien to
	PhanSo &operator++()
	{
		tuSo = tuSo + mauSo;
		return *this;
	}
	PhanSo &operator--()
	{
		tuSo = tuSo - mauSo;
		return *this;
	}
    // hau to
    PhanSo &operator++(int)
    {
        PhanSo temp = *this;
        ++*this;
        return temp;
    }
}; // End class

void operator-(PhanSo &H) // Sử dụng non-member function
{
	H.ThayTu(-H.LayTu());
}
PhanSo PhanSo::operator+(PhanSo B)
{
	PhanSo temp;
	temp.tuSo = this->tuSo*B.mauSo + this->mauSo*B.tuSo;
	temp.mauSo = this->mauSo*B.mauSo;
	return temp;
}
// Phan so  + so nguyen
PhanSo PhanSo::operator+(int a)
{
	// X/Y+a = (X+aY)/Y
	PhanSo temp;
	temp.tuSo = this->tuSo + a*this->mauSo;
	temp.mauSo = this->mauSo;
	return temp;
}
// Để viết cho trường hợp int+PhanSo phải viết dạng non-member function
PhanSo operator+(int a, PhanSo P)
{
	PhanSo temp;
	temp.ThayTu(P.LayTu() + a*P.LayMau()); // Phai dung getter va setter
	temp.ThayMau(P.LayMau());
	return temp;
}
// Dùng Friend function để viết toán tử "-" cho trường hợp int - PhanSo
// Ham ban khong can dung getter setter
PhanSo operator-(int a, PhanSo p)
{
	PhanSo temp;
	temp.tuSo = a*p.mauSo - p.tuSo;
	temp.mauSo = p.mauSo;
	return temp;
}
// Dùng hàm friend để viết toán tử - cho trường hợp Phân số trừ số nguyên
PhanSo operator - (PhanSo p, int a)
{
	PhanSo temp;
	temp.tuSo =p.tuSo - a*p.mauSo;
	temp.mauSo = p.mauSo;
	return temp;
}

//// toán tử nhập
//istream &operator>>(istream &input, PhanSo &p)
//{
//	int a, b;
//	cout << "Nhap tu so: ";
//	cin >> a;
//	cout << "Nhap mau so: ";
//	cin >> b;
//	p = PhanSo(a, b);
//	return input;
//}
//// Toán tử xuất non member function
//ostream &operator << (ostream &output, PhanSo p )
//{
//	return output << p.LayTu() << "/" << p.LayMau() << endl;
//}
istream &operator >> (istream &input, PhanSo &ps)
{
	int a, b;
	cout << "Nhap tu so: " ;
	input >> a;
	do 
	{
		cout << "Nhap mau so khac 0: ";
		input >> b;
	} while (b == 0);
	ps = PhanSo(a, b);
	return input;
}
ostream &operator << (ostream &output, PhanSo &ps)
{
	return output << ps.tuSo << "/" << ps.mauSo << endl;
}
int main()
{
    // Dùng toán tử nhập xuất
	PhanSo A, C;
	C = A++;
    cout << C;
    cout << A;
	system("pause");
	return 0;
}