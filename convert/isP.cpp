#include "header.h"
int isP(string num) {
	if (num == "2" || num == "10" || num == "16")
		return stoi(num);
	return 0;
}