#include "equation.h"
#include <cmath>
#include <iostream>

using namespace std;

equation::equation() {
	a = 0;
	b = 0;
	c = 0;
	D = 0;
};

equation::equation(double _a, double _b, double _c) {
	a = _a;
	b = _b;
	c = _c;
	D = b * b - 4 * a * c;
};

void equation::set(double _a, double _b, double _c) {
	a = _a;
	b = _b;
	c = _c;
	D = b * b - 4 * a * c;
};

void equation::show() {
	if (a != 0) cout << a << "x^2 + ";
	if (b != 0) cout << b << "x + ";
	if (c != 0) cout << c;
	cout << endl;
}

double equation::find_X() {
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

double equation::find_Y() {
	double s = find_X();
	return a * s * s + b * s + c;

};

double equation::get_a() {
	return a;
};

double equation::get_b() {
	return b;
};

double equation::get_c() {
	return c;
};

equation operator + (equation& eq1, equation& eq2) {
	equation temp;
	temp.set(eq1.get_a() + eq2.get_a(), eq1.get_b() + eq2.get_b(), eq1.get_c() + eq2.get_c());
	return temp;
};