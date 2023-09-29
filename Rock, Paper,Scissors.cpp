#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
	vector <char> choices = { 'r','p','s' };
	char user;
	cout << "Enter your choice (r for rock, p for paper or  s for scissors): " << endl;
	cin >> user;
	cout << "Your choice: " << user << endl;
	char machine;
	machine = choices[rand() % 3];
	cout << "The machine's choice: " << machine << endl;
	cout << endl;

	switch (user)
	{
	case 'r':
		if (machine == 'r')
			cout << "Its is a tie!!" << endl;
		else if (machine == 'p')
			cout << "The machine wins!!" << endl;
		else
			cout << "You win!!" << endl;
		break;

	case 'p':
		if (machine == 'r')
			cout << "You win!!" << endl;
		else if (machine == 'p')
			cout << "It is a tie!!" << endl;
		else
			cout << "The machine wins!!" << endl;
		break;

	case 's':
		if (machine == 'r')
			cout << "The machine wins!!" << endl;
		else if (machine == 'p')
			cout << " You win!!" << endl;
		else
			cout << "It is a tie!!" << endl;
		break;

	default:
		cout << "Wrong input" << endl;

	}



	return 0;
}