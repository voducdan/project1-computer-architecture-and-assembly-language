#include "header.h"
string powerOfTwo(int pow) {
	string result = "1";
	for (size_t i = 0; i < pow; i++)
	{
		result = findmul(result, "2");
	}
	return result;
}