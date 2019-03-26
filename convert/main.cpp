// convert.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "header.h"


int main()
{
	string decimalString = "-5";
	vector<int> two = ConvertDecimalToBinary(decimalString);
	cout << "Two's Complement of -5: " << endl;
	PrintIntVector(two);
	cout << endl;
	vector<string> hex = ConvertDecimalToHex(decimalString);
	cout << "Hexdecimal of -5" << endl;
	PrintStringVector(hex);
	cout << endl;
	/*string dec = ConvertBinToDecimal("1111");
	for (size_t i = 0; i < dec.size(); i++)
	{
		cout << dec[i] << " ";
	}*/
	string binString = "1111";
	cout << ConvertBinToDecimal(binString);
	cout << endl;
	vector<string> binToHex = ConvertBinToHex(binString);
	PrintStringVector(binToHex);
	cout << endl;
	cout << ConvertHexToDec("B5");
	return 0;
}

