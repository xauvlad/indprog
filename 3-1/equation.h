#pragma once

class equation {
	double a;
	double b;
	double c;
	double D;
public:
	equation();
	equation(double _a, double _b, double _c);
	void set(double _a, double _b, double _c);
	void show();
	double find_X();
	double find_Y();
	double get_a();
	double get_b();
	double get_c();
	friend equation operator+ (equation& eq1, equation& eq2);
};