#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{

	vector <string> disliked = { "One", "Two", "Three" };

	vector <string> words;
	bool isDisliked;

	for (string temp; cin >> temp;)
	{
		isDisliked = false;
		for (string x : disliked)
		{
			if (temp == x)
			{
				words.push_back("BLEEP");
				isDisliked = true;
				break;
			}
		}
		if (isDisliked == false)
			words.push_back(temp);
	}

	for (string x : words)
		cout << x << endl;

	return 0;
}
