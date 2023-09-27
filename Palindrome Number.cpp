// Palindrome Number

#include <iostream>
#include <cmath>

using namespace std;

int degree(int n);
bool isEqual(int n, int d);

int main()
{
	int nb;
	cout << "Enter the number to check: " << endl;
	cin >> nb;
	if (nb < 0)
	{
		cout << "This number is not palindrome!!" << endl;
	}
	else {

		int deg;
		deg = degree(nb);

		int temp = nb;
		while (temp >= 10)
		{
			if (isEqual(temp, deg) == true)
			{
				temp = temp % static_cast<int>(pow(10, deg));
				temp = temp / 10;
				deg = deg - 2;
			}
			else
			{
				cout << "This number is not palindrome!!" << endl;
				break;
			}
		}

		if (temp < 10)
			cout << "This number is palindrome!!" << endl;

	}



	return 0;
}

int degree(int n)
{
	int d = 0;
	int temp = n;
	while (temp <= n)
	{
		temp = n % static_cast<int>(pow(10, d + 1));
		if (temp == n)
			break;
		d++;
	}

	return d;

}


bool isEqual(int n, int d)
{
	if ((n % 10) == (n / static_cast<int>(pow(10, d))))
		return true;
	return false;
}