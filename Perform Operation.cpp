#include <iostream>

using namespace std;

int digit(string number)
{
	if (number == "0" || number == "zero")
		return 0;
	else if (number == "1" || number == "one")
		return 1;
	else if (number == "2" || number == "two")
		return 2;
	else if (number == "3" || number == "three")
		return 3;
	else if (number == "4" || number == "four")
		return 4;
	else if (number == "5" || number == "five")
		return 5;
	else if (number == "6" || number == "six")
		return 6;
	else if (number == "7" || number == "seven")
		return 7;
	else if (number == "8" || number == "eight")
		return 8;
	else if (number == "9" || number == "nine")
		return 9;

}

int main()
{
	int op1, op2;
	string number;
	char oper;

	cout << "Enter the first operand as a single digit or in letters: " << endl;
	cin >> number;
	op1 = digit(number);
	cout << "Enter the second operand as a single digit or in letters: " << endl;
	cin >> number;
	op2 = digit(number);

	cout << "Enter the operation to perform: " << endl;
	cin >> oper;

	switch (oper)
	{
	case '+':
		cout << "The sum of " << op1 << " and " << op2 << " is " << op1 + op2 << endl;
		break;
	case '-':
		cout << "The subtraction of " << op1 << " and " << op2 << " is " << op1 - op2 << endl;
		break;
	case '*':
		cout << "The multiplication of " << op1 << " and " << op2 << " is " << op1 * op2 << endl;
		break;
	case '/':
		cout << "The division of " << op1 << " and " << op2 << " is " << static_cast <double> (op1) / static_cast <double> (op2) << endl;
		break;

	}



	return 0;
}