// convert.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "header.h"


int main(int argc, char** argv)
{
	ifstream inputfile(argv[1]);
	string str;
	//ifstream inputfile("input.txt");
	while (getline(inputfile,str)) {
		// cat chuoi bang khoang trang
		vector<string> token = parse(str, " ");
		int p1 = stoi(token[0]);
		int p2 = isP(token[1]);
		if (p2 != 0) {
			string input = token[2];
			convertfromfile(p1, p2,input);
			cout << endl;
		}
	}
	return 0;
}

