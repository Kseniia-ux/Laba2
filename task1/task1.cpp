
#include "pch.h"
#include <iostream>
using namespace std;
bool isInArea(double x, double y)
{
	double circle = sqrt(pow(x, 2) + pow(y, 2));
	return ((circle <= 1 && (x >= -1 && x <= 1 & y > -1 & y <= 1) || (x >= -1 && x <= 1 && y <= 0 && y < -1) || (y == -1 && x < 1 && x> -1)));
}
void main()
{
	double x, y;
		cout << "Enter x y\n";
	cin >> x >> y;
	if (isInArea(x, y) == 0) cout << "0";
	else cout << "1";
}