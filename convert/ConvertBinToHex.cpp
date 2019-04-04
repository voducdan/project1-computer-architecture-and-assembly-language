#include "header.h"
vector<string> ConvertBinToHex(string binString) {
	if (binString.length() < 128) {
		int temp = 128 - binString.length();
		for (size_t i = 0; i < temp; i++)
		{
			binString.insert(0, 1, '0');
		}
	}
	int length = binString.length();
	string tempString = "";
	vector<string> result;
	for (size_t i = 0; i < length; i = i + 4)
	{
		for (size_t j = i; j < i + 4; j++)
		{
			tempString += (binString[j]);
		}
		if (tempString == "0000")
			result.push_back(NumberInHex(0));
		else if (tempString == "0001")
			result.push_back(NumberInHex(1));
		else if (tempString == "0010")
			result.push_back(NumberInHex(2));
		else if (tempString == "0011")
			result.push_back(NumberInHex(3));
		else if (tempString == "0100")
			result.push_back(NumberInHex(4));
		else if (tempString == "0101")
			result.push_back(NumberInHex(5));
		else if (tempString == "0110")
			result.push_back(NumberInHex(6));
		else if (tempString == "0111")
			result.push_back(NumberInHex(7));
		else if (tempString == "1000")
			result.push_back(NumberInHex(8));
		else if (tempString == "1001")
			result.push_back(NumberInHex(9));
		else if (tempString == "1010")
			result.push_back(NumberInHex(10));
		else if (tempString == "1011")
			result.push_back(NumberInHex(11));
		else if (tempString == "1100")
			result.push_back(NumberInHex(12));
		else if (tempString == "1101")
			result.push_back(NumberInHex(13));
		else if (tempString == "1110")
			result.push_back(NumberInHex(14));
		else if (tempString == "1111")
			result.push_back(NumberInHex(15));
		tempString = "";
	}
	while (result[0] == "0")
	{
		result.erase(result.begin());
	}
	return result;
}