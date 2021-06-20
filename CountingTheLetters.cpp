// CountingTheLetters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Shayla Zilinsky
// ITCS 2530
// 06/17/2021
// Description: This program is used to count the number of specified letters in a file.
// This includedes A's, E's, I's, O's, U's, S's, J's and Z's.
// It then takes those counts and calculates the total of the specified letter count for the whole document.

// header files that are needed
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

// declaring variables of the vowels as ints, starting at 0
int A = 0;
int E = 0;
int I = 0;
int O = 0;
int U = 0;
int S = 0;
int J = 0;
int Z = 0;
// const ints to get rid of magic numbers for setw()
int introSet = 50;
int introHalf = 8;
int vowelSet = 35;

//      # of params - array of strings   
int main(int argc, char* argv[])
{
	// using code from sample source code
	if (argc < 2)
	{
		cout << "Error with input args.." << endl;
		return 1;
	}

	// code from sample source file again
	// for debugging purposes only
	for (int i = 0; i < argc; i++)
	{
		cout << i << ":" << argv[i] << endl;
	}

	// to open the file to analyze, use ifstream
	ifstream inFile;
	inFile.open(argv[1]);
	if (!inFile)
	{
		cout << "Error with file name.." << endl;
	}

	// introduction print statement
	cout << setw(introSet) << setfill('*') << "" << endl;
	cout << setw(introHalf) << "";
	cout << "Welcome to my Letter Count Program" << setw(8) << "" << endl;
	cout << setw(introSet) << setfill('*') << "" << endl;

	// setting the char to vowel 
	char vowels;

	// reading the lines of file to find vowels
	while (!inFile.eof() && inFile >> vowels)
	{
		// switch statement to count the vowels
		switch (vowels)
		{
			// adds both upper and lowercase a's
		case 'a':
		case 'A':
			A++;
			break;
			// adds both upper and lowercase e's
		case 'e':
		case 'E':
			E++;
			break;
			// adds both upper and lowercase i's
		case 'i':
		case 'I':
			I++;
			break;
			// adds both upper and lowercase o's
		case 'o':
		case 'O':
			O++;
			break;
			// adds both upper and lowercase u's
		case 'u':
		case 'U':
			U++;
			break;
		case 's':
		case 'S':
			S++;
			break;
		case 'j':
		case 'J':
			J++;
			break;
		case 'z':
		case 'Z':
			Z++;
			break;
		}
	}

	// print statement for the analaysis of the file
	cout << "Analyzing file '" << argv[1] << "'..." << endl;

	// final print statements of vowel counts and total vowels
	cout << "The number of A's: " << setfill('.') << setw(vowelSet) << A << endl;
	cout << "The number of E's: " << setw(vowelSet) << E << endl;
	cout << "The number of I's: " << setw(vowelSet) << I << endl;
	cout << "The number of O's: " << setw(vowelSet) << O << endl;
	cout << "The number of U's: " << setw(vowelSet) << U << endl;
	cout << "The number of S's: " << setw(vowelSet) << S << endl;
	cout << "The number of J's: " << setw(vowelSet) << J << endl;
	cout << "The number of Z's: " << setw(vowelSet) << Z << endl;
	// calculate the total number of vowels
	int totalCount = A + E + I + O + U + S + J + Z;
	cout << "The total count is: " << setw(vowelSet) << totalCount << endl;

	// pausing
	system("pause");
	// closing out the open file
	inFile.close();
	return 0;
}
