#pragma once
#include "water.h"


class sea : public ocean {
protected:
	ocean* oc;
	string sname;
	int sdepth, ssquare, cline;
public:
	sea();
	sea(string n, string l, int d, int s);
	friend ostream& operator<< (ostream& stream, sea o);
	friend istream& operator>> (istream& stream, sea& o);
};