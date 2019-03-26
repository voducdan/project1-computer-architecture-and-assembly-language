#include "header.h"
string ConvertHexToDec(string hexString) {
	int length = hexString.length();
	double count = 0;
	int temp = length - 1;
	for (size_t i = 0; i < length; i++)
	{
		count += HexElementInDec(hexString[i]) * Exponential(16, temp);
		temp--;
	}
	return to_string(count);
}