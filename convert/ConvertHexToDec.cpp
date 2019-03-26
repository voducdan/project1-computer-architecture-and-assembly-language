#include "header.h"
string ConvertHexToDec(string hexString) {
	int length = hexString.length() - 1;
	string hexToBin = ConvertHexToBin(hexString);
	if (hexToBin.length() < 128) {
		int length = hexToBin.length();
		for (size_t i = 0; i < 128 - length; i++)
		{
			hexToBin.insert(0, 1, '0');
		}
	}
	return ConvertBinToDecimal(hexToBin);
}