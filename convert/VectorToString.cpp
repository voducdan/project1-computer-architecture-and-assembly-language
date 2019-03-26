#include "header.h"
string VectorToString(vector<int> str) {
	int length = str.size();
	string result = "";
	for (size_t i = 0; i < length; i++)
	{
		result += (str[i] + '0');
	}
	return result;
}