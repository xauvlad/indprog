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
	num = a / nod(a, b);
	den = b / nod(a, b);
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
	res.set(f1.get_num() * f2.get_den() + f2.get_num() * f1.get_den(), f1.get_den() * f2.get_den());
	return res;
};

fraction operator- (fraction& f1, fraction& f2) {
	fraction res;
	res.set(f1.get_num() * f2.get_den() - f2.get_num() * f1.get_den(), f1.get_den() * f2.get_den());
	return res;
};

fraction operator++ (fraction& f1) {
	fraction res;
	res.set(f1.get_num() + 1, f1.get_den());
	return res;
};

bool operator== (fraction& f1, fraction& f2) {
	return (f1.get_num() / f1.get_den()) == (f2.get_num() / f2.get_den());
};

bool operator> (fraction& f1, fraction& f2) {
	return (f1.get_num() / f1.get_den()) > (f2.get_num() / f2.get_den());
};

bool operator< (fraction& f1, fraction& f2) {
	return (f1.get_num() / f1.get_den()) < (f2.get_num() / f2.get_den());
};
