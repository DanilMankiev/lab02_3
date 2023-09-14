#include"CIrcle.h"
#include"stdafx.h"
#define PI 3.14
Circle::Circle() {
	ptCntr = Vector(0, 0);
	R = 0;
}
Circle::Circle(double x, double y, double R) {
	ptCntr = Vector(x, y);
	this->R = R;
}

double Circle::Area()
{
	return PI * R * R;
}
void Circle::Move(Vector& v) {
	ptCntr = ptCntr + v;
}
void Circle::Out() {
	cout << "\nCircle (";
	ptCntr.Out();
	cout << ") R = " << R<<endl;
}