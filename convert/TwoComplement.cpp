#include "header.h"
vector<int> TwoComplement(vector<int> bin) {
	vector<int> one;
	one.push_back(1);
	NotBin(bin);
	return AddBin(bin, one);
}