// convert.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "header.h"


int main()
{
	string decimalString = "8793278316383117319";
	vector<int> two = ConvertDecimalToBinary(decimalString);
	cout << "Two's Complement of 8793278316383117319: " << endl;
	PrintIntVector(two);
	cout << endl;
	vector<string> hex = ConvertDecimalToHex(decimalString);
	cout << "Hexdecimal of 8793278316383117319" << endl;
	PrintStringVector(hex);
	cout << endl;
	string binString = "11111010";
	cout << "Decimal of 00000101 is: " << endl;
	cout << ConvertBinToDecimal(binString);
	cout << endl;
	vector<string> binToHex = ConvertBinToHex(binString);
	cout << "Hexdecimal of 00000101 is: " << endl;
	PrintStringVector(binToHex);
	cout << endl;
	cout << "Decimal of A8 is: " << endl;
	cout << ConvertHexToDec("A8");
	cout << endl;
	cout << "Binary of A8 is: " << endl;
	cout<<ConvertHexToBin("A8");
	return 0;
}

