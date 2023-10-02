// Exercise 10

#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14;

int main()
{
	double h1, h2;
	cout << "Enter the widths of bith hallways: " << endl;
	cin >> h1 >> h2;

	double pipeLength = 0;

	double l;
	double angle = 0.01;
	while (angle < PI / 2)
	{
		l = h1 / sin(angle) + h2 / cos(angle);
		if (l > pipeLength)
			pipeLength = l;
		angle = angle + 0.01; // precision is two decimal places

	}
	cout << "The max length of the pipe that can be carried level around the right-angled corner is: "
		<< static_cast <int> (pipeLength) << endl;


	return 0;
}