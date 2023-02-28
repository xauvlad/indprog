#include "equation.h"
#include <cmath>
#include <iostream>

using namespace std;

eq2::eq2() {
	a = 0;
	b = 0;
	c = 0;
	D = 0;
};

eq2::eq2(double _a, double _b, double _c) {
	a = _a;
	b = _b;
	c = _c;
	D = b * b - 4 * a * c;
};

void eq2::set(double _a, double _b, double _c) {
	a = _a;
	b = _b;
	c = _c;
	D = b * b - 4 * a * c;
};

void eq2::show() {
	if (a != 0) cout << a << "x^2 + ";
	if (b != 0) cout << b << "x + ";
	if (c != 0) cout << c;
	cout << endl;
}

double eq2::find_X() {
	if (D < 0) {
		cout << "Корней нет." << endl;
		return NULL;
	}
	if (D == 0) {
		double s = -b / (2 * a);
		cout << "Один корень: " << s << endl;
		return s;
	}
	if (D > 0) {
		double s1 = (-b + sqrt(D)) / (2 * a);
		double s2 = (-b - sqrt(D)) / (2 * a);
		cout << "Два корня, наибольший: " << max(s1, s2) << endl;
		return max(s1, s2);
	}
};

double eq2::find_Y(double x1) {
	return a * x1 * x1 + b * x1 + c;
};

double eq2::get_a() {
	return a;
};

double eq2::get_b() {
	return b;
};

double eq2::get_c() {
	return c;
};

eq2 operator+ (eq2& _eq1, eq2& _eq2) {
	eq2 temp;
	temp.set(_eq1.get_a() + _eq2.get_a(), _eq1.get_b() + _eq2.get_b(), _eq1.get_c() + _eq2.get_c());
	return temp;
};