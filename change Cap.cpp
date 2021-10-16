#include <iostream>

using namespace std;

int main() {
	char c;
	const int x='a'-'A';
	while (cin >> c) {
		if (c>='a' && c<='z') {
			c-=x;
		}else if (c>='A' && c<='Z') {
			c+=x;
		}
		cout << c << '\n';
	}
	return 0;
}

