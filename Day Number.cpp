// Output the day number of the year

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string extractNumber(string date, string& nb);
int charToInt(char c);
int stringToInt(string s);
int addDays(int m, bool leap);

int main()
{

	string date;
	cout << "Enter the date in the following format: month-day-year: " << endl;
	getline(cin, date);

	string temp;
	string month, day, year;

	temp = extractNumber(date, month);
	year = extractNumber(temp, day);

	int m = stringToInt(month);
	int d = stringToInt(day);
	int y = stringToInt(year);

	if (m > 12 || d > 31)
	{
		cout << "Invalid date format!!" << endl;
		cout << "Program terminates!!" << endl;
		return 1;
	}


	// Leap year is divisible by 4, but not divisible by 100
	// If a year is divisible by 100 and divisible by 400, then it is a leap year
	// In a leap year: February has 29 days instead of 28

	bool isLeap = false;
	if ((y % 4 == 0) || (y % 100 == 0 && y % 400 == 0))
		isLeap = true;

	int dayCount = 0;
	int mCount = 1;
	while (mCount < m)
	{
		dayCount = dayCount + addDays(mCount, isLeap);
		mCount++;

	}
	dayCount = dayCount + d;

	cout << "The day number of the year is: " << dayCount << endl;

	return 0;
}

string extractNumber(string date, string& nb)
{
	int l = static_cast <int> (date.size());
	int dash = static_cast <int> (date.find('-', 0)); // position of first occurence of '-'
	nb = date.substr(0, dash);

	return date.substr(dash + 1, l - dash - 1);

}

int charToInt(char c)
{
	switch (c)
	{
	case '0':
		return 0;
	case '1':
		return 1;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 5;
	case '6':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	}
}

int stringToInt(string s)
{
	int nb = 0;
	int l = static_cast <int> (s.size());
	for (int i = l - 1; i >= 0; i--)
	{
		nb = nb + (charToInt(s[i]) * pow(10, l - i - 1));

	}
	return nb;
}

int addDays(int m, bool leap)
{
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 2:
		if (leap == true)
			return 29;
		else return 28;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;


	}
}