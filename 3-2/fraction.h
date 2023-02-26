#pragma once

int nod(int a, int b);

class fraction {
	int num;
	int den;
public:
	fraction(int a, int b);
	fraction();
	void set(int a, int b);
	void show();
	int get_num();
	int get_den();
	friend fraction operator+ (fraction& f1, fraction& f2);
	friend fraction operator- (fraction& f1, fraction& f2);
	friend fraction operator++ (fraction& f1, int);
	friend bool operator== (fraction& f1, fraction& f2);
	friend bool operator> (fraction& f1, fraction& f2);
	friend bool operator< (fraction& f1, fraction& f2);
};