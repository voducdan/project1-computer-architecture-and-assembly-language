// convert.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "header.h"


int main(int argc, char** argv)
{
	ifstream inputfile(argv[1]);
	string str;
	//ifstream inputfile("input.txt");
	//ofstream outputfile("output.txt");
	ofstream outputfile(argv[2]);
	cout << argv[1] << "  " << argv[2];
	while (getline(inputfile, str)) {
		// cat chuoi bang khoang trang
		vector<string> token = parse(str, " ");
		int p1 = stoi(token[0]);
		// isP kiem tra p2 
		// neu la 2 16 10 thi la chuyen doi
		// neu la 0 thi lam cai khac nhu xoay... (phan do tui m tu viet :v)
		int p2 = isP(token[1]);
		if (p2 != 0) {//p2 != 0 nen thuc hien chuyen doi
			string input = token[2];
			outputfile << convertfromfile(p1, p2, input) << endl;
		}
		else {
			//cac truong hop khac ( xoay, dao....)
		}
	}
	/*string dec = "-930480079952053655728";
	PrintStringVector(ConvertDecimalToHex(dec));*/
	return 0;
}

