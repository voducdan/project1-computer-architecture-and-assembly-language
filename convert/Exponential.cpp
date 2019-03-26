#include "header.h"
double Exponential(int number, int index) {
	double result = 1;
	if (index == 0) return 1;
	for (size_t i = 0; i < index; i++)
	{
		result *= number;
	}
	return result;
}