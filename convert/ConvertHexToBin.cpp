#include "header.h"
string ConvertHexToBin(string hexString) {
	int length = hexString.length();
	string binString = "";
	for (size_t i = 0; i < length; i++)
	{
		if (hexString[i] == '0')
			binString += "0000";
		else if (hexString[i] == '1')
			binString += "0001";
		else if (hexString[i] == '2')
			binString += "0010";
		else if (hexString[i] == '3')
			binString += "0011";
		else if (hexString[i] == '4')
			binString += "0100";
		else if (hexString[i] == '5')
			binString += "0101";
		else if (hexString[i] == '6')
			binString += "0110";
		else if (hexString[i] == '7')
			binString += "0111";
		else if (hexString[i] == '8')
			binString += "1000";
		else if (hexString[i] == '9')
			binString += "1001";
		else if (hexString[i] == 'A')
			binString += "1010";
		else if (hexString[i] == 'B')
			binString += "1011";
		else if (hexString[i] == 'C')
			binString += "1100";
		else if (hexString[i] == 'D')
			binString += "1101";
		else if (hexString[i] == 'E')
			binString += "1110";
		else if (hexString[i] == 'F')
			binString += "1111";
	}
	return binString;
}