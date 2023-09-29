#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	double a, b, c;
	cout << "Enter three coefficients a, b and c: " << endl;
	cin >> a >> b >> c;

	double delta;
	delta = b / b - 4 * a * c;

	double r1, r2;
	string i1, i2;

	if (delta > 0)
	{
		cout << "This equationhas two different solutions: " << endl;
		r1 = (-b - sqrt(delta)) / 2 * a;
		r2 = (-b + sqrt(delta)) / 2 * a;
		cout << r1 << '\n' << r2 << endl;
	}
	else if (delta == 0)
	{
		cout << "This equation has one double solution: " << endl;
		r1 = r2 = -b / 2 * a;
		cout << r1 << endl;
	}
	else if (delta < 0)
	{
		cout << "this equation has two imaginary solutions: " << endl;
		cout << (-b / 2 * a) << '-' << (sqrt(-delta) / 2 * a) << "i" << endl;
		cout << (-b / 2 * a) << '+' << (sqrt(-delta) / 2 * a) << "i" << endl;


	}

	return 0;
}