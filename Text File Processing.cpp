// Exercise 7

#include <iostream>
#include <fstream>

using namespace std;

void initialize(int& w, int& l, int& p);
void processBlank(ifstream& inFile, ofstream& outFile, int& w, char& c);
void copyText(ifstream& inFile, ofstream& outFile, char& c);
void updateCount(int& words, int& wordsInLine, int& l, int& p);
void printTotal(int w, int l, int p);

int main()
{
	int words, lines, paragraphs;
	initialize(words, lines, paragraphs);

	ifstream inFile;
	ofstream outFile;

	inFile.open("C:\\inData.txt");
	if (!inFile)
	{
		cout << "The program does not exist!!" << endl;
		cout << "Program terminates!!" << endl;
		return 1;
	}
	outFile.open("C:\\outData.txt");

	int wordsInLine = 0;
	char c;
	inFile.get(c);
	if (c != '\n')
		paragraphs++;
	while (inFile) // process all paragraph
	{
		outFile << c;
		while (c != '\n') // Process each line
		{
			processBlank(inFile, outFile, wordsInLine, c);
			copyText(inFile, outFile, c);
		}
		updateCount(words, wordsInLine, lines, paragraphs);
		inFile.get(c);

	}

	printTotal(words, lines, paragraphs);
	inFile.close();
	outFile.close();

	return 0;
}

void initialize(int& w, int& l, int& p)
{
	w = 0;
	l = 0;
	p = 0;
}

void processBlank(ifstream& inFile, ofstream& outFile, int& w, char& c)
{

	while (c == ' ' && c != '\n')
	{
		inFile.get(c);
		outFile << c;

	}
	if (inFile)
		w++;

}

void copyText(ifstream& inFile, ofstream& outFile, char& c)
{
	inFile.get(c);
	outFile << c;
	while (c != ' ' && c != '\n')
	{
		inFile.get(c);
		outFile << c;

	}

}

void updateCount(int& words, int& wordsInLine, int& l, int& p)
{
	if (wordsInLine == 0)
		p++;
	else
	{
		l++;
		words = words + wordsInLine;
		wordsInLine = 0;

	}

}

void printTotal(int w, int l, int p)
{
	cout << "The number of words is: " << w << endl;
	cout << "The number of lines is: " << l << endl;
	cout << "The number of paragraphs is: " << p << endl;
}