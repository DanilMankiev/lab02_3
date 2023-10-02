#include"Shape.h"
#include"stdafx.h"
int Shape::count;
list<Shape*> Shape::shapes;

Shape::Shape() {
	if (count < 999) {
		list<Shape*>::iterator it = shapes.begin(); 
		advance(it, count); // ������� iterator �� count ������
		shapes.insert(it, this); // ��������� ������������ ������ shapes ��������, ��������� ��������
	}
	count++;
}
Shape::~Shape() {
	count--;
	list<Shape*>::iterator it = shapes.begin();
	advance(it, count);
	shapes.erase(it);
	
}
void Shape::PrintCount() {
	cout << "\n Now there are " << count << " vectors";
}
int Shape::GetCount() {
	return count;
}
list<Shape*>& Shape::GetShapes() {
	return Shape::shapes;
}