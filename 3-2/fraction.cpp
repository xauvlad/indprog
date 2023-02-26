#include "fraction.h"
#include <iostream>

using namespace std;

int nod(int a, int b) {
	if (a != 0 && b != 0) {
		if (a > b) return nod(a - b, b);
		if (a < b) return nod(a, b - a);
	}
	else return a + b;
};

fraction::fraction() {
	num = 0;
	den = 1;
}

fraction::fraction(int a, int b) {
	if (b != 0) {
		num = a / nod(a, b);
		den = b / nod(a, b);
	}
	else {
		cout << "Знаменатель равен нулю." << endl;
		return;
	}
}

void fraction::set(int a, int b) {
	if (b != 0) {
		if (a > b) a = a % b;
		num = a / nod(a, b);
		den = b / nod(a, b);
	}
	else {
		cout << "Знаменатель равен нулю." << endl;
		return;
	}
}

int fraction::get_num() {
	return num;
}

int fraction::get_den() {
	return den;
}

void fraction::show() {
	cout << num << "/" << den << endl;
};

fraction operator+ (fraction& f1, fraction& f2) {
	fraction res;
	res.set(f1.num * f2.den + f2.num * f1.den, f1.den * f2.den);
	return res;
};

fraction operator- (fraction& f1, fraction& f2) {
	fraction res;
	res.set(f1.num * f2.den - f2.num * f1.den, f1.den * f2.den);
	return res;
};

fraction operator++ (fraction& f1, int) {
	int tnum = f1.num++;
	int tden = f1.den;
	fraction res;
	res.set(tnum, tden);
	return res;
};

bool operator== (fraction& f1, fraction& f2) {
	return (float(f1.num) / float(f1.den)) == (float(f2.num) / float(f2.den));
};

bool operator> (fraction& f1, fraction& f2) {
	return (float(f1.num) / float(f1.den)) > (float(f2.num) / float(f2.den));
};

bool operator< (fraction& f1, fraction& f2) {
	return (float(f1.num) / float(f1.den)) < (float(f2.num) / float(f2.den));
};
