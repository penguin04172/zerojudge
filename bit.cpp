#include <iostream>

using namespace std;

int main() {
	char c;
	while (cin >> c) {
		c ^= 0x20;
		cout << c << '\n';
	}
	return 0;
}

