#include "header.h"
string NumberInHex(int number) {
	switch (number)
	{
	case 10:
		return "A";
		break;
	case 11:
		return "B";
		break;
	case 12:
		return "C";
		break;
	case 13:
		return "D";
		break;
	case 14:
		return "E";
		break;
	case 15:
		return "F";
		break;
	default:
		return to_string(number);
		break;
	}
}