//Fraction calculator

#include <iostream>

using namespace std;

void menu(int& num1, int& denom1, int& num2, int& denom2, char& op);
void addFractions(int n1, int d1, int n2, int d2, int& n, int& d);
void subtractFractions(int n1, int d1, int n2, int d2, int& n, int& d);
void multiplyFractions(int n1, int d1, int n2, int d2, int& n, int& d);
void divideFractions(int n1, int d1, int n2, int d2, int& n, int& d);

int main()
{
	int n1, d1, n2, d2;
	int n, d;
	char operation;
	menu(n1, d1, n2, d2, operation);
	switch (operation)
	{
	case '+':
		addFractions(n1, d1, n2, d2, n, d);
		break;
	case '-':
		subtractFractions(n1, d1, n2, d2, n, d);
		break;
	case '*':
		multiplyFractions(n1, d1, n2, d2, n, d);
		break;
	case '/':
		divideFractions(n1, d1, n2, d2, n, d);

	}
	cout << n1 << " / " << d1 << " " << operation << " " << n2 << " / "
		<< d2 << " = " << n << " / " << d << endl;




	return 0;
}

void menu(int& num1, int& denom1, int& num2, int& denom2, char& op)
{
	cout << "This prgram allows you to perform arithmetic operations on fractions." << endl;
	cout << "Fractions consist of numerator and denominator that is different than 0." << endl;
	cout << "Enter numerator and denominator of the first operand: " << endl;
	cin >> num1 >> denom1;
	cout << "Enter numerator and dominator of the second operand: " << endl;
	cin >> num2 >> denom2;
	while (denom1 == 0 || denom2 == 0)
	{
		cout << "Denominators should be different than 0. Enter denomnators of both operands again: " << endl;
		cin >> denom1 >> denom2;

	}
	cout << "Choose an operation (+,-,* or /): " << endl;
	cin >> op;
	while (cin)
	{
		if (op != '+' && op != '-' && op != '*' && op != '/')
		{
			cout << "Invalid operation. Choose again: " << endl;
			cin >> op;
		}
		else
			break;
	}

}

void addFractions(int n1, int d1, int n2, int d2, int& n, int& d)
{
	n = n1 * d2 + n2 * d1;
	d = d1 * d2;
}

void subtractFractions(int n1, int d1, int n2, int d2, int& n, int& d)
{
	n = n1 * d2 - n2 * d1;
	d = d1 * d2;
}
void multiplyFractions(int n1, int d1, int n2, int d2, int& n, int& d)
{
	n = n1 * n2;
	d = d1 * d2;
}
void divideFractions(int n1, int d1, int n2, int d2, int& n, int& d)
{
	n = n1 * d2;
	d = d1 * n2;
}