#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "stdafx.h"

using namespace std;
int main() {

	string line;		
	
	ifstream inFile("X:\example.in");
	ofstream outFile;


	if (inFile.is_open())
	{
		while (getline(inFile, line))
		{
			cout << line << '\n';
		}
		inFile.close();
	}

	else cout << "Unable to open file";

	outFile.open("X:\example.out");
	outFile << "Writing this to a file.\n" << line << endl;;
	outFile.close();
	system("pause");
	return 0;
}