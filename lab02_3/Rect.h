#pragma once
#include"MyVector.h"
#include"Shape.h"
class Rect :public Shape {
	Vector ptLT;
	Vector ptRB;

public:
	Rect();
	Rect(double left, double top, double right, double bottom);
	Rect(Vector& ptLT, Vector& ptRB);

	Rect& operator=(Rect r);
	bool operator==(Rect& r);

	void Inflate(double d = 1);
	void Inflate(double wide, double length);
	void Inflate(double left, double top, double right, double bottom);

	virtual double Area();
	virtual void Move(Vector& v);
	virtual void Out();
};