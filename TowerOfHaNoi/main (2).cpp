//gia minh
// 03/06/2021

#include <iostream>
#include "input.h"
#include <string>
#include <iomanip>
#include <string>
using namespace std;

void DisplayTower(string* array, int size);
void addDisk(string* array, int size);
void displayArray(string* array, int size);

int main()
{
	int numberOfDisk = inputInteger("Enter the number of rings (1..64) to begin: ", 1, 64);

	string* tower1 = new string[numberOfDisk];
	
	
	addDisk(tower1, numberOfDisk);
	
	DisplayTower(tower1,numberOfDisk);
	return 0;
}

void addDisk(string* array, int size)
{
	for (int i = 1; i <= size; i++)
	{
		*array = string(i, 223);
		array++;
	}
}

void displayArray(string* array, int size)
{
	for (int i = 1; i <= size; i++)
	{
		cout << *array;
		if (i <= size - 1)
			cout << "\n";
		array++;
	}
}

void DisplayTower(string* array, int size)
{
	//cout << "\n" << setw(17) << char(186) << setw(28) << char(186) << setw(27) << char(186);

	char* tower1 = new char[size];

	fill(tower1, tower1 + size, char(186));
	int value = 0;
	string sideDisk = string(value, 223);

	if (size < 10)
	{
		cout << "\n" << setw(17) << char(186) << setw(28) << char(186) << setw(27) << char(186);
		for (int i = 1; i <= size; i++)
		{
			cout << "\n" << setw(16) << array[i-1] << i << array[i-1];
			// tower2
			cout << setw(28-i) << char(186);
			//tower3
			cout << setw(27) << char(186);
		}
		cout << "\n" << setw(16) << char(205) << char(202) << char(205);
		cout << setw(26) << char(205) << char(202) << char(205);
		cout << setw(25) << char(205) << char(202) << char(205) << "\n";
	}
	else
	{
		cout << "\n" << setw(16) << char(186) << setw(28) << char(186) << setw(27) << char(186);
		for (int i = 1; i <= size; i++)
		{
			cout << "\n" << setw(16) << i;
			cout << setw(28) << char(186);
			cout << setw(27) << char(186);
		}
		cout << "\n" << setw(15) << char(205) << char(202) << char(205);
		cout << setw(26) << char(205) << char(202) << char(205);
		cout << setw(25) << char(205) << char(202) << char(205) << "\n";
	}
}