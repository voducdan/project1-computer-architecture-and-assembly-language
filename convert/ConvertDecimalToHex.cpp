#include "header.h"
vector<string> ConvertDecimalToHex(string DecimalString) {
	vector<int> toBin;
	toBin = ConvertDecimalToBinary(DecimalString);
	vector<string> result = ConvertBinToHex(VectorToString(toBin));
	return result;
}