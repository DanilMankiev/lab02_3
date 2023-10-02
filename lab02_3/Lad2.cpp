//===========================================================
//	������. ��������. �����������.
//===========================================================
#include "stdafx.h"
#include "MyString.h"
#include "Rect.h"
#include "MyVector.h"
#include"Circle.h"
#include"Shape.h"


// � ������� ����� ������������ ����� Vector, ��������������� 
// ���������������� ������� �� ��������� � ����� ����� MyString.
// ������� ���������� � ������� ����� Vector.h, Vector.cpp, MyString.h � MyString.cpp.

// ��������: ��� header-������ ����� ���������� ������ "Exclude from build".
// ��� ����� ����� ��������������� �������� Settings (������� General)


int main()
{
	//==========================
	// ��������������� ��������
	//==========================

	// ����������� ���������� �������� ���������� (operator=) ��� ������ Vector.
	// ��������� ���������� ������� if (this == &v). ������ �� ����������������
	
	Vector a(2, 1), b;

	cout << "\tTest Vector operator=\n";
	a.Out();		b.Out();

	// �������� ��� �������� ��������=, �������� ������ a ������� b.
	//a = b;

	// � ��������� ������ � ������� � ������� (F11)
	// ����������� ��� ���������� �����, � ����� ��������� ��������
	a = a;
	stop

		// ������ �������� ��������� ���, ���� �������� ���������� �� ����������?
		// ��������� � ������� ��������� (����� ��������).
		Vector c = a;
		// ������ ��� ���������� ����������� �����������, � �� �������� ������������

	c.Out();

	// ���������. ����� �������� ����������� ����������� (���������� ������).
	// �������� ����, ������������ ����� �������� ����������  ( *this = v; ).

	// ������� �������� ���������� � ����� MyString � ��������� ���������.
	// ��� ����� ��� �������� �������� � ����� default-�����������.

	MyString s("Dynamic strings always change their size");
	MyString str;

	str = s;

	cout << "\n\n\tTest MyString operator=\n\n" << str.GetString();
	stop

	// ���������� �� ��� �������� � � ���� ���������? ������?
	MyString ss = s;
	// !��� ������ ��� ���������� default ����������� �����������

	// �������� ����������� �����������, ������� ������������� �������� �����
	// ������, � �� ���������� �� �����. ����������� ������������ ������ (Copy).


// ���������� �������� �������� operator+() ��� �������� ������ Vector
// �� �������� �������� ��������� �� ��������� 
// �����������: ����������� ���������� ������������.

// ����� (����� ��������) �������� ���������� � ��������� ���������.
// � ��������� ������ � ������� � ������� (F11) ����������� ��� ����������.

	cout << "\n\n\tTest Vector operator+\n";

	Vector d;
	d = a + b; // ���������� ��� � �������� ������������

	d.Out();

	stop

	// ���������, ��� ����������� ����������� ���������� � ���� ���������.
	Vector e = a + b;

	cout << "\n\n\tTest Vector copy constructor\n";
	e.Out();

// � ������ Vector ���������� ������� �������� (!) ������ ������ �������.
// �����������: ������ - ��� ����� ������� ( sqrt(x1*x1+ x2+x2); )
// ��������� ������������ ������.

	cout << "\n\n\tTest unary operator!() - \'vector length\'\n";
	cout << "\n |a| = " << !a;

	stop

		// � ������ Vector ���������� �������� �������� ">" � "==" ���,
		// ����� ����� ���������� ��������� ����������� � ���������

	
	if (e > a)
		cout << "\n\nVector e is greater than vector a\n";
	else if (e == a)
		cout << "\n Vector e is equal to vector a\n";
	else
		cout << "\n\nCould not compare vectors\n";

	// ��������, ��� ������� ����� ���� ������� �� ������
	// � ������� �������������. ���������� ������ �������.

	// ��������: �������� ��������� ������������ ����� ������ ����������
	// � �����-���������. ��������, fabs (x1 - x2) < DBL_EPSILON
	// ��������� DBL_EPSILON == 2.2204460492503131e-016 ���������� � limits
	// ������������� ������������ �� ��� ���������� operator==().

//==============================================
// ����������� �������� � ������� friend-������� 
//==============================================

// ���� �� ����� ������ � ����� Vector �������� ��������� ������� �� ������
// (v*d, ��� v - ������ ������ Vector, � d - ������ ���� double),
// �� �� ����� ��� ������� 2-�� ���������:

// - � ���� ������ ������ � ����� ���������� ���� double, ���
// - � ���� ������� ������� � 2-�� �����������.

// ���� �� �� ����� �������� ������� �� ������� (d*v),
// �� ��� ����� ����������� ������ ����� �������� (������).

// ����������� ��� ������� ��� �������� �������� *.
// ��� ���� ������ �������� ��������� ������ ����.

	cout << "\n\n\tTest operator*()\n";
	Vector v(1,2), w;
	w = 5. * v;
	w.Out();

	w = v * 5.;
	w.Out();

	w = 5 * v * atan(1.);
	w.Out();


// � ������ ��� �������������� ���� �������� "*" � ������ Vector
// ���������� �������� ���������� ������������ ���� ��������
// ��������� ��� ����� ������� ����������.
	int k;
	k = w * v;

//=============================================
// ����������� �������� � �������
//=============================================

// �������� ����� Rect, ��������������� ���������������� ��������������
// � ������������� ������������. �� ������ ��������� ��� ��������� �������
// ������ Vector, ������� ���������� ���������� ������ �������� (ptLT) �
// ������� ������� (ptRB) ����� ��������������. ������������� � ������������
// (�������������) ������������� ���������� ��������.

// ���������: �� ������ ������� ����� ����� � ������� ������.
// � ���� WorkSpace �������� ������� ClassView, ��������� �����
// �� �������� ������ <���_�������> classes � �������� ����������� ����.
// � ��� �������� ������� New Class... � ������� ������� ��� (Rect) ������
// ������ � ������� OK. C����� ������ � ������ ������� ��� ����� �����.
// ������������ ���� ���������, ��������, ��� ����� ������ ��������� ������ ���.
// ��������, ��� ��������� �������� ������ #if _MSC_VER > 1000 � #endif // _MSC_VER > 1000

// ������� � ����� ��� ������� (ptLT, ptRB) ������ Vector.

// �������� ����� �������������� � ��������� ����������.
// � ���������, �������� ����������� � 4-�� �����������, ��������� ����������
// 4-� ������ (left, top, right, bottom) ����������������.

// ���������� � ������ 3 ������ Inflate, ������� �������� "��������" ���������������.
// 1. � ����� ���������� (�� ��������� = 1), ������� ������ ���������� ���� 4-� ������.
// 2. � 2-�� ����������� (���������� ����� � ���������� ����-����).
// 3. � 4-�� ����������� (����������, ��������� ��� ����� 4-� ������).

// �������� ����� Out() ��� ������ ��������� � ����� ����: "Rect (10,10,50,30)"
// � ��������� ������ ���������� ������������������ ������ �������������
// � �������� ��� ���������� ���������� ����

	Vector v1 (1,1), v2 (101,101);

	Rect r (v1, v2);

	cout << "\n\n\tTest Rect\n";
	r.Out();

	r = Rect (10, 10, 50, 30);

	r.Out();

	r.Inflate();

	cout << "\n\n\tTest Inflate\n";
	r.Out();

	r.Inflate(2.5);
	r.Out();

	r.Inflate(-2.5, 2.5);
	r.Out();

	r.Inflate(1, 2, -3, 4);
	r.Out();

//=============================
// ����������� ������ � �������
//=============================

// ������� � ����� Vector ����������� ���������� private: int Count;
// � ����������� public-������� PrintCount(), ������� ������� ��������
// ����������� ���������� Count. ��������:

// 	cout << "\n Now there are " << Count << " vectors";

// ������������� ������������ ���, ����� ������ ���, ����� ���������
// ������ ������ Vector, ������� ������������ �� �������
// ���������� ����� ������������ ��������� ������ ��������.
// ��������� ����������� ���������������� ���������� ���������

	cout << "\n\n\tTest static members\n";

	Vector::PrintCount();	// �������� ��� ������ �������

	Vector *pv = new Vector;

	pv->PrintCount();		// �������� � ������� �������

	delete pv;
	Vector::PrintCount();	// ����� ��� ������ �������

	Vector ar[4];
	ar->PrintCount();		// ����� � ������� �������

	Vector *par[4];

	par[0] = new Vector(1,1);
	par[0]->Out();
	delete par[0];

// ��� ����������� �� ������ �������� ����� ����� �������� � ��
// ����� ���������, ��� ��������� � �������� ������� ������ Vector,
// � ��������� � ���, ��� ���������� ����� �������� ������������� ������ �����.

//=============================
// ����������� ������
//=============================

// ������ ��� ������� ������� ������� �������� �������.
// ������� � ������� ������ ����� ����� Shape.
// ���������� � ���� static-���������� Count � ����� PrintCount,
// ������ �� ��������� �� ������ Vector.

// ������� � ����� Shape ������ ���������� �� �������
// static Shape* shapes[1000];

// ����� ������� �� ������, � ������������ ������ ����������.
// ��, ��� ��������� ���� ������ ��������, ����� �����������
// �� ������, � ������������ ������ �������, �� ��� �������.

// ������� � ����� Shape ����� ����������� �������:

// void Move (Vector& v);
// void Out();
// double Area(); 

// ������ ����������� ������ Shape ������ ������� �� ������ ������,
// ���������� ��� �������� ������� ��������.
// �� ��������, ��� ���������� Shape ���� ������ �������������� �������.
// ������ static-���� ������ Shape ������ ���������� ������ ��������� ��������
// � ������� ���������� (���� ������� �� ��������� 999).

// ������������� ����� Rect. �������� ��� ����������� �� Shape �
// �������������� � ��� ��� ����������� ������� ������ Shape.

// ����� Move(Vector& v) - ������� ������������� �� �������� v,
// Out() - ��� ���������� (������ �������� �� �����������)
// Area() - ������� ������� ��������������

// ����� Vector ����� �������� ����������� �� Shape.
// ������� ����� ����� ����, ������� Vector::Area() ������ ���������� ����.

// �������� ����� ����� Circle, ����������� �� Shape. ��������, � ��� ������ ����
// ��� ����������: Vector ptCntr; double R; � ���� ����� ����������� �������.

// � ������� ���������� ��������� ��������� ������������
// ���������������� ����� �������.
	cout << "\n\n\tTest abstract Shapes\n";
	{
		Shape::PrintCount();
		Rect* pr = new Rect(0, 0, 5, 5);	// In the heap
		Rect r (10, 10, 100, 100);			// On stack frame

		Circle* pc = new Circle (10, 10, 5);// In the heap
		Circle c (20, 20, 3);				// On stack frame
		Vector v (5.,5.);					// ��������
		Shape::PrintCount();

		for (list<Shape*>::iterator i = Shape::GetShapes().begin(); i!=Shape::GetShapes().end(); i++)
		{
			Shape* p = *i;
			cout <<"\n" << p;
			p->Move(v);
			p->Out();
			cout << ";  Area = " <<	p->Area();
		}
		Shape::PrintCount();
		delete pr;
		Shape::PrintCount();
		delete pc;
		Shape::PrintCount();
	}
	Shape::PrintCount();

// ��� ���������� ��������, ����� ������� ����������� ��������
// ����������� ��������� ������� (����� - ������� �������� #include)

// ���������: ��� ��� ����� Shape �������� �������, �� �����, ��� ����
// ��������� #include "MyVector.h" ������ ������ ���� ��� ���������:

// #include "MyShape.h"
// #include "MyVector.h"

// ��� ��� ����� Shape �������� ���������� �������, �.�. ������:
// virtual void Move (Vector& v) = 0;
// �� ���� ���������� MyShape.h ������ ���������� � ������������ ����������:
// class Vector;

	cout << "\n\n";
}