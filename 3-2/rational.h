#pragma once

int nod(int a, int b);

class rational {
	int a;
	int b;
public:
	rational(int _a, int _b);
	rational();
	void set(int _a, int _b);
	void show();
	int get_num();
	int get_den();
	friend rational operator+ (rational& f1, rational& f2);
	friend rational operator- (rational& f1, rational& f2);
	friend const rational operator++ (rational& f1);
	friend const rational operator++ (rational& f1, int);
	friend bool operator== (rational& f1, rational& f2);
	friend bool operator> (rational& f1, rational& f2);
	friend bool operator< (rational& f1, rational& f2);
	rational operator= (rational f2);
};