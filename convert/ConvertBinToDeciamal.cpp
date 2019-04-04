#include "header.h"
string ConvertBinToDecimal(string binString) {
	if (binString.length() < 128) {
		binString.insert(1, 0, '0');
	}
	int length = binString.length() - 1;
	int index = length - 1;
	vector<double> dec;
	dec.push_back(-(binString[0] - 48) * Exponential(2, length));
	for (size_t i = 1; i <= length; i++)
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