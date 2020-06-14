/*
Author: Kat Bergen
12.06.2020 V1

header Numbers class, handeling input, sum calculation, output

details:
1 User to input numbers stored in vector.
2 User to input index up to which the numbers in the vector will be added
3 function to add numbers returns result
4 output of all numbers so as to visualize caluclation operation to user
5 final output see main()

P3A4
*/



#pragma once
#include <iostream>
#include <vector>

class Numbers {

private:

	std::vector<double> numbers;
	int index;

public:

	Numbers(); //standard constructor
	Numbers(const std::vector<double>&, const int&); //test case constructor
	int getIndex();

	void inputNumbers(); //user input add number to vector
	void inputIndex(); //user input index up to which the numbers in vector to be added

	double result(int&, double&); //calculation add numbers of vector up to index passed
	void print(); //print n numbers of vector

};