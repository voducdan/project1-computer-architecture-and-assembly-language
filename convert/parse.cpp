#include "header.h"
vector<string> parse(string str, string seperator) {
	vector<string> Tokens;
	int startPos = 0;
	size_t foundPos = str.find(seperator, startPos);
	while (foundPos != -1) {
		int count = foundPos - startPos;
		string token = str.substr(startPos, count);
		Tokens.push_back(token);
		startPos = foundPos + seperator.length();
		foundPos = str.find(seperator, startPos);
	}
	string token = str.substr(startPos);
	Tokens.push_back(token);
	return Tokens;
}