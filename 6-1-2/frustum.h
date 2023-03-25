#pragma once
#include "cone.h"

using namespace std;

class frustum : public cone {
protected:
	double h2;
	double r2;

public:
	frustum();
	frustum(double _r, double _r2, double _h2);
	double area();
	double volume();
	friend ostream& operator<< (ostream& stream, frustum obj);
	friend istream& operator>> (istream& stream, frustum& obj);
};