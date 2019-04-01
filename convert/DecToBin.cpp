#include "header.h"
vector<int> DecToBin(string DecimalString) {
	string copy = DecimalString;
	vector<int> bin;
	int i;
	int pos = (copy[0] == '-') ? 1 : 0;
	while (DecimalString != "" && DecimalString != "-") {
		int next = 0;
		int add;
		int len = DecimalString.length();
		if ((DecimalString[DecimalString.length() - 1] - 48) % 2 == 0)
			bin.push_back(0);
		else bin.push_back(1);
		for (i = pos; i < len; i++) {
			add = next;
			if ((DecimalString[i] - 48) % 2 == 0)
				next = 0;
			else next = 5;
			string value = to_string((DecimalString[i] - 48) / 2 + add);
			DecimalString.replace(i, 1, value);
		}
		if (DecimalString[pos] == '0')
			DecimalString.erase(pos, 1);
	}
	if (bin.size() < 128) {
		int size = bin.size();
		for (size_t i = 0; i < 128 - size; i++)
		{
			bin.push_back(0);
		}
	}
	if (bin.size() > 128) {
		cout << "Out of bounds";
		return { -1 };
	}
	reverse(bin.begin(), bin.end());
	return bin;
}