#include "pch.h"
#include <iostream>


using namespace std;

 bool isInArea(double x, double y)
{
	double circle = sqrt(pow(x, 2) + pow(y, 2));
	return ((circle <= 1 && (x >= -1 && x <= 1 & y > -1 & y <= 1) || (x >= -1 && x <= 1 && y <= 0 && y < -1) || (y == -1 && x < 1 && x> -1)));
}

void task1()
{
	double x, y;
	cout << "Enter x y\n";
	cin >> x >> y;
	if (isInArea(x, y) == 0) cout << "0";
	else cout << "1";
}

double f(double x)
{
	return (x <= 3) ? pow(x, 2) - 3 * x + 9 : 1 / (pow(x, 3) + 6);
}

void task2()
{
	double x;
	cout << "x= ";
	cin >> x;
	cout << f(x);
}
