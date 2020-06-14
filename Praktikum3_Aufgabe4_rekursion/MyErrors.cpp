/*
Author: Kat Bergen
12.06.2020 V1

body error handeling

P3A4
*/



#include "MyErrors.h"

void error(const std::string& s)
{
	throw std::runtime_error{ s };
}