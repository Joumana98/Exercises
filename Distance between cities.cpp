
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector <double> v;
	for (double x; cin >> x;)
		v.push_back(x);

	double sum = 0;
	for (double x : v)
		sum += x;
	cout << "The total distance is: " << sum << endl;

	double shortest = 0;
	double longest = 0;

	for (double d : v)
	{
		if (d < shortest)
			shortest = d;
		else if (d > longest)
			longest = d;
	}
	cout << "Te shortest distance between the to cities is: " << shortest << endl;
	cout << "the longest distance between th two cities is: " << longest << endl;

	if (v.size() % 2 != 0)
		cout << "The median distance betwen the two cities is: " << v[v.size() / 2] << endl;
	else
	{
		//sort(v);
		cout << "The median distance between the two cities is: " << (v[(v.size() / 2) - 1] + v[v.size() / 2]) / 2.0 << endl;
	}

	return 0;
}