#include "pch.h"
#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
using namespace std;
vector<int> StoreString(string x);
vector<int> DecToBin(string DecimalString);
vector<int> AddBin(vector<int> bin1, vector<int> bin2);
void NotBin(vector<int> &bin);
vector<int> TwoComplement(vector<int> bin);
vector<int> ConvertDecimalToBinary(string decimalString);
void PrintStringVector(vector<string> V);
void PrintIntVector(vector<int> V);
string NumberInHex(int number);
string NumberInHex(int number);
vector<string> ConvertDecimalToHex(string DecimalString);
string ConvertBinToDecimal(string binString);
double Exponential(int number, int index);
vector<string> ConvertBinToHex(string binString);
string VectorToString(vector<int> str);
string ConvertHexToDec(string hexString);
int HexElementInDec(char hexElement);
string ConvertHexToBin(string hexString);
int isP(string num);
vector<string> parse(string str, string seperator);
void convertfromfile(int p1, int p2,string input);