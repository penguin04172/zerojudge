#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;
	for (int i=0 ; i<str.size()/2 ; i++) {
		swap(str[i], str[str.size()-1-i]);
	}
	cout << str << '\n';
	return 0;
}

