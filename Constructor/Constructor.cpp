#include "constructor.h"

double Circle::getDiametr()
{
	return 2 * this->r;
}

double Circle::length()
{
	return 2*3,14*this->r;
}

double Circle::square()
{
	return 3, 14 * pow(this->r, 2);
}
void Complex::sum(Complex n1)
{
	string sign = (n1.im + this->im < 0) ? "" : "+";
	cout << n1.re + this->re
		<< sign << n1.im + this->im << "i" << endl;
}

void Complex::difference(Complex n1)
{
	string sign = (n1.re - this->re < 0) ? "i" : "i +";
	cout << n1.im - this->im
		<< sign << n1.re - this->re << endl;
}
void Complex::multiplication(Complex n1)
{
	string sign = (n1.re * this->im + n1.im * this->re < 0) ? "" : "+";
	cout << n1.re * this->re - n1.im * this->im
		<< sign << n1.re * this->im + n1.im * this->re << "i" << endl;
}
void Complex::division(Complex n1)
{
	string sign = (((n1.re * this->im - n1.im * this->re) / (pow(this->re, 2) + pow(this->im, 2))) < 0) ? "" : "+";
	cout << ((n1.re * this->re + n1.im * this->im) / (pow(this->re, 2) + pow(this->im, 2)))
		<< sign << ((n1.re * this->im - n1.im * this->re) / (pow(this->re, 2) + pow(this->im, 2)))
		<< "i" << endl;
}
void Complex::abs(Complex n1)
{
	cout << "Модуль первого комплексного числа: " << sqrt(pow(n1.re, 2) + pow(n1.im, 2))
		<< " Модуль второго комплексного числа: " << sqrt(pow(this->re, 2) + pow(this->im, 2)) << endl;
}

void Vector::print_2(Vector B)
{
	cout << "Coordinates of this vector" << "x=" << B.x << " y=" << B.y << endl;
	cout << "Lenght of this vector:" << sqrt(pow(B.x, 2) + pow(B.y, 2)) << endl;
}
