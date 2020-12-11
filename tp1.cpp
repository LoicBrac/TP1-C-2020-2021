#include "Date.h"
#include <iostream>

int main() {
	try
	{
		date::Date(12,6,4);
		return 0;
	}
	catch (const std::string msg)
	{
		std::cerr << msg << std::endl;
	}
	
}