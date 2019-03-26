#include "header.h"
vector<int> AddBin(vector<int> bin1, vector<int> bin2) {
	vector<int> result;
	int sumOfBit = 0;
	int i = bin1.size() - 1;
	int j = bin2.size() - 1;
	while (i >= 0 || j >= 0 || sumOfBit == 1) {
		sumOfBit += (i >= 0) ? bin1[i] : 0;
		sumOfBit += (j >= 0) ? bin2[j] : 0;
		result.push_back(sumOfBit % 2);
		sumOfBit /= 2;
		i--;
		j--;
	}
	reverse(result.begin(), result.end());
	return result;
}