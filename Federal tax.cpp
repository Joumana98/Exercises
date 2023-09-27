// Calculate federal tax

#include <iostream>

using namespace std;

const double EXEMP_SINGLE = 4000;
const double EXEMP_MARRIED = 7000;
const double EXEMP_PER_PERSON = 1500;
const double PENSION_PLAN_RATE = 6;

void getData(char& status, int& ch, double& salary, double& p);
double taxAmount(double income, char status, int ch, double p);

int main()
{
	double income;

	char status;
	int childrenUnder14;

	double ppRate;

	getData(status, childrenUnder14, income, ppRate);
	cout << "The tax amount that you shoud pay is: " << taxAmount(income, status, childrenUnder14, ppRate);

	return 0;
}

void getData(char& status, int& ch, double& salary, double& p)
{
	cout << "Enter your Marital status (M or m for married and s or Sfor single): " << endl;
	cin >> status;

	switch (status)
	{
	case 'M':
	case 'm':
		double salary1, salary2;
		cout << "Enter the number of chilren under 14: " << endl;
		cin >> ch;
		cout << "Enter the salary of husband and wife (0 in case no salary): " << endl;
		cin >> salary1 >> salary2;
		salary = salary1 + salary2;
		break;

	case 's':
	case 'S':
		cout << "Enter your salary: " << endl;
		cin >> salary;
		break;
	default:
		cout << "Invalid Input!" << endl;
	}
	cout << "Enter percentage of gross income contributed to a pension fund: " << endl;
	cin >> p;
}

double taxAmount(double income, char status, int ch, double p)
{
	double taxableAmount = income;
	switch (status)
	{
	case 'M':
	case 'm':
		taxableAmount = taxableAmount - EXEMP_MARRIED - (2 + ch) * EXEMP_PER_PERSON;
		break;
	case 's':
	case 'S':
		taxableAmount = taxableAmount - EXEMP_SINGLE - EXEMP_PER_PERSON;
	}
	taxableAmount = taxableAmount * (1 - p / 100.0);

	if (taxableAmount >= 0 && taxableAmount <= 15000)
		return taxableAmount * 15.0 / 100.0;
	else if (taxableAmount >= 15001 && taxableAmount <= 40000)
		return 2250 + (taxableAmount - 15000) * (25.0 / 100.0);
	else if (taxableAmount > 40000)
		return 8460 + (taxableAmount - 40000) * (35.0 / 100.0);


}