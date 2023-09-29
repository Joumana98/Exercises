#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> numbers;
	for (int i; cin >> i;)
		numbers.push_back(i);

	int mode;
	int occ = 0;
	int prevOcc = 0;

	for (int x : numbers)
	{
		prevOcc = 0;
		for (int y = 0; y < numbers.size(); y++)
		{
			if (numbers[y] == x)
				prevOcc++;
		}

		if (prevOcc > occ)
		{
			occ = prevOcc;
			mode = x;
		}

	}
	cout << "The mode of the entered set of numbers is: " << mode << endl;
	cout << "The number of occurence of this value is: " << occ << endl;


	return 0;
}