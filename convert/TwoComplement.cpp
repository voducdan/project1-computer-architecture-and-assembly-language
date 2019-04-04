#include "header.h"
vector<int> TwoComplement(vector<int> bin) {
	vector<int> one;
	one.push_back(1);
	NotBin(bin);
	vector<int> result =  AddBin(bin, one);
	while (result[0] == 0) {
		result.erase(result.begin());
	}
	return result;
}