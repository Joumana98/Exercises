#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

const double M_TO_CM = 100;
const double INCH_TO_CM = 2.54;
const double FEET_TO_INCH = 12;

double convert_to_cm(double x, string unit)
{
	if (unit == "cm")
		return x;
	else if (unit == "m")
		return x * M_TO_CM;
	else if (unit == "in")
		return x * INCH_TO_CM;
	else if (unit == "ft")
		return x * FEET_TO_INCH * INCH_TO_CM;
	else
		return -1;

}

int main()
{
	double x, length;
	string unit;
	vector <double> values;

	cout << "Enter a length followed by its unit (cm, m, in or ft): " << endl;
	cin >> x;
	getline(cin, unit);
	length = convert_to_cm(x, unit);

	double smallest = length, largest = length;
	string s_unit = unit, l_unit = unit;

	double sum = 0;
	int counter = 0;

	while (cin)
	{
		if (length == -1)
		{
			cout << "The unit entered is invalid. " << endl;
			cout << "Enter a new length followed by its unit(cm, m or in, ft): " << endl;
			cin >> x;
			getline(cin, unit);
			length = convert_to_cm(x, unit);
			continue;

		}
		else {
			sum = sum + length;
			counter++;
			values.push_back(length / M_TO_CM);
			cout << "The number entered is: " << x << " " << unit << endl;
			if (length < smallest)
			{
				smallest = length;
				s_unit = unit;
				cout << "The smallest number entered so far is: " << x << " " << s_unit << endl;
			}


			if (length > largest)
			{
				largest = length;
				l_unit = unit;
				cout << "The largest number entered so far is: " << x << " " << l_unit << endl;
			}

			cout << "Enter a new length followed by its unit(cm, m or in, ft): " << endl;
			cin >> x;
			getline(cin, unit);
			length = convert_to_cm(x, unit);
		}
	}
	//sort(values);
	for (double n : values)
		cout << n << " ";
	cout << endl;
	cout << "The number of the entered values is: " << counter << "." << endl;
	cout << "The sum of the entered numbers is: " << sum / M_TO_CM << " m." << endl;
	cout << "The smallest value enetered is: " << smallest / M_TO_CM << " m." << endl;
	cout << "The larget value entered is: " << largest / M_TO_CM << " m." << endl;

	return 0;


}