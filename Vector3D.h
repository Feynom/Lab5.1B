#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "MyException.h"

#pragma pack(1)

using namespace std;

class Vector3D
{
	double x, y, z;
public:
	double GetX() const;
	double GetY() const;
	double GetZ() const;

	void SetX(double value);
	void SetY(double value);
	void SetZ(double value);

	Vector3D();
	Vector3D(double, double, double);
	Vector3D(const Vector3D&);

	Vector3D& operator = (const Vector3D&);
	friend ostream& operator << (ostream&, const Vector3D&) throw(invalid_argument, bad_exception, MyException);
	friend istream& operator >> (istream&, Vector3D&);
	operator string() const;

	Vector3D& operator ++ ();
	Vector3D& operator -- ();
	Vector3D operator ++ (int);
	Vector3D operator -- (int);

	friend Vector3D operator + (Vector3D&, Vector3D&);
	friend Vector3D operator - (Vector3D&, Vector3D&);
	friend double operator * (Vector3D&, Vector3D&);
};

