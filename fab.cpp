#include <iostream>
#include <Intrin.h>

using namespace std;

__m64 fabc(int x) {
	if (x <= 2) return _m_from_int(1);
	return _mm_add_pi32(fabc(x-1), fabc(x-2));
}

int fab(int x) {
	if (x <= 2) return 1;
	return fab(x-1)+fab(x-2);
}

int main() {
	unsigned int x;
	cin >> x;
	unsigned int tmp[3] = {0, 0, 1};
	for (int i=0 ; i<x-1 ; i++) {
		tmp[0] = tmp[1];
		tmp[1] = tmp[2];
		tmp[2] = tmp[0] + tmp[1];
	}
	cout << _m_to_int(fabc(x)) << '\n';
	return 0;
}

