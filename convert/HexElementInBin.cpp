#include "header.h"
int HexElementInDec(char hexElement) {
	if (hexElement == 'A')
		return 10;
	else if (hexElement == 'B')
		return 11;
	else if (hexElement == 'C')
		return 12;
	else if (hexElement == 'D')
		return 13;
	else if (hexElement == 'E')
		return 14;
	else if (hexElement == 'F')
		return 15;
	return (hexElement - 48);
}