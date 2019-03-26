#include "header.h"
void NotBin(vector<int> &bin) {
	int size = bin.size();
	for (size_t i = 0; i < size; i++)
	{
		if (bin[i] == 0)
			bin[i] = 1;
		else bin[i] = 0;
	}
}