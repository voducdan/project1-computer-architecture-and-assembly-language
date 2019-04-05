#include "header.h"
string ConvertHexToDec(string hexString) {
	string hexToBin = ConvertHexToBin(hexString);
	return ConvertBinToDecimal(hexToBin);
}