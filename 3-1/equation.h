#pragma once

class eq2 {
	double a;
	double b;
	double c;
	double D;
public:
	eq2();
	eq2(double _a, double _b, double _c);
	void set(double _a, double _b, double _c);
	void show();
	double find_X();
	double find_Y(double x1);
	double get_a();
	double get_b();
	double get_c();
	friend eq2 operator+ (eq2& eq1, eq2& eq2);
};