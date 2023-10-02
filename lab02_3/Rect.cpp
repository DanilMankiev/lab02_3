#include"Rect.h"
#include"stdafx.h"
Rect::Rect() 
{
	ptLT = Vector(0, 0);
	ptRB = Vector(0, 0);
}
Rect::Rect(double left, double top, double right, double bottom) 
{
	ptLT = Vector(left, top);
	ptRB = Vector(right, bottom);
}
Rect::Rect(Vector& ptLT, Vector& ptRB) 
{
	this->ptLT = ptLT;
	this->ptRB = ptRB;
}
Rect& Rect::operator=(Rect r) 
{
	if (*this == r) {
		return *this;
	}
	else {
		ptLT = r.ptLT;
		ptRB = r.ptRB;
		return *this;
	}
}
bool Rect::operator==(Rect& r) 

{
	return ptLT == r.ptLT && ptRB == r.ptRB;
}

void Rect::Inflate(double d) 
{	
	ptLT = ptLT + d;
	ptRB.x -= d;
	ptRB.y -= d;
}
void Rect::Inflate(double wide, double length)
{
	ptLT.x += wide;
	ptRB.x -= wide;
	ptLT.y += length;
	ptRB.y -= length;
}
void Rect::Inflate(double left, double top, double right, double bottom) 
{
	ptLT.x += left;
	ptLT.y += top;
	ptRB.x -= right;
	ptRB.y -= bottom;
}

void Rect::Out() 
{
	std::cout << "\nRect (" << ptLT.x << ", " << ptLT.y << ", " << ptRB.x << ", " << ptRB.y << ")";
}
double Rect::Area() {
	return abs(ptLT.x - ptRB.x) * abs(ptLT.y - ptRB.y);
}

void Rect::Move(Vector& v) {
	ptLT = ptLT + v;
	ptRB = ptRB + v;
}