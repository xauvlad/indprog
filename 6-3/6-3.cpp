#include "bay.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	ocean oc;
	cout << "Введите данные об океане (название, расположение, глубину, площадь): " << endl;
	cin >> oc;

	string o, sn;
	int g, p, l;
	cout << "Введите данные о море (название океана, название моря, глубину, площадь, длину береговой линии): " << endl;
	cin >> o >> sn >> g >> p >> l;
	sea s(o, sn, g, p, l);

	bay zaliv;
	cout << "Введите данные о заливе (океан, море, название залива, его протяженность и высоту): " << endl;
	cin >> zaliv;

	cout << oc;
	cout << s;
	cout << zaliv;
}
