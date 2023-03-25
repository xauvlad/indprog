#include "cone.h"
#include "frustum.h"
#include <cmath>

using namespace std;

const double pi = 3.14159265;

cone::cone() {
	x = y = z = r = h = 0;
}

cone::cone(double _r, double _h) {
	x = y = z = 0;
	r = _r;
	h = _h;
}

cone::cone(double _x, double _y, double _z, double _r, double _h) {
	x = _x;
	y = _y;
	z = _z;
	r = _r;
	h = _h;
}

void cone::set(double _x, double _y, double _z, double _r, double _h) {
	x = _x;
	y = _y;
	z = _z;
	r = _r;
	h = _h;
}

double cone::area() {
	return pi * r * (r + sqrt(h * h + r * r));
}

double cone::volume() {
	return pi * r * r * h / 3;
}

ostream& operator<< (ostream& stream, cone obj) {
	stream << "(" << obj.x << "; " << obj.y << "; " << obj.z << "), radius = " << obj.r << ", height = " << obj.h << endl;
	return stream;
}

istream& operator>> (istream& stream, cone& obj) {
	stream >> obj.x >> obj.y >> obj.z >> obj.r >> obj.h;
	return stream;
}

// ��������� �����

frustum::frustum() {
	h2 = 0;
	r2 = 0;
}

frustum::frustum(double _r, double _r2, double _h2) : cone(_r, _h2 * _r / _r2) {
	h2 = _h2;
	r2 = _r * _h2 / cone::h;
}

double frustum::area() {
	double l = sqrt(h2 * h2 + (r - r2) * (r - r2));
	return pi * (r + r2) * l * +pi * r * r + pi * r2 * r2;
}

double frustum::volume() {
	double l = sqrt(h2 * h2 + (r - r2) * (r - r2));
	return pi * h2 * (r2 * r2 + r2 * r + r * r) / 3;
}

ostream& operator<< (ostream& stream, frustum obj) {
	stream << "(" << obj.x << "; " << obj.y << "; " << obj.z << "), lower radius = " << obj.r << ", upper radius = " << obj.r2 << ", height = " << obj.h << endl;
	return stream;
}

istream& operator>> (istream& stream, frustum& obj) {
	stream >> obj.x >> obj.y >> obj.z >> obj.r >> obj.r2 >> obj.h2;
	return stream;
}