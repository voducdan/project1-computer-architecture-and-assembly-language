#include "header.h"
vector<string> ConvertDecimalToHex(string DecimalString) {
	vector<int> toBin;
	if(DecimalString[0] != '-') toBin = DecToBin(DecimalString);
	else {
		DecimalString.erase(0, 1);
		toBin = ConvertDecimalToBinary(DecimalString);
	}
	vector<string> result = ConvertBinToHex(VectorToString(toBin));
	return result;
}