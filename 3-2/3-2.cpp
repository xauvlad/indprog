#include "fraction.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cin >> n;
	int a, b;
	fraction* arr = new fraction[n];
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		arr[i].set(a, b);
		arr[i].show();
	}
	(arr[0] + arr[1]).show();
	cout << (arr[0] > arr[1]) << endl << (arr[0] < arr[1]) << endl << (arr[0] == arr[1]) << endl;
	(arr[0]++.show());
}
