#include <iostream>

using namespace std;

int main()
{
	double chess;
	cout << "Enter the number of squares in a chess board: " << endl;
	cin >> chess;

	double squares = 1;
	double current = 1;
	double total = 1;

	while (squares <= chess)
	{
		squares++;
		current = current * 2;
		total = total + current;

		//cout << "We are in square number " << squares << endl;
		//cout << "The amount of rice added is " << current << endl;
		//cout << "The total amount of rice is: " << total << endl;
		//cout << endl;

	}

	cout << "The total amount of rice requested is:  " << total << endl;



	return 0;

}