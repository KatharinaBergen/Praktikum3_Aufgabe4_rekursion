/*
Author: Kat Bergen
12.06.2020 V1

body Numbers class, handeling input, sum calculation, output

details:
1 User to input numbers stored in vector.
2 User to input index up to which the numbers in the vector will be added
3 function to add numbers returns result
4 output of all numbers so as to visualize caluclation operation to user
5 final output see main()

P3A4
*/

#include "Numbers.h"
#include "MyErrors.h"
using std::cin;
using std::cout;


//standard constructor
Numbers::Numbers() : numbers{}, index{}
{}

//test case constructor (only used in Test.cpp)
Numbers::Numbers(const std::vector<double>& numbers, const int& index) : numbers{ numbers }, index{ index }
{}

//get index for calculation
int Numbers::getIndex() { return index; }

//add number to vector with cin
void Numbers::inputNumbers()
{
	cout << "Please add individual floats or integers to be added. When you are done adding numbers, please type 'q'.\n" << std::endl;
	char ch{};
	double number{};

	do {
		cout << '>';
		cin >> ch;
		cin.putback(ch); //save input in cin

		if (ch != 'q') //programm stops if 'q', see while condition
		{
			cin >> number;
			numbers.push_back(number); //if program should not stop, add cin to number
		}

		if (!cin) error("\n\nNumbers::inputNumbers(), Not a number.\n\n");


		cin.ignore();

	} while (ch != 'q');

}

void Numbers::inputIndex()
{
	cout << "\nYou have added " << numbers.size() << " numbers. How many would you like to add, starting with the first number?" << std::endl;
	cout << '>';
	cin >> index;

	if (!cin) error("\n\nNumbers::inputIndex(), Not an index.\n\n");
	if (index > numbers.size()) error("\n\nNumbers::inputIndex(), Index out of range.\n\n");
}

//calculation add numbers of vector up to index passed
double Numbers::result(int& idx, double& equals)
{
	if (idx >= 0)
	{
		equals += numbers.at(idx);
		idx--;
		return result(idx, equals);
	}

	else
		return equals;
	
}

//print n numbers of vector
void Numbers::print()
{
	for (unsigned int i{}; i < index; i++)
	{
		std::cout << '+' << numbers.at(i);
	}
}

