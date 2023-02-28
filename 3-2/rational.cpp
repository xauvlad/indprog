#include "rational.h"
#include <iostream>

using namespace std;

int nod(int a, int b) {
	if (a != 0 && b != 0) {
		if (a > b) return nod(a - b, b);
		if (a < b) return nod(a, b - a);
	}
	else return a + b;
};

rational::rational() {
	a = 0;
	b = 1;
}

rational::rational(int _a, int _b) {
	if (_b != 0) {
		a = _a / nod(_a, _b);
		b = _b / nod(_a, _b);
	}
	else {
		cout << "Знаменатель равен нулю." << endl;
		return;
	}
}

void rational::set(int _a, int _b) {
	if (_b != 0) {
		if (_a > _b) _a = _a % _b;
		a = _a / nod(_a, _b);
		b = _b / nod(_a, _b);
	}
	else {
		cout << "Знаменатель равен нулю." << endl;
		return;
	}
}

int rational::get_num() {
	return a;
}

int rational::get_den() {
	return b;
}

void rational::show() {
	cout << a << "/" << b << endl;
};

rational operator+ (rational& f1, rational& f2) {
	rational res;
	res.set(f1.a * f2.b + f2.a * f1.b, f1.b * f2.b);
	return res;
};

rational operator- (rational& f1, rational& f2) {
	rational res;
	res.set(f1.a * f2.b - f2.a * f1.b, f1.b * f2.b);
	return res;
};

const rational operator++ (rational& f1, int) {
	rational oldRes(f1.a, f1.b);
	f1.a++;
	f1.set(f1.a, f1.b);
	return oldRes;
};

const rational operator++ (rational& f1) {
	f1.a++;
	f1.set(f1.a, f1.b);
	return f1;
};

bool operator== (rational& f1, rational& f2) {
	return (float(f1.a) / float(f1.b)) == (float(f2.a) / float(f2.b));
};

bool operator> (rational& f1, rational& f2) {
	return (float(f1.a) / float(f1.b)) > (float(f2.a) / float(f2.b));
};

bool operator< (rational& f1, rational& f2) {
	return (float(f1.a) / float(f1.b)) < (float(f2.a) / float(f2.b));
};

rational rational::operator= (rational f2) {
	if (this == &f2) {
		return *this;
	}
	a = f2.a;
	b = f2.b;
	return *this;
}