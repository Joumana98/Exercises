#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n)
{
	bool isPrime = true;
	int i = 2;
	while (i < n)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
		i++;

	}
	return isPrime;
}

int main()
{
	int max;
	cout << "Enter the maximum number to check: " << endl;
	cin >> max;
	cout << "checking" << endl;

	vector <int> primes;
	for (int i = 1; i <= max; i++)
	{
		if (isPrime(i) == true)
			primes.push_back(i);
	}

	for (int x : primes)
		cout << x << " ";

	return 0;
}
