#include "header.h"
vector<int> ConvertDecimalToBinary(string decimalString) {
	vector<int> bin = DecToBin(decimalString);
	if (decimalString[0] != '-') return bin;
	vector<int> two = TwoComplement(bin);
	return two;
}