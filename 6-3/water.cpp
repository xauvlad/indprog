#include "sea.h"

// Океан

ocean::ocean() {
	name = location = "Empty";
	depth = square = 0;
}

ocean::ocean(string n, string l, int d, int s) {
	name = n;
	location = l;
	depth = d;
	square = s;
}

ostream& operator<< (ostream& stream, ocean o) {
	stream << o.name << " " << o.location << " " << o.depth << " " << o.square << endl;
	return stream;
}

istream& operator>> (istream& stream, ocean o) {
	stream >> o.name >> o.location >> o.depth >> o.square;
	return stream;
}

// Море

sea::sea() : ocean() {
	oc = nullptr;
	sname = "Empty";
	sdepth = ssquare = cline = 0;
}

istream& operator>> (istream& stream, sea& s) {
	stream >> s.sname >> s.sdepth >> s.ssquare >> s.cline;
	return stream;
}

ostream& operator<< (ostream& stream, sea s) {
	stream << s.sname << " " << s.sdepth << " " << s.ssquare << " " << s.cline << endl << "Ocean: " << s.oc << endl;
	return stream;
}
