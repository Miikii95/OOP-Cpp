#include "CVec2.h"

CVec2::CVec2(double x1, double x2)
{
	this->x1 = x1;
	this->x2 = x2;
}

CVec2::CVec2(const CVec2& vec)
{
	*this = vec;
}


void CVec2::SetVec(double x1, double x2)
{
	SetX1(x1);
	SetX2(x2);
}

CVec2& CVec2:: operator=(const CVec2& v) 
{
	this->SetVec ( v.getX1(), v.getX2() ) ;
	return *this;
}

CVec2& CVec2::operator+=(const CVec2& v)
{
	this->x1 += v.getX1();
	this->x2 += v.getX2();

	return *this;
}

double CVec2::Ave()
{

	return	(x1 && x2) ? 2.0 / ( (1.0 / x1) + (1.0 / x2)) : 0 ;
}

CVec2 operator+(const CVec2& v1, const CVec2& v2)
{
	CVec2 result(v1);
	return result += v2;
}

double operator*(const CVec2& v1, const CVec2& v2)
{
	double result = 0;
	result = v1.x1 * v2.x1 + v1.x2 * v2.x2;
	return result;
}

istream& operator>>(istream& in, CVec2& v)
{
	in >> v.x1;
	in >> v.x2;
	return in;
}

ostream& operator<<(ostream& out, const CVec2& v)
{
	out << "[ " << v.getX1() << " ; " << v.getX2() << "]";
	return out;
}
