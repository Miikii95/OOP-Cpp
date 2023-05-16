#pragma once
#include <iostream>
using namespace std;

class CVec2
{
public:

	double x1, x2;

	CVec2(double x1 = 0, double x2 = 0);
	CVec2(const CVec2& vec);

	void SetX1( double x1);
	void SetX2( double x2);

	void SetVec( double x1,  double x2);

	double getX1() const;
	double getX2() const;

	CVec2& operator=(const CVec2 & v);

	CVec2& operator+=(const CVec2& v);

	friend CVec2 operator+ (const CVec2& v1, const CVec2& v2);
	friend double operator* (const CVec2& v1, const CVec2& v2);


	friend istream & operator >> (istream& in, CVec2& v);
	friend ostream & operator << (ostream& out, const CVec2& v);

	double Ave();
};


inline void CVec2::SetX1(const double x1)
{
	this->x1 = x1;
}

inline void CVec2::SetX2(const double x2)
{
	this->x2 = x2;
}

inline double CVec2::getX1() const
{
	return x1;
}

inline double CVec2::getX2() const
{
	return x2;
}