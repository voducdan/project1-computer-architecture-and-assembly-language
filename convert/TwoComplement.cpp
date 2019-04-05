#include "header.h"
vector<int> TwoComplement(vector<int> bin) {
	vector<int> one;
	one.push_back(1);
	int len = 128 - bin.size();
	if (bin.size() < 128) {
		for (size_t i = 0; i < len; i++)
		{
			bin.insert(bin.begin(),0);
		}
	}
	NotBin(bin);
	vector<int> result =  AddBin(bin, one);
	while (result[0] == 0) {
		result.erase(result.begin());
	}
	return result;
}