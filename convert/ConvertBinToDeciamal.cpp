#include "header.h"
string ConvertBinToDecimal(string binString) {
	int length = binString.length() - 1;
	int index = length;
	vector<double> dec;
	for (size_t i = 0; i <= length; i++)
	{
		dec.push_back((binString[i] - 48)* Exponential(2, index));
		index--;
	}
	double count = 0;
	int size = dec.size();
	for (int i = 0; i < size; i++) {
		count += dec[i];
	}
	return to_string(count);
}