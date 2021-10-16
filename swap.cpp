#include <iostream>

using namespace std;

int main() {
	int a=7, b=16;
	a ^= b ^= a ^= b;
	cout << a << ' ' << b;
	return 0;
}

