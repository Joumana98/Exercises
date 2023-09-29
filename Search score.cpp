#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string name;
	int value;

	vector <string>names;
	vector <int> scores;

	cout << "Enter a pair of name and value: " << endl;
	cin >> name >> value;

	while (name != "NoName" && value != 0)
	{
		names.push_back(name);
		scores.push_back(value);

		cin >> name;
		cin >> value;
	}
	bool isUnique = true;
	for (int j = 0; j < names.size(); j++)
	{
		for (int i = 1; i < names.size(); i++)
		{
			if (j == i)
				continue;
			else if (names[i] == names[j])
			{
				isUnique = false;
				break;
			}
		}
	}

	if (isUnique == false)
		cout << "Error: names are not unique!!" << endl;

	int n;
	cout << "Enter score: " << endl;
	cin >> n;
	bool found = false;
	for (int i = 0; i < scores.size(); i++)
	{
		if (scores[i] == n)
		{
			cout << "The corresponding name is: " << names[i] << endl;
			found = true;
		}
	}
	if (found == false)
		cout << "Score not found!!" << endl;



	return 0;
}