#include "header.h"
string convertfromfile(int p1, int p2, string input) {
	if (p1 == 2) {
		if (p2 == 2)
		{
			while (input[0] == '0')
				input.erase(0, 1);
			return input;
		}
		else if (p2 == 10)
			return ConvertBinToDecimal(input);
		else {
			vector<string> result = ConvertBinToHex(input);
			string s = "";
			for (size_t i = 0; i < result.size(); i++)
			{
				s += result[i];
			}
			return s;
		}
	}
	else if (p1 == 10) {
		if (p2 == 10)
		{
			while (input[0] == '0')
				input.erase(0, 1);
			return input;
		}
		else if (p2 == 2)
		{
			vector<int> result = ConvertDecimalToBinary(input);
			return VectorToString(result);
		}
		else
		{
			vector<string> result = ConvertDecimalToHex(input);
			string s;
			for (size_t i = 0; i < result.size(); i++)
			{
				s += result[i];
			}
			return s;
		}
	}
	else {
		if (p2 == 16)
		{
			while (input[0] == '0')
				input.erase(0, 1);
			return input;
		}
		else if (p2 == 2)
			return ConvertHexToBin(input);
		else return ConvertHexToDec(input);
	}
}