#include "stdafx.h"
#include "MyVector.h"

Vector::Vector(double c1, double c2)
{
	x = c1;   y = c2;
	
	
}

Vector::Vector()
{
	x = y = 0.;
	
}

Vector::Vector(const Vector& tmp) 
{
	*this = tmp;
	
}


void Vector::Out()
{
	cout << "\nVector:  x = " << x << ",  y = " << y;
}
double Vector::Area() 
{
	return 0;
}
void Vector::Move(Vector& v) 
{
	*this = *this + v;
}

//====== Переопределение операций =====//
Vector& Vector::operator= (const Vector& v)	// Присвоение
{
	if (this == &v)
		return *this;
	x = v.x;
	y = v.y;
	return *this;
}

Vector Vector::operator+(const Vector& v) 
{
	return Vector(this->x+ v.x,this->y+ v.y);
	
}

double Vector::operator!() 
{
	return sqrt(x * x + y * y);
}

bool Vector::operator>( Vector& v)
{
	return !(*this) > !v;
}
bool Vector::operator==(Vector& v)
{
	if (fabs(x - v.x) < DBL_EPSILON && fabs(y - v.y) < DBL_EPSILON) {
		return (x == v.x && y == v.y);
	}

}

Vector Vector::operator*(double d) 
{
	return Vector(x*d,y*d);
}

double Vector::operator*(Vector& v) 
{
	return x * v.x + y * v.y;
}

Vector Vector::operator+(double d)
{
	return Vector(x + d, y + d);
}




Vector operator*(double d, Vector& v) 
{
	return Vector(v.x* d, v.y* d);
}

