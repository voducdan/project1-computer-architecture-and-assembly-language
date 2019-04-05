#include "header.h"
string ConvertBinToDecimal(string binString) {
	int len = 128 - binString.length();
	if (binString.length() < 128) {
		for (size_t i = 0; i < len; i++)
		{
			binString.insert(0, 1, '0');
		}
	}
	int length = 127;
	int index = 126;
	string max;
	string firstbit = string(1,binString[0]);
	max = findmul(firstbit, powerOfTwo(length));
	string count = "0";
	for (size_t i = 1; i <= length; i++)
	{
		string temp = findmul(string(1,(binString[i])), powerOfTwo(index));
		count = findsum(count, temp);
		index--;
	}
	if (max == "0")
		return count;
	else
		return "-" + findsub(max, count);
}