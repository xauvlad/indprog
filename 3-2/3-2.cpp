#include "fraction.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "Введите количество дробей: " << endl;
	cin >> n;
	int a, b;
	fraction* arr = new fraction[n];
	for (int i = 0; i < n; i++) {
		cout << "Введите числитель и знаменатель для " << i + 1 << " дроби: " << endl;
		cin >> a >> b;
		arr[i].set(a, b);
		arr[i].show();
	}
	cout << "Сумма первой и второй дробей: " << endl;
	(arr[0] + arr[1]).show();
	cout
		<< "Первая дробь больше второй: " << (arr[0] > arr[1]) << endl 
		<< "Первая дробь меньше второй: " << (arr[0] < arr[1]) << endl 
		<< "Первая дробь равна второй: " << (arr[0] == arr[1]) << endl 
		<< "Первая дробь + 1/" << arr[0].get_den() << ": ";
	fraction temp = arr[0];
	temp++;
	temp.show();
	delete[] arr;
}
