#include "header.h"
void convertfromfile(int p1, int p2, string input) {
	if (p1 == 2) {
		if (p2 == 2)
			cout << input;
		else if (p2 == 10)
			cout << ConvertBinToDecimal(input);
		else PrintStringVector(ConvertBinToHex(input));
	}
	else if (p1 == 10) {
		if (p2 == 10)
			cout << input;
		else if (p2 == 2)
			PrintIntVector(ConvertDecimalToBinary(input));
		else PrintStringVector(ConvertDecimalToHex(input));
	}
	else {
		if (p2 == 16)
			cout << input;
		else if (p2 == 2)
			cout << ConvertHexToBin(input);
		else cout << ConvertHexToDec(input);
	}
}