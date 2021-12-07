// lab13.1.cpp
// <Сташкевич Владислав>
// Лабораторна робота № 13.1
// Освоїти використання модулів С++ та просторів імен. Навчитися створювати багатомодульні С++ проекти.
// Варіант 19

#include <iostream>
#include <iomanip>

#include "init.h"
#include "add.h"
#include "sum.h"

using namespace std;

using namespace nsInit;
using namespace nsAdd;
using namespace nsSum;

int main() {
	cout << "Enter first x: ";	cin >> xFirst;
	cout << "Enter last x: ";	cin >> xLast;
	cout << "Enter dx: ";		cin >> dx;
	cout << "Enter eps: ";		cin >> eps;

	cout << fixed;
	cout << "-----------------------------------------\n";
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "arcsin(x)" << " |"
		<< setw(10) << "Sum" << " |"
		<< setw(5)  << "n" << " |\n";
	cout << "-----------------------------------------\n";

	for (x = xFirst; x <= xLast; x += dx) {
		Sum();

		cout << "|" << setw(7) << setprecision(2) << x		 << " |"
				   << setw(10) << setprecision(5) << asin(x) << " |"
			       << setw(10) << setprecision(5) << S		 << " |"
				   << setw(5)					  << n		 << " |\n";
	}

	cout << "-----------------------------------------\n";

	return 0;
}
