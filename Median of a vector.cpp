#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <double> temps;
	for (double temp; cin >> temp; )
		temps.push_back(temp);

	double sum = 0;
	for (double x : temps)
		sum += x;

	cout << "The mean value of the vector is: " << sum / temps.size() << endl;


	// Median is a number that as many elements come before it in the sequence as come after it

	if (temps.size() % 2 != 0)
		cout << "The median value of the vector is: " << temps[temps.size() / 2] << endl;
	else
	{
		// sort(temps);
		cout << "The median value of the vector is: " << (temps[(temps.size() / 2) - 1] + temps[(temps.size() / 2)]) / 2.0 << endl;

	}

	return 0;
}