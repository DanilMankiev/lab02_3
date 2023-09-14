#pragma once
#include"MyVector.h"
#include"Shape.h"
class Circle : public Shape {
	Vector ptCntr; 
	double R;
public:
	Circle();
	Circle(double x, double y, double R);
	virtual void Move(Vector& v);
	virtual void Out();
	virtual double Area();
};