#include "header.h"
string mul(string str1, string str2) {
	if ((str1.at(0) == '-' || str2.at(0) == '-') &&
		(str1.at(0) != '-' || str2.at(0) != '-'))
		cout << "-";


	if (str1.at(0) == '-' && str2.at(0) != '-')
	{
		str1 = str1.substr(1);
	}
	else if (str1.at(0) != '-' && str2.at(0) == '-')
	{
		str2 = str2.substr(1);
	}
	else if (str1.at(0) == '-' && str2.at(0) == '-')
	{
		str1 = str1.substr(1);
		str2 = str2.substr(1);
	}
	return findmul(str1, str2);
}