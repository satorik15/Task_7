#ifndef CONSTRUCTOR_H
#define CONSTRUCTOR_H
#include <iostream>
using namespace std;
class Complex
{
private:
	double im = 0;
	double re = 0;
public:
	Complex(double date_re, double date_im)
	{
		im = date_re;
		re = date_im;
	}
	Complex()
	{
		im = 5;
		re = 1;
	}
	void set(double date_re, double date_im)
	{
		re = date_re;
		im = date_im;
	}

	void get(string sign)
	{
		sign = im > 0 ? "+ " : "- ";
		cout << re << " " << sign << im << "i" << endl;
	}
	void sum(Complex n1);
	void difference(Complex n1);
	void multiplication(Complex n1);
	void division(Complex n1);
	void abs(Complex n1);
	~Complex()
	{
		cout << "Complex is now destructed" << endl;
	}
};
class Circle 
{
private:
	int x0, y0, r;
public:
	void set(int date_x0,int date_y0,int date_r) 
	{
		x0 = date_x0;
		y0 = date_y0;
		r = date_r;
	}
	Circle(int date_x0, int date_y0, int date_r)
	{
		x0 = date_x0;
		y0 = date_y0;
		r = date_r;
	}
	Circle()
	{
		x0 = 5;
		y0 = 5;
		r = 5;
	}
	void get()
	{
		cout << "coordinates of the center of the circle: " << "x0=" << x0 << " y0=" << y0 << endl;
		cout << "area of the circle:" << 3.14 * pow(r, 2) << endl;
	}
	double getDiametr();
	double length();
	double square();
	~Circle()
	{
		cout << "Circle is now destructed" << endl;
	}

};

class Vector {
private:
	int x, y;

public:
	Vector(int date_x, int date_y)
	{
		x = date_x;
		y = date_y;
	}
	Vector()
	{
		x = 3;
		y = 3;
	}
	void set(int date_x, int date_y)
	{
		x = date_x;
		y = date_y;
	}
	void get()
	{
		cout << "Coordinates of this vector" << "x=" << x << " y=" << y << endl;
		cout << "Length of this vector:" << sqrt(pow(x, 2) + pow(y, 2)) << endl;
	}
	void print_2(Vector B);
	~Vector()
	{
		cout << "Vector is now destructed" << endl;
	}

};
#endif // !CONSTRUCTOR_H
