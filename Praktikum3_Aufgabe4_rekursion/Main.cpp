/*
Author: Kat Bergen
12.06.2020 V1

input Numbers vector output sum of n Numbers

P3A4
*/

#include <exception>
#include "myerrors.h"
#include "numbers.h"
using std::cout;

int main() try
{
	Numbers numberslist{}; //initialize vector holding numbers to be added

	numberslist.inputNumbers(); //user input numbers to vector
	numberslist.inputIndex(); //user input index to add numbers up to

	int index = numberslist.getIndex() -1;
	double result{};

	numberslist.print(); //output all numbers that were added
	cout << " = " << numberslist.result(index, result) << std::endl; //output result


	return 0;
}
catch (const std::exception& e)
{
	std::cerr << e.what();
}
catch (...)
{
	std::cerr << "unknown error";
}