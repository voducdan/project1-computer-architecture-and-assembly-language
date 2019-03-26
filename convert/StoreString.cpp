#include "header.h"
vector<int> StoreString(string x) {
	vector<int> a;
	int len = x.length() - 1;
	while (len >= 0) {
		a.push_back((x[len] - 48));
		len--;
	}
	return a;
}