#include "equation.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	equation arr[2];
	double a, b, c;
	for (int i = 0; i < 2; i++) {
		cout << "Введите коэффициенты a, b, c для " << i + 1 << "-го уравнения:" << endl;
		cin >> a >> b >> c;
		arr[i].set(a, b, c);
		cout << "Решение " << i + 1 << " уравнения:" << endl;
		arr[i].find_X();
		cout << arr[i].find_Y() << endl;
	}
	equation eq3;
	eq3 = arr[0] + arr[1];
	cout << "Уравнение 1 + Уравнение 2: ";
	eq3.show();
}

