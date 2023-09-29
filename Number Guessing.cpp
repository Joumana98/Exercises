
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int number;
	int l1 = 1, l2 = 101;
	string answer;

	cout << "Think of a number between 1 and 100. " << endl;
	cout << "Answer the following questions by yes or no." << endl;

	while (fabs(l2 - l1) > 1)
	{
		cout << "Is the number you are thinking of less than " << (l1 + l2) / 2 << " ?" << endl;
		cin >> answer;
		if (answer == "yes")
			l2 = (l1 + l2) / 2;
		else
			l1 = (l1 + l2) / 2;
	}
	cout << "The number you are thinking of is: " << l1 << endl;

	return 0;
}