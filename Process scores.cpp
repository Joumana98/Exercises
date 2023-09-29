// Exercise 6

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void CalculateAverage(ifstream& inFile, ofstream& outFile, string& name, int scoresNb, double& avg);
char calculateGrade(double avg);

int main()
{
	ifstream inFile;
	ofstream outFile;

	inFile.open("C:\\inData.txt");
	if (!inFile)
	{
		cout << "The file does not exist!!" << endl;
		cout << "The program terminates!!" << endl;
		return 1;
	}

	int scoresNb;
	cout << "Enter the number of test scores for each student: " << endl;
	cin >> scoresNb;

	outFile.open("C:\\outData.txt");
	// Print header
	outFile << left << setw(15) << "Student";
	int i = 0;
	while (i < scoresNb)
	{
		outFile << left << setw(4) << "Test"
			<< setw(2) << i + 1 << " ";
		i++;
	}
	outFile << "Average  Grade" << endl;



	double classAverage = 0;
	int stdCount = 0;
	// Process each student
	string name;
	double average;
	CalculateAverage(inFile, outFile, name, scoresNb, average);
	while (inFile)
	{
		classAverage = classAverage + average;
		stdCount++;
		outFile << right << setw(1) << " "
			<< left << setw(4) << average
			<< setw(5) << " "
			<< left << setw(3) << calculateGrade(average) << endl;

		CalculateAverage(inFile, outFile, name, scoresNb, average);

	}
	outFile << endl;
	outFile << "Class Average = " << classAverage / stdCount;


	return 0;
}

void CalculateAverage(ifstream& inFile, ofstream& outFile, string& name, int scoresNb, double& avg)
{
	double sum = 0;
	int count = 0;

	double score;

	inFile >> name;
	if (inFile) {
		outFile << left << setw(16) << name;

		count = 0;
		while (count < scoresNb)
		{
			inFile >> score;
			outFile << left << setw(7) << score;
			sum = sum + score;

			count++;
		}


		avg = sum / scoresNb;
	}
	else
		return;

}

char calculateGrade(double avg)
{
	switch (static_cast <int>(avg) / 10)
	{
	case 10:
	case 9:
		return 'A';
	case 8:
		return 'B';
	case 7:
		return 'C';
	case 6:
		return 'D';
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		return 'F';

	}
}
