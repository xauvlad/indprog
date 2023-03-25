#include "frustum.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "Введите количество конусов: " << endl;
	cin >> n;
	cone* arr = new cone[n];
	for (int i = 0; i < n; i++) {
		cout << "Введите координаты центра основания, радиус основания и высоту " << i + 1 << " конуса: " << endl;
		cin >> arr[i];
		cout << arr[i];
		cout << "Объём: " << arr[i].volume() << endl;
		cout << "Площадь поверхности: " << arr[i].area() << endl;
	}
	delete[] arr;
	cout << "Введите количество усечённых конусов: " << endl;
	cin >> n;
	frustum* arr1 = new frustum[n];
	double a, b, c, r, r2, h;
	for (int i = 0; i < n; i++) {
		cout << "Введите координаты центра основания, радиус нижнего и верхних оснований и высоту " << i + 1 << " усечённого конуса: " << endl;
		cin >> arr1[i];
		cout << arr1[i];
		cout << "Объём: " << arr1[i].volume() << endl;
		cout << "Площадь поверхности: " << arr1[i].area() << endl;
	}
	delete[] arr1;
}
