// Exercise 9

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double MILE_TO_FEET = 5280;

int main()
{
	cout << fixed << showpoint << setprecision(2);
	double width;
	cout << "Enter the width of the river in miles: " << endl;
	cin >> width;

	width = width * MILE_TO_FEET;

	double dFactory;
	cout << "Enter the distance of the factory downstream on the other side of the river in miles: " << endl;
	cin >> dFactory;

	dFactory = dFactory * MILE_TO_FEET;

	double waterLineCost, landLineCost;
	cout << "Enter the cost of laying the power line under water per foot: " << endl;
	cin >> waterLineCost;
	cout << "Enter the cost of laying the power line oner land per foot: " << endl;
	cin >> landLineCost;

	double wLength = width;
	double lLength = dFactory;

	double minCost = wLength * waterLineCost + lLength * landLineCost;
	double w, l;

	double cost;

	while (lLength >= 0)
	{
		lLength = lLength - 0.01; //output will be set to 2 decimal places
		wLength = sqrt(pow(width, 2) + pow(dFactory - lLength, 2));

		cost = wLength * waterLineCost + lLength * landLineCost;

		if (cost < minCost)
		{
			minCost = cost;
			w = wLength;
			l = lLength;
		}


	}

	cout << "The min cost of the power line installation is: " << minCost << endl;
	cout << "The length of the power line that should be installed under water is: " << w << endl;
	cout << "The length of the power line that should be intalled on land is: " << l << endl;




	return 0;
}